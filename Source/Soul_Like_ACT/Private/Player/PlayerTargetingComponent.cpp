// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/PlayerTargetingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/Targetable.h"
#include "SoulCharacterBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"


UPlayerTargetingComponent::UPlayerTargetingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerTargetingComponent::BeginPlay()
{
    Super::BeginPlay();

    _PlayerRef = Cast<ACharacter>(GetOwner());
    check(_PlayerRef);
}

void UPlayerTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    Tick_UpdateRotation();

    //Facing Offset during attacking
    if (bIsFacingOffsetEnabled && !isTargetingEnabled)
    {
        FacingOffsetDelta = FMath::Clamp(FacingOffsetDelta + DeltaTime * 5.f, 0.f, 1.f);
        const FRotator IdleRotation = FMath::Lerp(FRotator(0.f, FacingOffset_CurrentRotationYaw, 0.f),
                                                  FRotator(0.f, FacingOffset_ForwardRotationYaw, 0.f), FacingOffsetDelta);

        GetOwner()->SetActorRotation(IdleRotation);

        if (FacingOffsetDelta == 1.f)
            bIsFacingOffsetEnabled = false;
    }
}


void UPlayerTargetingComponent::ToggleCameraLock(bool _bLockCamera)
{
    if (!isTargetingEnabled)
    {
        bLockCamera = _bLockCamera;
        FindTarget(ETargetFindingDirection::Centre);
    }
    else
    {
        DisableLockingTarget();
    }
}

void UPlayerTargetingComponent::FindTarget(ETargetFindingDirection Direction /*= ETargetFindingDirection::Centre*/)
{
    TArray<AActor*> LocalPotentialTargets, LocalPotentialTargets_Stage_2;

    GetPotentialTargetsInScreen(LocalPotentialTargets);

    if (LocalPotentialTargets.Num() == 0) { return DisableLockingTarget(); }

    RuleOutBlockedTargets(LocalPotentialTargets, LocalPotentialTargets_Stage_2);

    if (LocalPotentialTargets_Stage_2.Num() == 0) { return DisableLockingTarget(); }

    if (Direction == ETargetFindingDirection::Centre)
        FindClosestTargetInScreen(LocalPotentialTargets_Stage_2, LockedTarget);
    else
        Find_InDirection(LocalPotentialTargets_Stage_2, LockedTarget, Direction);

    if (LockedTarget)
        EnableLockingTarget();
}

void UPlayerTargetingComponent::GetPotentialTargetsInScreen(TArray<AActor*>& OutPotentialTargets)
{
    TArray<AActor*> TargetableActors;

    UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UTargetable::StaticClass(), TargetableActors);

    for (auto* TargetableActor : TargetableActors)
    {
        if (TargetableActor == GetOwner()) continue;

        //Is the potential actor target-able
        auto* Targetable = Cast<ITargetable>(TargetableActor);
        if (!Targetable->IsTargetable() && TargetableActor != GetOwner()) continue;


        //Mesure distance between target and player pawn
        if (TargetableActor->GetDistanceTo(GetOwner()) >= 2500.f) continue;

        //Measure whether target in screen
        FVector2D TargetAtScreenPosition;
        if (!UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(),
                                                    TargetableActor->GetActorLocation(), TargetAtScreenPosition, 0))
            continue;

        OutPotentialTargets.Add(TargetableActor);
    }
}

void UPlayerTargetingComponent::RuleOutBlockedTargets(TArray<AActor*> LocalPotentialTargets,
                                                 TArray<AActor*>& OutPotentialTargets)
{
    for (auto* TargetableActor : LocalPotentialTargets)
    {
        if (!IsTraceBlocked(TargetableActor, TArray<AActor*>{TargetableActor}, ECC_Camera))
            OutPotentialTargets.Add(TargetableActor);
    }
}

void UPlayerTargetingComponent::FindClosestTargetInScreen(TArray<AActor*>& LocalPotentialTargets, AActor*& ClosestTarget)
{
    int32 LocalX, LocalY;
    GetWorld()->GetFirstPlayerController()->GetViewportSize(LocalX, LocalY);
    const FVector2D ScreenCentre{LocalX * .5f, LocalY * .5f};

    //Get first potential target
    FVector2D TargetScreenPosition;

    UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(),
                                           LocalPotentialTargets[0]->GetActorLocation(), TargetScreenPosition, 0);
    float ClosestScreenDistance = FVector2D::Distance(TargetScreenPosition, ScreenCentre);
    AActor* TempClosestTarget = LocalPotentialTargets[0];

    for (int i = 1; i < LocalPotentialTargets.Num(); ++i)
    {
        UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(),
                                               LocalPotentialTargets[i]->GetActorLocation(), TargetScreenPosition, 0);
        const float LocalScreenDistance = FVector2D::Distance(TargetScreenPosition, ScreenCentre);

        if (LocalScreenDistance < ClosestScreenDistance)
        {
            TempClosestTarget = LocalPotentialTargets[i];
            ClosestScreenDistance = LocalScreenDistance;
        }
    }

    if (TempClosestTarget)
    {
        ClosestTarget = TempClosestTarget;
        //UE_LOG(LogTemp, Warning, TEXT("Target Position on Screen: %s, Screen Centre Vec: %s"), *TargetScreenPosition.ToString(), *ScreenCentre.ToString());
    }
}

void UPlayerTargetingComponent::Find_InDirection(TArray<AActor*>& LocalPotentialTargets, AActor*& ClosestTarget,
                                            ETargetFindingDirection Direction)
{
    if (!isTargetingEnabled || !LockedTarget)
    {
        return;
    }
    else
    {
        AActor* TempClosestTarget = nullptr;

        FVector2D SelectedVector;
        UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(),
                                               ClosestTarget->GetActorLocation(),
                                               SelectedVector);

        //Get first potential target
        FVector2D TargetScreenPosition;

        float ClosestScreenDistance = 100000.f;

        for (int i = 0; i < LocalPotentialTargets.Num(); ++i)
        {
            //Skip the selected actor
            if (LockedTarget == LocalPotentialTargets[i]) continue;

            UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(),
                                                   LocalPotentialTargets[i]->GetActorLocation(),
                                                   TargetScreenPosition);

            //Compare X
            if (Direction == ETargetFindingDirection::Left && TargetScreenPosition.X > SelectedVector.X)
                continue;
            if (Direction == ETargetFindingDirection::Right && TargetScreenPosition.X < SelectedVector.X)
                continue;

            const float LocalScreenDistance = FVector2D::Distance(TargetScreenPosition, SelectedVector);

            if (LocalScreenDistance < ClosestScreenDistance)
            {
                TempClosestTarget = LocalPotentialTargets[i];
                ClosestScreenDistance = LocalScreenDistance;
            }
        }

        if (TempClosestTarget)
        {
            Cast<ASoulCharacterBase>(ClosestTarget)->ToggleLockIcon();
            ClosestTarget = TempClosestTarget;
            //UE_LOG(LogTemp, Warning, TEXT("Target Position on Screen: %s, Screen Centre Vec: %s"), *TargetScreenPosition.ToString(), *ScreenCentre.ToString());
        }
    }
}

void UPlayerTargetingComponent::EnableLockingTarget()
{
    isTargetingEnabled = true;

    CacheRotationSetting();
    SetRotationMode_FaceTarget();
    
    Cast<ITargetable>(LockedTarget)->ToggleLockIcon();

    GetWorld()->GetTimerManager().SetTimer(TargetBlockingHandler, this,
                                           &UPlayerTargetingComponent::Timer_CheckBlockingAndDistance, .15f, true, 0.03f);

    GetOwner()->GetInstigatorController()->SetIgnoreLookInput(!bLockCamera);
}


void UPlayerTargetingComponent::SetRotationMode_FaceTarget()
{
    _PlayerRef->bUseControllerRotationYaw = false;
    _PlayerRef->GetCharacterMovement()->bOrientRotationToMovement = false;
    _PlayerRef->GetCharacterMovement()->bUseControllerDesiredRotation = false;
}

void UPlayerTargetingComponent::CacheRotationSetting()
{
    RotationCache.bOwnerControllerRotationYaw = _PlayerRef->bUseControllerRotationYaw;
    RotationCache.bOwnerOrientRotToMovement = _PlayerRef->GetCharacterMovement()->bOrientRotationToMovement;
    RotationCache.bOwnerControllerDesiredRot = _PlayerRef->GetCharacterMovement()->bUseControllerDesiredRotation;
}

void UPlayerTargetingComponent::ResetRotationSetting() const
{
    _PlayerRef->bUseControllerRotationYaw = RotationCache.bOwnerControllerRotationYaw;
    _PlayerRef->GetCharacterMovement()->bOrientRotationToMovement = RotationCache.bOwnerOrientRotToMovement;
    _PlayerRef->GetCharacterMovement()->bUseControllerDesiredRotation = RotationCache.bOwnerControllerDesiredRot;
}

void UPlayerTargetingComponent::DisableLockingTarget()
{
    isTargetingEnabled = false;

    if (LockedTarget)
        Cast<ITargetable>(LockedTarget)->ToggleLockIcon();

    LockedTarget = nullptr;

    ResetRotationSetting();
    
    GetOwner()->GetInstigatorController()->ResetIgnoreLookInput();
}


bool UPlayerTargetingComponent::IsTraceBlocked(AActor* SelectedTarget, TArray<AActor*> IgnoredActors,
                                          const ECollisionChannel TraceChannel)
{
    TArray<FHitResult> Hits;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetOwner());
    QueryParams.AddIgnoredActors(IgnoredActors);

    //Rule-out targets where line trace from player to target is blocked in ECC_Camera channel
    if ((GetWorld()->LineTraceMultiByChannel(Hits, GetLineTraceStartLocation(), SelectedTarget->GetActorLocation(),
                                             TraceChannel, QueryParams)))
        return true;
    return false;
}

FVector UPlayerTargetingComponent::GetLineTraceStartLocation()
{
    return (GetOwner()->GetActorLocation()
        + GetOwner()->GetActorForwardVector() * 10.f
        + GetOwner()->GetActorUpVector() * 100.f);
}

void UPlayerTargetingComponent::Timer_CheckBlockingAndDistance()
{
    if (!isTargetingEnabled)
    {
        GetWorld()->GetTimerManager().ClearTimer(TargetBlockingHandler);
        return;
    }

    if (IsTraceBlocked(LockedTarget, TArray<AActor*>{LockedTarget}, ECC_WorldStatic))
    {
        DisableLockingTarget();
        return FindTarget();
    }

    const float LocalDistance = FVector::Distance(GetOwner()->GetActorLocation(), LockedTarget->GetActorLocation());

    //Detect Distance
    if (LocalDistance <= 50.f || LocalDistance >= 2500.f)
    {
        DisableLockingTarget();
        return FindTarget();
    }

    if (!Cast<ITargetable>(LockedTarget)->IsTargetable())
    {
        DisableLockingTarget();
        return FindTarget();
    }
}

void UPlayerTargetingComponent::Tick_UpdateRotation()
{
    if (!isTargetingEnabled) return;

    //Set Capsule Component rotation to face the target
    const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(_PlayerRef->GetActorLocation(),
                                                                           LockedTarget->GetActorLocation());

    if (!bLockCamera)
    {
        const FRotator LookedAtCameraRotation = FMath::RInterpConstantTo(_PlayerRef->GetControlRotation(),
                                                                         LookAtRotation + FRotator{-20.f, 0.f, 0.f},
                                                                         GetWorld()->GetDeltaSeconds(), 300.f);

        _PlayerRef->GetInstigator()->GetController()->SetControlRotation(LookedAtCameraRotation);
    }

    //TODO need a precise condition
    //Prevent the CapsuleComponent sliding when gets close to the target
    if (!_PlayerRef->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() || isTargetingEnabled)
    {
        const FRotator PlayerRotation = _PlayerRef->GetActorRotation();

        _PlayerRef->SetActorRotation(FMath::RInterpConstantTo(
            PlayerRotation,
            FRotator{PlayerRotation.Pitch, LookAtRotation.Yaw, PlayerRotation.Roll},
            GetWorld()->GetDeltaSeconds(),
            600.f));
    }
}
