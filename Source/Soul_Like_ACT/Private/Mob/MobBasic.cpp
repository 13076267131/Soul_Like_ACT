// Fill out your copyright notice in the Description page of Project Settings.

#include "Mob/MobBasic.h"
#include "GameFramework/Controller.h"
#include "Components/CapsuleComponent.h"
#include "Mob/Mob_TargetingComponent.h"
#include "Mob/MobActionManager.h"
#include "Item/WeaponActor.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "ActorFXManager.h"
#include "AIController.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMobBasic::AMobBasic()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    TargetingComponent = CreateDefaultSubobject<UMob_TargetingComponent>(TEXT("TargetingComponent"));

    ActionManager = CreateDefaultSubobject<UMobActionManager>(TEXT("ActionManager"));

    Faction = EActorFaction::Enemy;

    const TSubclassOf<class UUserWidget> IconWidget = ConstructorHelpers::FClassFinder<UUserWidget>(
        TEXT("/Game/UMG/Mob/w_mob_LockIcon")).Class;
    TargetIcon->SetWidgetClass(IconWidget);
    TargetIcon->SetVisibility(0);
}

// Called when the game starts or when spawned
void AMobBasic::BeginPlay()
{
    Super::BeginPlay();
}


void AMobBasic::HandleOnDead()
{
    Super::HandleOnDead();

    MobOnDead();
}

void AMobBasic::ForceOverrideFacingDirection(float Alpha)
{
    AAIController* MobController = Cast<AAIController>(GetController());
    UBlackboardComponent* BB = MobController->GetBlackboardComponent();
    UObject* Target = BB->GetValueAsObject("Target");
    
    if(Target)
    {
        FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Cast<AActor>(Target)->GetActorLocation());

        //trim-off roll and pitch axises
        LookAtRotation.Roll = LookAtRotation.Pitch = 0.f;
            
        const FRotator TargetRotation = UKismetMathLibrary::RLerp(GetActorRotation(), LookAtRotation, Alpha, true);

        SetActorRotation(TargetRotation);
    }
}

void AMobBasic::MobOnDead_Implementation()
{
    //Remove Collision
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);

    AController* LocalController = GetController();

    if (LocalController)
        LocalController->UnPossess();

    GetTargetingComponent()->FacingTarget_End();

    Faction = EActorFaction::Untargetable;

    StopAnimMontage(GetMesh()->GetAnimInstance()->GetCurrentActiveMontage());
}

void AMobBasic::SetTarget(AActor* PlayerPawn) const
{
    TargetingComponent->SetTarget(PlayerPawn);
}

void AMobBasic::SetFocus(bool InputMode, AActor* Target)
{
    if (TargetingComponent->GetIsEnabled() && InputMode == 0)
    {
        TargetingComponent->FacingTarget_End();
        TargetingComponent->SetTarget(nullptr);
        return;
    }
    if (!TargetingComponent->GetIsEnabled() && InputMode == 1)
    {
        TargetingComponent->FacingTarget_Init();
        TargetingComponent->SetTarget(Target);
        return;
    }
}

bool AMobBasic::GetIsTargetingEnabled() const
{
    return TargetingComponent->GetIsEnabled();
}
