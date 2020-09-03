#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Abilities/SoulGameplayAbility.h"

#include "ItemAttribute.generated.h"

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API UModifier : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FName DisplayName;
    // UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
    // FGameplayTag ModifierType;
    // UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    // FGameplayTagContainer TagCluster;

    //Attack + 10 && defense - 10
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TArray<TSubclassOf<USoulPrimaryStatusGameplayAbility>> GA_Modifiers;
};

USTRUCT(BlueprintType)
struct SOUL_LIKE_ACT_API FModifierParams
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Modifier)
    TArray<float> Params;

    static bool IsValid(const UModifier& Modifier)
    {
       return true; 
    }
};
