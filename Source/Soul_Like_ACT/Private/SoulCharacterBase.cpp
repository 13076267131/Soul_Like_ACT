// Fill out your copyright notice in the Description page of Project Settings.

#include "SoulCharacterBase.h"
#include "AbilitySystemGlobals.h"
#include "Abilities/SoulGameplayAbility.h"
#include "Abilities/SoulModifierManager.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "ActorFxManager.h"

// Sets default values
ASoulCharacterBase::ASoulCharacterBase()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create ability system component, and set it to be explicitly replicated
    AbilitySystemComponent = CreateDefaultSubobject<USoulAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    // Create the attribute set, this replicates by default
    AttributeSet = CreateDefaultSubobject<USoulAttributeSet>(TEXT("AttributeSet"));

    FXManager = CreateDefaultSubobject<UActorFXManager>(TEXT("FXManager"));

    ModifierManager = CreateDefaultSubobject<USoulModifierManager>(TEXT("ModifierManager"));

    GetCapsuleComponent()->SetCapsuleHalfHeight(96.f);
    GetCapsuleComponent()->SetCapsuleRadius(60.f);

    TargetIcon = CreateDefaultSubobject<UWidgetComponent>(TEXT("LockIconWidget"));
    TargetIcon->SetupAttachment(RootComponent);
    TargetIcon->SetWidgetSpace(EWidgetSpace::Screen);
    TargetIcon->SetDrawSize(FVector2D{35.f, 35.f});

    static ConstructorHelpers::FClassFinder<UGameplayEffect> GE_Perilous_ClassFinder(TEXT("/Game/Abilities/GEs/GE_Ailment_Perilous"));
    static ConstructorHelpers::FClassFinder<UGameplayEffect> GE_Dead_ClassFinder(TEXT("/Game/Abilities/GEs/GE_Ailment_Perilous"));
    if(GE_Perilous_ClassFinder.Succeeded()) PerilousGE_Class = GE_Perilous_ClassFinder.Class;
    if(GE_Dead_ClassFinder.Succeeded()) DeadGE_Class = GE_Dead_ClassFinder.Class;

    AbilitySystemComponent->OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &ASoulCharacterBase::BP_OnGameplayEffectApplied);
    AbilitySystemComponent->OnAnyGameplayEffectRemovedDelegate().AddUObject(this, &ASoulCharacterBase::BP_OnGameplayEffectRemoved);
}


void ASoulCharacterBase::ToggleLockIcon()
{
    if (!IsTargetable() || TargetIcon->IsVisible())
    {
        TargetIcon->SetVisibility(false);
    }
    else
    {
        TargetIcon->SetVisibility(true);
    }
}

void ASoulCharacterBase::TriggerSlowMotion_WithDelay(float Delay)
{
    if (GetWorldTimerManager().GetTimerRemaining(Handler_SlowMotionDelay) <= 0.f)
    {
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Handler_SlowMotionDelay.IsValid()");
        GetWorldTimerManager().SetTimer(Handler_SlowMotionDelay, this, &ASoulCharacterBase::TriggerSlowMotion, 1.f, 0,
                                        Delay);
    }
}

void ASoulCharacterBase::HandleMoveSpeedChanged(const FOnAttributeChangeData& Data)
{
    GetCharacterMovement()->MaxWalkSpeed = GetMoveSpeed();

    if (OnMoveSpeedChanged.IsBound())
        OnMoveSpeedChanged.Broadcast(TArray<float>{GetMoveSpeed(), -1.f});
}

void ASoulCharacterBase::AddStartupGameplayAbilities()
{
    ModifierManager->AddStartupGameplayAbilities();
}

void ASoulCharacterBase::HandleOnDead(float DamageAmount, const bool IsCriticaled, const FHitResult& HitInfo,
    const FGameplayTagContainer& DamageTags, ASoulCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
    AbilitySystemComponent->ApplyGE_ToSelf(this, DeadGE_Class, 0);

    BP_OnDead(DamageAmount,IsCriticaled,HitInfo,DamageTags,InstigatorCharacter,DamageCauser);
}

void ASoulCharacterBase::HandleOnCrumble(float PostureDamageAmount, const bool IsCriticaled, const FHitResult& HitInfo,
    const FGameplayTagContainer& DamageTags, ASoulCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
    AbilitySystemComponent->ApplyGE_ToSelf(this, PerilousGE_Class, 0);

    BP_OnCrumbled(PostureDamageAmount, IsCriticaled, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);
}

void ASoulCharacterBase::HandleDamage(float DamageAmount, const bool IsCriticaled, const bool bIsStun,
                                      const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags,
                                      ASoulCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
    OnDamaged(DamageAmount, IsCriticaled, bIsStun, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);

    if (GetIsHealthZero())
    {        
        HandleOnDead(DamageAmount, IsCriticaled, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);
    }
}

void ASoulCharacterBase::HandleDotDamage(float DamageAmount, const bool IsCriticaled, const bool bIsStun,
                                         const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags,
                                         ASoulCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
    OnDotDamaged(DamageAmount, IsCriticaled, bIsStun, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);

    if (GetIsHealthZero())
    {
        HandleOnDead(DamageAmount, IsCriticaled, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);
    }

}

void ASoulCharacterBase::HandlePostureDamage(float PostureDamageAmount, const bool IsCriticaled,
                                             const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags,
                                             ASoulCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
    OnPostureDamaged(PostureDamageAmount, IsCriticaled, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);

    if(FMath::IsNearlyEqual(GetPosture(), GetMaxPosture()))
    {
        HandleOnCrumble(PostureDamageAmount, IsCriticaled, HitInfo, DamageTags, InstigatorCharacter, DamageCauser);
    }
}

void ASoulCharacterBase::ResetPerilousStatus()
{
    LOG_FUNC_FAIL();
}

void ASoulCharacterBase::MakeStepDecelAndSound_Notify(ASoulCharacterBase* CharacterRef)
{
    CharacterRef->MakeStepDecelAndSound();
}

void ASoulCharacterBase::GetMovementMode(ESoulMovementMode& MovementMode) const
{
    const float SpeedProportion = GetVelocity().Size() / AttributeSet->GetMoveSpeed();

    if (FMath::IsNearlyZero(SpeedProportion))
        MovementMode = ESoulMovementMode::Idle;
    else if (SpeedProportion <= 0.61f)
        MovementMode = ESoulMovementMode::Run;
    else
        MovementMode = ESoulMovementMode::Sprint;
}

bool ASoulCharacterBase::BodySweep_Init(const AActor* Target, bool bUseTarget, float InSweepingSpeed)
{
    BodySweep_ForwardVec = FVector::ZeroVector;
    
    if(Target && bUseTarget)
        BodySweep_ForwardVec = (Target->GetActorLocation() - GetActorLocation()).GetSafeNormal2D(.01);
    else
    {
        BodySweep_ForwardVec = FRotationMatrix(GetControlRotation()).GetScaledAxis(EAxis::X).GetSafeNormal2D();
    }

    if(BodySweep_ForwardVec.IsNearlyZero())
        return false;
    else
    {
        //Face the desired direction
        SetActorRotation(BodySweep_ForwardVec.Rotation(), ETeleportType::TeleportPhysics);
        GetCapsuleComponent()->SetEnableGravity(false);
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        SweepingSpeed = InSweepingSpeed;

        return true;
    }
}

void ASoulCharacterBase::BodySweep_Tick(float Delta)
{
    if(!BodySweep_ForwardVec.IsNearlyZero())
    {
        SetActorLocation(GetActorLocation() + Delta * SweepingSpeed * BodySweep_ForwardVec);
    }
}

void ASoulCharacterBase::BodySweep_Finished()
{
    GetCapsuleComponent()->SetEnableGravity(false);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ASoulCharacterBase::MakeStepDecelAndSound_Implementation()
{
    return;
}

UAbilitySystemComponent* ASoulCharacterBase::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

USoulModifierManager* ASoulCharacterBase::GetModifierManager() const
{
    return ModifierManager;
}

const bool ASoulCharacterBase::IsInRivalFaction(ASoulCharacterBase* DamageDealer, ASoulCharacterBase* DamageReceiver)
{
    if (DamageDealer->Faction == EActorFaction::Player && DamageReceiver->Faction == EActorFaction::Enemy)
        return 1;

    else if (DamageDealer->Faction == EActorFaction::Enemy && DamageReceiver->Faction == EActorFaction::Player)
        return 1;

    return 0;
}

void ASoulCharacterBase::PossessedBy(AController* NewController)
{
    Super::PossessedBy(NewController);
    LOG_FUNC_SUCCESS();
}

void ASoulCharacterBase::UnPossessed()
{
    Super::UnPossessed();
}

void ASoulCharacterBase::BindOnAttributesChanged()
{
    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetHealthAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleHealthChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetPostureAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandlePostureChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetLeechAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleLeechChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetAttackSpeedAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleAttackSpeedChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetMoveSpeedAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleMoveSpeedChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetPostureStrengthAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandlePostureStrengthChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetDefensePowerAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleDefensePowerChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetAttackPowerAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleAttackPowerChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetPostureCrumbleAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandlePostureCrumbleChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetCriticalStrikeAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleCriticalStrikeChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetCriticalMultiAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleCriticalMultiChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetMaxHealthAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandleHealthChanged);

    AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(USoulAttributeSet::GetMaxPostureAttribute())
                          .AddUObject(this, &ASoulCharacterBase::HandlePostureChanged);
}

// Called every frame
void ASoulCharacterBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASoulCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
