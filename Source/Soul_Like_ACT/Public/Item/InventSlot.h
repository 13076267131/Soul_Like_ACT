#pragma once
#include "PA_Item.h"
#include "InventSlot.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem
{
    GENERATED_BODY()

    FInventoryItem() {}
    
    explicit FInventoryItem(UPA_Item_Abstract* Item)
        : ItemBase(Item)
    {
        Jewels.Init(nullptr, Item->MaxJewelSockets);
    }

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Item)
    UPA_Item_Abstract* ItemBase;
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Item)
    TArray<UPA_Jewel*> Jewels;
};

FORCEINLINE bool IsValid(const FInventoryItem& InvItem)
{
    const bool isItemValid = IsValid(InvItem.ItemBase);

    bool isJewelValid = true;
    for(auto i = 0; i < InvItem.Jewels.Num(); ++i)
    {
        isJewelValid &= IsValid(InvItem.Jewels[i]);
    }

    return isItemValid && isJewelValid;
}