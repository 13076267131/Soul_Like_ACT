// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL/BPFL_GameplayTag.h"

void UBPFL_GameplayTag::IsCharacterParry(const UAbilitySystemComponent* ASC, EParryStatus& ParryResult)
{
    if (ASC)
    {
        if (ASC->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag("Buffer.Parry.Perfect", true)))
            ParryResult = EParryStatus::Perfect;
        else if (ASC->HasMatchingGameplayTag(FGameplayTag::RequestGameplayTag("Buffer.Parry.Normal", true)))
            ParryResult = EParryStatus::Normal;

        return;
    }
    else
    {
        ParryResult = EParryStatus::Unguard;
    }
}

void UBPFL_GameplayTag::GetEffectContextDynamicTags(const FGameplayEffectContextHandle* ContextHandle,
    FGameplayTagContainer& TagContainer)
{
    if(ContextHandle)
    {
        if(ContextHandle->Get())
    }
    if (EffectContext
    {
        return *EffectContext.GetHitResult();
    }

    return FHitResult();
}
