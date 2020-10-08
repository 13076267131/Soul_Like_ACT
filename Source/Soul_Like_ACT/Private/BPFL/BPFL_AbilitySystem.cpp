#include "BPFL/BPFL_AbilitySystem.h"
#include "Soul_Like_ACT.h"
#include "AbilitySystemComponent.h"
#include "Abilities/Modifier.h"

inline void UBPFL_AbilitySystem::GetSetByCallerTagsFromAbility(TSubclassOf<UModifierAbility> ModifierClass,
                                                               TArray<FGameplayTag>& SetterTags, int32& SetterNum, bool& isValid)
{
    SetterNum = 0;
    SetterTags.Reset();

    for(auto GE_Class : ModifierClass.GetDefaultObject()->ModifierEffectClasses)
    {
        for(auto ModifierInfo: GE_Class.GetDefaultObject()->Modifiers)
        {
            if(ModifierInfo.ModifierMagnitude.GetMagnitudeCalculationType() ==  EGameplayEffectMagnitudeCalculation::SetByCaller)
            {
                auto ModifierSetterTag = ModifierInfo.ModifierMagnitude.GetSetByCallerFloat().DataTag;
                if(ModifierSetterTag.IsValid())
                {
                    SetterTags.Add(ModifierSetterTag);
                    ++SetterNum;
                } else
                {
                    SetterNum = 0;
                    SetterTags.Reset();
                    isValid = false;
                    LOG_FUNC_ERROR(GE_Class->GetName() + " has an empty setter entry without the Tag");
                    return;
                }
            }
        }
    }
    
    isValid = true;
}

void UBPFL_AbilitySystem::GetModifierDisplayMessage(UModifierAbility* ModifierInstance, FText& DisplayMessage,
    bool& isValid)
{
    if(!ModifierInstance)
    {
        isValid = false;
        DisplayMessage = FText::FromString("Invalid Modifier");
        return;
    }
    
    TArray<FGameplayTag> SetterTags;
    int32 SetterNum;
    
    GetSetByCallerTagsFromAbility(ModifierInstance->StaticClass(), SetterTags, SetterNum, isValid);

    isValid &= (SetterNum == ModifierInstance->ParamPtr.Get()->Params.Num());

    if(isValid)
    {
        FFormatOrderedArguments OrderedArgu;
        for(auto iter : ModifierInstance->ParamPtr.Get()->Params)
            OrderedArgu.Add(iter);
        
        DisplayMessage = FText::Format(FTextFormat::FromString(ModifierInstance->ModifierFormat), OrderedArgu);
    }
}

void UBPFL_AbilitySystem::CreateEventData(const AActor* Target, const AActor* Source, const FHitResult& InpHitResult,
    const FGameplayTag EventTag, const float EventMagnitude, FGameplayEventData& OutpEventData)
{
    FGameplayEffectContextHandle TempContextHandle(new FGameplayEffectContext());
    TempContextHandle.AddHitResult(InpHitResult);

    FGameplayEventData TempEventData;
    TempEventData.Instigator = Source;
    TempEventData.Target = Target;
    TempEventData.EventMagnitude = EventMagnitude;
    TempEventData.EventTag = EventTag;
    TempEventData.ContextHandle = TempContextHandle;

    OutpEventData = TempEventData;
}

void UBPFL_AbilitySystem::CreateEventDataWithoutHitResult(const AActor* Target, const AActor* Source,
    const FGameplayTag EventTag, const float EventMagnitude, FGameplayEventData& OutpEventData)
{
    FGameplayEventData TempEventData;
    TempEventData.Instigator = Source;
    TempEventData.Target = Target;
    TempEventData.EventMagnitude = EventMagnitude;
    TempEventData.EventTag = EventTag;
    OutpEventData = TempEventData;
}

bool UBPFL_AbilitySystem::OverrideActorGameplayTag(UAbilitySystemComponent* AbilitySysComp, const FGameplayTag& InTag,
    bool bAdd)
{
    if (AbilitySysComp)
    {
        AbilitySysComp->SetTagMapCount(InTag, bAdd);
        return true;
    }

    return false;
}

bool UBPFL_AbilitySystem::DoesActorHasTag(UAbilitySystemComponent* AbilitySysComp, FGameplayTag InTag)
{
    if (AbilitySysComp)
        return AbilitySysComp->HasMatchingGameplayTag(InTag);

    return false;
}

bool UBPFL_AbilitySystem::DoesActorHasAnyTags(UAbilitySystemComponent* AbilitySysComp,
    FGameplayTagContainer InTagContainer)
{
    if (AbilitySysComp)
        return AbilitySysComp->HasAnyMatchingGameplayTags(InTagContainer);

    return false;
}

UGameplayEffectUIData* UBPFL_AbilitySystem::GetActiveGameplayEffectUIData(FActiveGameplayEffectHandle Handle)
{
    UAbilitySystemComponent* ASC = Handle.GetOwningAbilitySystemComponent();
    const FActiveGameplayEffect* ActiveGE = ASC->GetActiveGameplayEffect(Handle);
    if (ActiveGE)
    {
        return ActiveGE->Spec.Def->UIData;
    }

    return nullptr;
}
