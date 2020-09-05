// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL/SoulSerializerBpLib.h"
#include "Abilities/SoulAttributeSet.h"
#include "Item/ItemBasic.h"
#include "Abilities/SoulGameplayAbility.h"

void USoulSerializerBpLib::AttributeToString(FGameplayAttribute Attribute, FString& Output)
{
    if (Attribute == USoulAttributeSet::GetHealthAttribute())
        Output = "Health";

    else if (Attribute == USoulAttributeSet::GetPostureAttribute())
        Output = "Posture";

    else if (Attribute == USoulAttributeSet::GetLeechAttribute())
        Output = "Leech";

    else if (Attribute == USoulAttributeSet::GetMoveSpeedAttribute())
        Output = "Move Speed";

    else if (Attribute == USoulAttributeSet::GetPostureStrengthAttribute())
        Output = "Posture Strength";

    else if (Attribute == USoulAttributeSet::GetDefensePowerAttribute())
        Output = "Defense Power";

    else if (Attribute == USoulAttributeSet::GetAttackPowerAttribute())
        Output = "Attack Power";

    else if (Attribute == USoulAttributeSet::GetPostureCrumbleAttribute())
        Output = "Posture Crumble";

    else if (Attribute == USoulAttributeSet::GetAttackSpeedAttribute())
        Output = "Attack Speed";

    else if (Attribute == USoulAttributeSet::GetCriticalStrikeAttribute())
        Output = "Critical Strike";

    else if (Attribute == USoulAttributeSet::GetCriticalMultiAttribute())
        Output = "Critical Multiplier";
}
