// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_Math.generated.h"

class AActor;

/**
 * 
 */
UCLASS()
class SOUL_LIKE_ACT_API UBPFL_Math : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Math)
	static void FindYawValueToFacingDirection(const AActor* HitActor, const AActor* Attacker, float& Result, bool& isLeft);
};