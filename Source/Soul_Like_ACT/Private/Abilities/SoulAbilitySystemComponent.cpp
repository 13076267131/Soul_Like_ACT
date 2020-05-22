// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities/SoulAbilitySystemComponent.h"
#include "SoulCharacterBase.h"
#include "Abilities/SoulGameplayAbility.h"
#include "AbilitySystemGlobals.h"


void USoulAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer,
                                                             TArray<USoulGameplayAbility*>& ActiveAbilities)
{
    TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
    GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

    // Iterate the list of all ability specs
    for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
    {
        // Iterate all instances on this ability spec
        TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

        for (UGameplayAbility* ActiveAbility : AbilityInstances)
        {
            ActiveAbilities.Add(Cast<USoulGameplayAbility>(ActiveAbility));
        }
    }
}

int32 USoulAbilitySystemComponent::GetDefaultAbilityLevel() const
{
    ASoulCharacterBase* OwningCharacter = Cast<ASoulCharacterBase>(OwnerActor);

    if (OwningCharacter)
    {
        //return OwningCharacter->GetCharacterLevel();
        return 1;
    }
    return 1;
}

bool USoulAbilitySystemComponent::TryActivateAbility_Soul(FGameplayAbilitySpecHandle AbilityToActivate,
                                                          bool bAllowRemoteActivation)
{
    return TryActivateAbility(AbilityToActivate, bAllowRemoteActivation);
}

USoulAbilitySystemComponent* USoulAbilitySystemComponent::GetAbilitySystemComponentFromActor(
    const AActor* Actor, bool LookForComponent)
{
    return Cast<USoulAbilitySystemComponent>(
        UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}

FActiveGameplayEffectHandle USoulAbilitySystemComponent::ApplyGE_ToSelf(
    const AActor* Actor, const TSubclassOf<UGameplayEffect> GameplayEffect, const int32 AbilityLevel = 1/*=1*/)
{
    return ApplyGE_ToTarget(Actor, Actor, GameplayEffect, AbilityLevel);
}

FActiveGameplayEffectHandle USoulAbilitySystemComponent::ApplyGE_ToTarget(
    const AActor* FromActor, const AActor* TargetActor, const TSubclassOf<UGameplayEffect> GameplayEffect,
    const int32 AbilityLevel)
{
    USoulAbilitySystemComponent* TempComp = GetAbilitySystemComponentFromActor(TargetActor);
    if (TempComp)
    {
        FGameplayEffectContextHandle EffectContext = TempComp->MakeEffectContext();

        EffectContext.AddSourceObject(FromActor);

        const FGameplayEffectSpecHandle NewHandle = TempComp->MakeOutgoingSpec(GameplayEffect, AbilityLevel, EffectContext);

        if (NewHandle.IsValid())
        {
            return (TempComp->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), TempComp));
        }
    }

    return FActiveGameplayEffectHandle();
}

bool USoulAbilitySystemComponent::TryActivateAbilityByClassWithDelegate(
    TSubclassOf<UGameplayAbility> InAbilityToActivate,
    FOnGameplayAbilityEnded::FDelegate* OnGameplayAbilityEndedDelegate /*= nullptr*/)
{
    bool bSuccess = false;

    const UGameplayAbility* const InAbilityCDO = InAbilityToActivate.GetDefaultObject();

    for (const FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
    {
        if (Spec.Ability == InAbilityCDO)
        {
            bSuccess |= TryActivateAbilityWithDelegate(Spec.Handle, true, OnGameplayAbilityEndedDelegate);
            break;
        }
    }

    return bSuccess;
}

bool USoulAbilitySystemComponent::TryActivateAbilityWithDelegate(FGameplayAbilitySpecHandle AbilityToActivate,
                                                                 bool bAllowRemoteActivation,
                                                                 FOnGameplayAbilityEnded::FDelegate*
                                                                 OnGameplayAbilityEndedDelegate /*= nullptr*/)
{
    FGameplayTagContainer FailureTags;
    FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(AbilityToActivate);
    if (!Spec)
    {
        ABILITY_LOG(Warning, TEXT("TryActivateAbility called with invalid Handle"));
        return false;
    }

    UGameplayAbility* Ability = Spec->Ability;

    if (!Ability)
    {
        ABILITY_LOG(Warning, TEXT("TryActivateAbility called with invalid Ability"));
        return false;
    }

    const FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();

    // make sure the ActorInfo and then Actor on that FGameplayAbilityActorInfo are valid, if not bail out.
    if (ActorInfo == nullptr || !ActorInfo->OwnerActor.IsValid() || !ActorInfo->AvatarActor.IsValid())
    {
        return false;
    }


    const ENetRole NetMode = ActorInfo->AvatarActor->GetLocalRole();

    // This should only come from button presses/local instigation (AI, etc).
    if (NetMode == ROLE_SimulatedProxy)
    {
        return false;
    }

    const bool bIsLocal = AbilityActorInfo->IsLocallyControlled();

    // Check to see if this a local only or server only ability, if so either remotely execute or fail
    if (!bIsLocal && (Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalOnly || Ability->
        GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::LocalPredicted))
    {
        if (bAllowRemoteActivation)
        {
            ClientTryActivateAbility(AbilityToActivate);
            return true;
        }

        ABILITY_LOG(Log, TEXT("Can't activate LocalOnly or LocalPredicted ability %s when not local."),
                    *Ability->GetName());
        return false;
    }

    if (NetMode != ROLE_Authority && (Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::ServerOnly
        || Ability->GetNetExecutionPolicy() == EGameplayAbilityNetExecutionPolicy::ServerInitiated))
    {
        if (bAllowRemoteActivation)
        {
            if (Ability->CanActivateAbility(AbilityToActivate, ActorInfo, nullptr, nullptr, &FailureTags))
            {
                // No prediction key, server will assign a server-generated key
                CallServerTryActivateAbility(AbilityToActivate, Spec->InputPressed, FPredictionKey());
                return true;
            }
            else
            {
                NotifyAbilityFailed(AbilityToActivate, Ability, FailureTags);
                return false;
            }
        }

        ABILITY_LOG(Log, TEXT("Can't activate ServerOnly or ServerInitiated ability %s when not the server."),
                    *Ability->GetName());
        return false;
    }

    return InternalTryActivateAbility(AbilityToActivate, FPredictionKey(), nullptr, OnGameplayAbilityEndedDelegate);
}