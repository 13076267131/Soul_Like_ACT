// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Abilities/GameplayAbility.h"
#include "Abilities/SoulAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "SoulAbilityTask_PlayMontageAndWaitForEvent.h"
#include "SoulJsonObject.h"
#include "SoulGameplayAbility.generated.h"

/**
 * Subclass of ability blueprint type with game-specific data
 * This class uses GameplayEffectContainers to allow easier execution of gameplay effects based on a triggering tag
 * Most games will need to implement a subclass to support their game-specific code
 */
UCLASS(Abstract)
class SOUL_LIKE_ACT_API USoulGameplayAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    // Constructor and overrides
    USoulGameplayAbility()
    {}

    UFUNCTION(BlueprintCallable)
    float GetAttackSpeed() const;

    /** Map of gameplay tags to gameplay effect containers */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = GameplayEffects)
    TMap<FGameplayTag, FSoulGameplayEffectContainer> EffectContainerMap;


    /** Applies a gameplay effect container, by creating and then applying the spec */
    UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
    virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag,
                                                                     const FGameplayEventData& EventData,
                                                                     int32 OverrideGameplayLevel = -1);
protected:
    /** Make gameplay effect container spec to be applied later, using the passed in container */
    UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
    virtual FSoulGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(
        const FSoulGameplayEffectContainer& Container, const FGameplayEventData& EventData,
        int32 OverrideGameplayLevel = -1);

    /** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */
    UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData"))
    virtual FSoulGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag,
                                                                     const FGameplayEventData& EventData,
                                                                     int32 OverrideGameplayLevel = -1);

    /** Applies a gameplay effect container spec that was previously created */
    UFUNCTION(BlueprintCallable, Category = Ability)
    virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(
        const FSoulGameplayEffectContainerSpec& ContainerSpec);
};

UCLASS()
class SOUL_LIKE_ACT_API USoulActiveAbility : public USoulGameplayAbility
{
    GENERATED_BODY()

    FName LatentSectionName;
    UPROPERTY()
    FTimerHandle JumpSectionHandle;

public:
    USoulActiveAbility();

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AbilityTask)
    USoulAbilityTask_PlayMontageAndWaitForEvent* AbilityTask;
    
    UFUNCTION(BlueprintCallable, Category = Ability)
    void EndLatentAbility(bool bUseDuration, FName InLatentSectionName, float Duration);

    UFUNCTION()
    void _EndLatentAbility();
};

UCLASS()
class SOUL_LIKE_ACT_API UModifierAbility : public USoulGameplayAbility
{
    GENERATED_BODY()

public:
    /**
     * Can call GetPrimaryInstance() after called GiveAbility().
     */
    UModifierAbility()
    {
        InstancingPolicy = EGameplayAbilityInstancingPolicy::Type::InstancedPerActor;
    }
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Default)
    TArray<TSubclassOf<UGameplayEffect>> ModifierEffects;

    void SetModifierParameters(const TArray<float>& Params);
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
    virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

protected:
    UPROPERTY()
    TMap<FModifierEffectHandles, FModifierParams> ModifierEffectParams;
    UPROPERTY()
    TArray<FModifierParams> ExtraParams;
};


UCLASS()
class SOUL_LIKE_ACT_API UGA_Melee : public USoulGameplayAbility
{
    GENERATED_BODY()

public:
    UGA_Melee()
    {
        ActivationBlockedTags.AddTagFast(FGameplayTag::RequestGameplayTag("Ailment.Dead", true));
        ActivationBlockedTags.AddTagFast(FGameplayTag::RequestGameplayTag("Ailment.Stun", true));
    }
    
protected:
    UPROPERTY()
    int32 CurrentComboIndex;
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = Animation)
    TArray<UAnimMontage*> ComboMontages;

    UFUNCTION(BlueprintCallable, Category = Animation)
    UAnimMontage* GetComboMontage() const { return ComboMontages[CurrentComboIndex]; }

    UFUNCTION(BlueprintCallable, Category = Animation)
    void SetNextComboMontageIndex()
    {
        ++CurrentComboIndex;

        if (CurrentComboIndex == ComboMontages.Num())
            CurrentComboIndex = 0;
    }
};