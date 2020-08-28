// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerTargetingComponent.generated.h"

UENUM(BlueprintType)
enum class ETargetFindingDirection : uint8
{
    Centre,
    Left,
    Right,
};

struct FRotationCache
{
    bool bOwnerControllerRotationYaw = false
     , bOwnerOrientRotToMovement = true
     , bOwnerControllerDesiredRot = false;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOUL_LIKE_ACT_API UPlayerTargetingComponent : public UActorComponent
{
    GENERATED_BODY()

protected:
    FTimerHandle TargetBlockingHandler;

    bool bLockCamera;
    
    bool bIsFacingOffsetEnabled;
    float FacingOffsetDelta;
    float FacingOffset_ForwardRotationYaw;
    float FacingOffset_CurrentRotationYaw;

    FRotationCache RotationCache;

    UPROPERTY()
    TArray<AActor*> PotentialTargetActors;

    class ACharacter* _PlayerRef;

public:
    UPlayerTargetingComponent();

    UPROPERTY()
    class AActor* LockedTarget;

    UPROPERTY()
    bool isTargetingEnabled;

protected:
    virtual void BeginPlay() override;

    //Detection Stages-----------
    void FindTarget(ETargetFindingDirection Direction = ETargetFindingDirection::Centre);

    void GetPotentialTargetsInScreen(TArray<AActor*>& OutPotentialTargets);
    void RuleOutBlockedTargets(TArray<AActor*> LocalPotentialTargets, TArray<AActor*>& OutPotentialTargets);

    void FindClosestTargetInScreen(TArray<AActor*>& LocalPotentialTargets, AActor*& ClosestTarget);
    void Find_InDirection(TArray<AActor*>& LocalPotentialTargets, AActor*& ClosestTarget,
                          ETargetFindingDirection Direction);
    //---------------------------

    void EnableLockingTarget();
    void DisableLockingTarget();

    void CacheRotationSetting();
    void ResetRotationSetting() const;

    void SetRotationMode_FaceTarget();

    bool IsTraceBlocked(AActor* SelectedTarget, TArray<AActor*> IgnoredActors, const ECollisionChannel TraceChannel);
    FVector GetLineTraceStartLocation();

    void Timer_CheckBlockingAndDistance();

    void Tick_UpdateRotation();
public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType,
                               FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable)
    void ToggleCameraLock(bool _bLockCamera);

    UFUNCTION(BlueprintCallable)
    void Toggle_InDirection(ETargetFindingDirection Direction) { FindTarget(Direction); }

    bool GetIsTargetingEnabled() const { return isTargetingEnabled; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = TargetLocking)
    void GetLockedTarget(bool& isEnabled, AActor*& OutLockedTarget) const
    {
        isEnabled = isTargetingEnabled;
        OutLockedTarget = LockedTarget;
    }

    FVector GetNormalizedVec(FVector Inp);

    friend class ASoul_Like_ACTCharacter;
};
