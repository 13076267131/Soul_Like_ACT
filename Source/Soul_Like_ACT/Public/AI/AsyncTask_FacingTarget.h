// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTask_FacingTarget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFacingEnded);


UCLASS(meta=(HideThen = true))
class SOUL_LIKE_ACT_API UAsyncTask_FacingTarget : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject",
        DeprecatedFunction), Category = AI)
    static UAsyncTask_FacingTarget* AI_FacingTarget
    (
        UObject* WorldContextObject,
        float DegreeTolerance,
        float Duration,
        float YawSpeed,
        class APawn* AI_Pawn,
        class AActor* Target
    );

    UPROPERTY()
    FTimerHandle RotatingTimer;

    UPROPERTY(BlueprintAssignable)
    FOnFacingEnded OnEnded;

    virtual void Activate() override;

protected:
    UPROPERTY()
    UWorld* World;

    class APawn* AI_Pawn;
    class AActor* Target;
    float DegreeTolerance;
    float Duration;
    float YawSpeed;

    UFUNCTION()
    void TryRotate();
};
