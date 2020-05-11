// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ModifierSlot.h"
#include "Item/ItemBasic.h"
#include "Components/TextBlock.h"
#include "BPFL/SoulSerializerBpLib.h"

void UModifierSlot::Setup(const FText& inp_Name, const FText& inp_Level)
{
    GA_Name->SetText(inp_Name);

    GA_Level->SetText(inp_Level);
}
