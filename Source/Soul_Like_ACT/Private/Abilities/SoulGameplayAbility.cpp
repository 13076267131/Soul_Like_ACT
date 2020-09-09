// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities/SoulGameplayAbility.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/SoulAbilitySystemComponent.h"
#include "Abilities/SoulTargetType.h"
#include "SoulCharacterBase.h"
#include "BPFL/BPFL_AbilitySystem.h"
#include "Abilities/Modifier.h"


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

USoulActiveAbility::USoulActiveAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    
    ActivationBlockedTags.AddTagFast(FGameplayTag::RequestGameplayTag("Ailment.Dead", true));
    ActivationBlockedTags.AddTagFast(FGameplayTag::RequestGameplayTag("Ailment.Stun", true));

    CancelAbilitiesMatchingTagQuery.MakeQuery_MatchAnyTags(
        FGameplayTagContainer::CreateFromArray(
            TArray<FGameplayTag>{
                FGameplayTag::RequestGameplayTag("Ailment.Dead"),
                FGameplayTag::RequestGameplayTag("Ailment.Perilous"),
                FGameplayTag::RequestGameplayTag("Ailment.Stun")
            }));
}

void USoulActiveAbility::EndLatentAbility(bool bUseDuration, FName InLatentSectionName, float Duration)
{
    LatentSectionName = InLatentSectionName;

    if (bUseDuration && Duration > 0.f)
    {
        GetWorld()->GetTimerManager().SetTimer(JumpSectionHandle
                                               , this
                                               , &USoulActiveAbility::_EndLatentAbility
                                               , Duration
                                               , false,
                                               -1);
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::SanitizeFloat(GetWorld()->GetTimerManager().GetTimerRemaining(JumpSectionHandle)));
    }
    else
    {
        _EndLatentAbility();
    }
}

void USoulActiveAbility::_EndLatentAbility()
{

    if(!LatentSectionName.IsNone() && LatentSectionName.IsValid())
    {
        FGameplayEventData Payload;
        const auto JumpSecPayLoad =  USoulJsonObjectWrapper::MakeSoulJsonObject();
        USoulJsonObjectWrapper::SetJumpSection(JumpSecPayLoad, true, LatentSectionName.ToString());
        Payload.OptionalObject = JumpSecPayLoad;
    
        SendGameplayEvent(FGameplayTag::RequestGameplayTag("Ability.Event.Combo"), Payload);
    }else
    {
        K2_EndAbility();
    }
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
    const FSoulGameplayEffectContainerSpec Spec = MakeEffectContainerSpec(
        ContainerTag, EventData, OverrideGameplayLevel);
    return ApplyEffectContainerSpec(Spec);
}

void UModifierAbility::SetModifierParameters(const TArray<float>& Params)
{
    if(!GetCurrentAbilitySpec()->GetPrimaryInstance())
    {
        LOG_FUNC_ERROR(StaticClass()->GetName() + " cannot find primary class");
        return;
    }
    
    ParamPtr = MakeShared<FModifierParams>(Params);
}

void UModifierAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                        const FGameplayAbilityActorInfo* ActorInfo,
                                                        const FGameplayAbilityActivationInfo ActivationInfo,
                                                        const FGameplayEventData* TriggerEventData)
{
    TArray<FGameplayTag> GE_Setters;
    int32 TotalSetters;
    bool areSetterTagsValid;

    UBPFL_AbilitySystem::GetSetByCallerTagsFromAbility(StaticClass(),
                                                    GE_Setters, TotalSetters, areSetterTagsValid);

    if(!areSetterTagsValid)
    {
        LOG_FUNC_ERROR(this->GetName() + " has GE(s) without a DataTag filled in SetByCaller");
        K2_EndAbility();
    }
    if(ParamPtr.Get()->Params.Num() != TotalSetters)
    {
        LOG_FUNC_ERROR(this->GetName() + " setter's number does not match with ModifierParams");
        K2_EndAbility(); 
    }

    auto GE_SetterIter = GE_Setters.begin();
    auto GE_setterParam  = ParamPtr.Get()->Params.begin();
    
    for (auto& LocalGE : ModifierEffects)
    {
        FGameplayEffectSpecHandle GE_SpecHandle = MakeOutgoingGameplayEffectSpec(LocalGE, 1);

        GE_SpecHandle.Data->SetSetByCallerMagnitude(*GE_SetterIter, *GE_setterParam);
        
        auto ActiveGE_Handle = K2_ApplyGameplayEffectSpecToOwner(GE_SpecHandle);

        if (ActiveGE_Handle.IsValid())
        {
            EffectCollection.Add(ActiveGE_Handle);
        }else
        {
            LOG_FUNC_ERROR(LocalGE->GetName() + " failed to create a EffectSpecHandle");
            K2_EndAbility();
        }

        ++GE_SetterIter;
        ++GE_setterParam;
    }
}

void UModifierAbility::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilitySpec& Spec)
{
    auto ABS = Cast<USoulAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());

    for (FActiveGameplayEffectHandle& LocalActiveEffect : EffectCollection)
    {
        if (LocalActiveEffect.WasSuccessfullyApplied())
            ABS->RemoveActiveGameplayEffect(LocalActiveEffect);
    }
}
