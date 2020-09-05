// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Abilities/Modifier.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities/SoulGameplayAbility.h"
#include "SoulSerializerBpLib.generated.h"

struct FGameplayAttribute;
class USoulGameplayAbility;
class USoulItem;

/**
 * 
 */
UCLASS()
class SOUL_LIKE_ACT_API USoulSerializerBpLib : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    static void AttributeToString(FGameplayAttribute Attribute, FString& Output);

    template <typename T, typename Y>
    static FORCEINLINE void AddKeysToMap(TArray<T>& InKeys, TMap<T, Y>& InMap)
    {
        for (T InKey : InKeys)
        {
            InMap.FindOrAdd(InKey);
        }
    }

    template <typename T, typename Y, typename U>
    static FORCEINLINE void Map_CopyKeys(TMap<T, Y>& FromMap, TMap<T, U>& ToMap)
    {
        TArray<T> TempKeys;
        FromMap.GetKeys(TempKeys);

        AddKeysToMap(TempKeys, ToMap);
    }
};
