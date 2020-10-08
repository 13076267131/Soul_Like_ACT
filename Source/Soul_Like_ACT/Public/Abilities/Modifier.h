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

    bool operator==(const FModifierParams& Other) const
    {
        return Params == Other.Params;
    }

    bool Merge(const FModifierParams& Other)
    {
        if(Params.Num() != Other.Params.Num()) return false;
        
        for(int i = 0;i < Params.Num(); ++i)
            Params[i]+=Other.Params[i];
        
        return true;
    }
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

    bool operator==(const FModifierEffectHandles& Other) const
    {
        for(int i = 0; i < EffectHandles.Num(); ++i)
            if(EffectHandles[i] != Other.EffectHandles[i])
                return false; 

        return true;
    }
};