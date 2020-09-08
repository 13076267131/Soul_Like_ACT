// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_UseGA_Duration.h"
#include "AIController.h"
#include "AbilitySystemGlobals.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Abilities/SoulAbilitySystemComponent.h"
#include "Abilities/SoulGameplayAbility.h"

UBTT_UseGA_Duration::UBTT_UseGA_Duration()
{
    NodeName = "Use Casting Ability";
    bCreateNodeInstance = true;
    bNotifyTick = false;
}

EBTNodeResult::Type UBTT_UseGA_Duration::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    USoulAbilitySystemComponent* ASC = Cast<USoulAbilitySystemComponent>(
        UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(
            Cast<AAIController>(OwnerComp.GetOwner())->GetPawn()));
    if (!ASC)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Failed to get ASC");
        return EBTNodeResult::Failed;
    }

    BTC = &OwnerComp;

    FOnGameplayAbilityEnded::FDelegate DelegateObj = FOnGameplayAbilityEnded::FDelegate::CreateUObject(
        this, &UBTT_UseGA_Duration::OnGA_Ended);

    UClass* GA_Class = bUseKey
                           ? OwnerComp.GetBlackboardComponent()->GetValueAsClass(GA_Melee_CDO.SelectedKeyName)
                           : *AbilityClass;

    //Give GA to ASC if not given yet
    if (!ASC->IsAbilityGiven(GA_Class))
    {
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Ability is not given to ASC");

        //return EBTNodeResult::Failed;

        ASC->GiveAbility(FGameplayAbilitySpec(GA_Class));
    }

    if (GA_Class && GA_Class->IsChildOf(UGA_Melee::StaticClass()))
    {
        if (!ASC->TryActivateAbilityByClassWithDelegate(GA_Handle, GA_Class, &DelegateObj))
            return EBTNodeResult::Failed;
    }
    const auto AbilitySpec = ASC->FindAbilitySpecFromHandle(GA_Handle);

    if(AbilitySpec->GetPrimaryInstance()->IsA(USoulActiveAbility::StaticClass()))
    {
        Cast<USoulActiveAbility>(AbilitySpec->GetPrimaryInstance())->EndLatentAbility(true, EndSection, EndLatency);
    }
    return EBTNodeResult::InProgress;
}

void UBTT_UseGA_Duration::OnGA_Ended(UGameplayAbility* Ability)
{
    FinishLatentTask(*BTC, EBTNodeResult::Succeeded);
}
