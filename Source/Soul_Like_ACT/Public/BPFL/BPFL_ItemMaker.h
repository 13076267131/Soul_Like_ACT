#pragma once
#include "Item/InventSlot.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_ItemMaker.generated.h"

UCLASS()
class UBPFL_ItemMaker : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
    
public:
    //Make item with ID
    UFUNCTION(BlueprintCallable)
    static FInventoryItem MakeItemWithAssetID(FPrimaryAssetId PA_ID);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EJewelSocketStatus CheckItemSocketStatus(UPARAM(ref) FInventoryItem& Item, int32 SocketIndex);

    UFUNCTION(BlueprintCallable)
    static bool RemoveJewelFromItem(UPARAM(ref) FInventoryItem& Item, int32 SocketIndex, UPA_Jewel*& OutJewel);
    
    //Insert/remove jewel
    UFUNCTION(BlueprintCallable)
    static bool AddJewelToItem(UPARAM(ref) FInventoryItem& Item, int32 SocketIndex, UPA_Jewel* InJewel, UPA_Jewel*& OutJewel);
};