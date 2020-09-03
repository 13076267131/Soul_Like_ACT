// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities/SoulGameplayAbility.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/SoulAbilitySystemComponent.h"
#include "Abilities/SoulTargetType.h"
#include "SoulCharacterBase.h"


FSoulGameplayEffectContainerSpec USoulGameplayAbility::MakeEffectContainerSpecFromContainer(
    const FSoulGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
    // First figure out our actor info
    FSoulGameplayEffectContainerSpec ReturnSpec;
    AActor* OwningActor = GetOwningActorFromActorInfo();
    ASoulCharacterBase* OwningCharacter = Cast<ASoulCharacterBase>(OwningActor);
    USoulAbilitySystemComponent* OwningASC = USoulAbilitySystemComponent::
        GetAbilitySystemComponentFromActor(OwningActor);

    if (OwningASC)
    {
        // If we have a target type, run the targeting logic. This is optional, targets can be added later
        if (Container.TargetType.Get())
        {
            TArray<FHitResult> HitResults;
            TArray<AActor*> TargetActors;
            const USoulTargetType* TargetTypeCDO = Container.TargetType.GetDefaultObject();
            AActor* AvatarActor = GetAvatarActorFromActorInfo();
            TargetTypeCDO->GetTargets(OwningCharacter, AvatarActor, EventData, HitResults, TargetActors);
            ReturnSpec.AddTargets(HitResults, TargetActors);
        }

        // If we don't have an override level, use the default ont he ability system component
        if (OverrideGameplayLevel == INDEX_NONE)
        {
            OverrideGameplayLevel = OwningASC->GetDefaultAbilityLevel();
        }

        // Build GameplayEffectSpecs for each applied effect
        for (const TSubclassOf<UGameplayEffect>& EffectClass : Container.TargetGameplayEffectClasses)
        {
            FGameplayEffectSpecHandle newGEHandle = MakeOutgoingGameplayEffectSpec(EffectClass, OverrideGameplayLevel);

            ReturnSpec.TargetGameplayEffectSpecs.
                       Add(newGEHandle);
        }
    }
    return ReturnSpec;
}

FSoulGameplayEffectContainerSpec USoulGameplayAbility::MakeEffectContainerSpec(
    FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
    FSoulGameplayEffectContainer* FoundContainer = EffectContainerMap.Find(ContainerTag);

    if (FoundContainer)
    {
        return MakeEffectContainerSpecFromContainer(*FoundContainer, EventData, OverrideGameplayLevel);
    }
    return FSoulGameplayEffectContainerSpec();
}

TArray<FActiveGameplayEffectHandle> USoulGameplayAbility::ApplyEffectContainerSpec(
    const FSoulGameplayEffectContainerSpec& ContainerSpec)
{
    TArray<FActiveGameplayEffectHandle> AllEffects;

    // Iterate list of effect specs and apply them to their target data
    for (const FGameplayEffectSpecHandle& SpecHandle : ContainerSpec.TargetGameplayEffectSpecs)
    {
        AllEffects.Append(K2_ApplyGameplayEffectSpecToTarget(SpecHandle, ContainerSpec.TargetData));
    }
    return AllEffects;
}

float USoulGameplayAbility::GetAttackSpeed() const
{
    ASoulCharacterBase* OwnerCharacter = Cast<ASoulCharacterBase>(GetOwningActorFromActorInfo());
    if (OwnerCharacter)
        return (OwnerCharacter->GetAttackSpeed() / 100.f + 1.f);
    return 1.f;
}

TArray<FActiveGameplayEffectHandle> USoulGameplayAbility::ApplyEffectContainer(
    FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel)
{
    const FSoulGameplayEffectContainerSpec Spec = MakeEffectContainerSpec(ContainerTag, EventData, OverrideGameplayLevel);
    return ApplyEffectContainerSpec(Spec);
}

void USoulModifierGameplayAbility::ApplyEffectsToSelf()
{
    for (auto& LocalGE : ModifierEffects)
    {
        FActiveGameplayEffectHandle NewActivatedGE = USoulAbilitySystemComponent::ApplyGE_ToSelf(
            GetOwningActorFromActorInfo(), LocalGE, GetAbilityLevel());

        if (NewActivatedGE.IsValid())
        {
            EffectCollection.Add(NewActivatedGE);
        }
    }
}

void USoulModifierGameplayAbility::RemoveEffectsFromSelf()
{
    for (FActiveGameplayEffectHandle& LocalActiveEffect : EffectCollection)
    {
        if (LocalActiveEffect.WasSuccessfullyApplied())
            LocalActiveEffect.GetOwningAbilitySystemComponent()->RemoveActiveGameplayEffect(LocalActiveEffect);
    }
}

USoulPrimaryStatusGameplayAbility::USoulPrimaryStatusGameplayAbility()
{
}

void USoulPrimaryStatusGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                        const FGameplayEventData* TriggerEventData)
{
    for (auto& LocalGE : ModifierEffects)
    {
        
        FGameplayEffectSpecHandle GE_SpecHandle = MakeOutgoingGameplayEffectSpec(LocalGE, 1);
        while(auto setter : GE_SpecHandle.Data->SetByCallerTagMagnitudes)
        GE_SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("Tag.what"), ParamStruct.Params[0]);
        auto ActiveGE_Handle = K2_ApplyGameplayEffectSpecToOwner(GE_SpecHandle);

        if (ActiveGE_Handle.IsValid())
        {
            EffectCollection.Add(ActiveGE_Handle);
        }
    }
}

void USoulPrimaryStatusGameplayAbility::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilitySpec& Spec)
{
    auto ABS = Cast<USoulAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());

    for (FActiveGameplayEffectHandle& LocalActiveEffect : EffectCollection)
    {
        if (LocalActiveEffect.WasSuccessfullyApplied())
            ABS->RemoveActiveGameplayEffect(LocalActiveEffect);
    }
}
