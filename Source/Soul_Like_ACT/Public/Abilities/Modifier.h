#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Engine/DataTable.h"
#include "Modifier.generated.h"

USTRUCT(BlueprintType)
struct SOUL_LIKE_ACT_API FModifier : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FName DisplayName;

    //Attack + 10 && defense - 10
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSubclassOf<class UModifierAbility> ModifierClass;
};

USTRUCT(BlueprintType)
struct FModifierParams
{
    GENERATED_BODY()

public:
    FModifierParams();

    FModifierParams(TArray<float> InParams)
        :Params(InParams)
    {}

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TArray<float> Params;
};

USTRUCT()
struct FModifierEffectHandles
{
    GENERATED_BODY()

    FModifierEffectHandles(){}
    
    FModifierEffectHandles(TArray<struct FActiveGameplayEffectHandle>& InEffectHandles)
        :EffectHandles(InEffectHandles)
    {}

    UPROPERTY()
    TArray<struct FActiveGameplayEffectHandle> EffectHandles;
};
