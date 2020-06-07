// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_UseGA.h"
#include "AIController.h"
#include "AbilitySystemGlobals.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Abilities/SoulAbilitySystemComponent.h"
#include "Abilities/SoulGameplayAbility.h"


UBTT_UseGA::UBTT_UseGA(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    NodeName = "Use Combo Ability";
    // instantiating to be able to use Timers
    bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTT_UseGA::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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
        this, &UBTT_UseGA::OnGA_Ended);

    UClass* GA_Class = OwnerComp.GetBlackboardComponent()->GetValueAsClass(GA_Melee_CDO.SelectedKeyName);

    //Give GA to ASC if not given yet
    if(!ASC->IsAbilityGiven(GA_Class))
    {
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Ability is not given to ASC");

        //return EBTNodeResult::Failed;

        ASC->GiveAbility(FGameplayAbilitySpec(GA_Class));
    }
        
    if(GA_Class && GA_Class->GetClass() == UGA_Melee::StaticClass())
    {
    
        if (!ASC->TryActivateAbilityByClassWithDelegate(GA_Class->StaticClass(), &DelegateObj))
            return EBTNodeResult::Failed;
    }
        

    return EBTNodeResult::InProgress;
}


void UBTT_UseGA::OnGA_Ended(class UGameplayAbility* Ability)
{
    FinishLatentTask(*BTC, EBTNodeResult::Succeeded);
}
