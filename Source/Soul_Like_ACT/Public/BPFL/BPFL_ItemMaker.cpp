#include "BPFL/BPFL_ItemMaker.h"
#include "Item/InventSlot.h"

FInventoryItem UBPFL_ItemMaker::MakeItemWithAssetID(FPrimaryAssetId PA_ID)
{
    auto AssetManager = USoulAssetManager::Get();

    if(AssetManager)
    {
        const auto ItemBase = AssetManager->ForceLoadItem(PA_ID);
        return FInventoryItem(ItemBase);
    }

    return FInventoryItem();
}

EJewelSocketStatus UBPFL_ItemMaker::CheckItemSocketStatus(FInventoryItem& Item, int32 SocketIndex)
{
    if(IsValid(Item))
    {
        if(Item.ItemBase->MaxJewelSockets > SocketIndex)
        {
            if(Item.Jewels[SocketIndex] == nullptr)
                return EJewelSocketStatus::Empty;
            else if (IsValid(Item.Jewels[SocketIndex]))
                return EJewelSocketStatus::Inserted;
        }
    }
    return EJewelSocketStatus::Invalid;
}

bool UBPFL_ItemMaker::RemoveJewelFromItem(FInventoryItem& Item, int32 SocketIndex, UPA_Jewel*& OutJewel)
{
    if(CheckItemSocketStatus(Item, SocketIndex) == EJewelSocketStatus::Inserted)
    {
        OutJewel = Item.Jewels[SocketIndex];
        Item.Jewels[SocketIndex] = nullptr;

        return true;
    }

    return false;
}

bool UBPFL_ItemMaker::AddJewelToItem(FInventoryItem& Item, int32 SocketIndex, UPA_Jewel* InJewel, UPA_Jewel*& OutJewel)
{
    if(!IsValid(InJewel)) return false;
    
    if(CheckItemSocketStatus(Item, SocketIndex) == EJewelSocketStatus::Empty)
    {
        Item.Jewels[SocketIndex] = InJewel;

        return true;
    } else if (CheckItemSocketStatus(Item, SocketIndex) == EJewelSocketStatus::Inserted)
    {
        OutJewel = Item.Jewels[SocketIndex];
        Item.Jewels[SocketIndex] = InJewel;

        return true;
    }

    return false;
}
