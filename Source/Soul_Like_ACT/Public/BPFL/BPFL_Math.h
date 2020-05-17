// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_Math.generated.h"

class AActor;

UENUM(BlueprintType)
enum class EFourDirection : uint8
{
    Forward,
    Backward,
    Left,
    Right
};

UCLASS()
class SOUL_LIKE_ACT_API UBPFL_Math : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = Math)
    static void FindDegreeToTarget(const AActor* HitActor, const AActor* Attacker, float& Result);
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = Math)
    static void FindDegreeToHitNorm(const FRotator& ActorRotation, const FVector& HitNorm, float& Result);
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = Math)
    static void DegreeToFourDirection(float Degree, EFourDirection& Direction);
};
