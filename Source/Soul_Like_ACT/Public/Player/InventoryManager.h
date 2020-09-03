// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/WeaponActor.h"
#include "Types/SoulItemTypes.h"
#include "Components/ActorComponent.h"
#include "InventoryManager.generated.h"

class AWeaponActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOUL_LIKE_ACT_API UInventoryManager : public UActorComponent
{
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryLoadingFinished, UInventoryManager*, OutInventoryManager, bool,
                                             OutFirstTimeInventLoading);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSlottedItemChanged, FSoulInventSlot, ItemSlot, FSoulItemData, Item);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentChanged, FSoulEquipmentSlot, EquipmentSlot, FSoulItemData,
                                                 Item);
    
    GENERATED_BODY()

    class ASoul_Like_ACTCharacter* _PlayerRef;

public:
    UInventoryManager();

    UFUNCTION(BlueprintCallable, meta = (WorldContextObject="WorldContext"))
    static bool GetInventoryManager(UObject* WorldContext, UInventoryManager*& InventoryManager);

protected:
    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool AddInventoryItem(FSoulItemData InItemData);

    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool AddEquipment(FSoulInventSlot InventorySlot);

    UFUNCTION(BlueprintCallable, Category = Equipment)
    bool RemoveEquipment(FSoulEquipmentSlot FromEquipSlot);

    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool RemoveInventoryItem(FSoulItemData RemovedItem);

    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool RemoveInventoryItemAtIndex(FSoulInventSlot InItemSlot, int32 ItemCount = 1);

    UFUNCTION(BlueprintPure, Category = Inventory)
    bool GetInventoryItemData(FSoulInventSlot InItemSlot, FSoulItemData& ItemData) const;
    UFUNCTION(BlueprintPure, Category = Inventory)
    bool GetEquipItemData(FSoulEquipmentSlot InEquipSlot, FSoulItemData& ItemData) const;

    UFUNCTION(BlueprintPure, Category = Inventory)
    int32 GetSlottedItemCount(FSoulInventSlot InItemSlot) const;

    UFUNCTION(BlueprintCallable, Category = Inventory)
    const EGearType GetGearType(FSoulInventSlot InItemSlot);
    
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory)
    TMap<FSoulInventSlot, FSoulItemData> InventoryItems;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory)
    TMap<FSoulEquipmentSlot, FSoulItemData> EquippedItems;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    AWeaponActor* CurrentWeapon;

    UFUNCTION(BlueprintCallable)
    void EquipGear(AWeaponActor* const Inp);

    /** Manually save the inventory, this is called from add/remove functions automatically */
    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool SaveInventory();

    /** It's used for Game Instance when async loading finshed */
    UFUNCTION(BlueprintCallable, Category = Inventory)
    bool LoadInventoryData(UPARAM(ref) TArray<FSoulItemData>& InInventoryItems
                           , UPARAM(ref) TMap<FSoulEquipmentSlot, FSoulItemData>& InEquipedItems);

    /** Delegate called when an inventory slot has changed */
    UPROPERTY(BlueprintAssignable, Category = Inventory)
    FOnSlottedItemChanged OnSlottedItemChanged;
    UPROPERTY(BlueprintAssignable, Category = Inventory)
    FOnEquipmentChanged OnEquipmentChangedChanged;
    UPROPERTY(BlueprintAssignable, Category = Inventory)
    FOnInventoryLoadingFinished OnInventoryLoadingFinished;

protected:
    bool InventoryToEquipment(FSoulItemData FromItem, FSoulEquipmentSlot ToSlot);

    void SetEquipSlot(UPARAM(ref) FSoulItemData& InItemData, FSoulEquipmentSlot ItemSlot);
    void SetItemSlot(UPARAM(ref) FSoulItemData& InItemData, FSoulInventSlot ItemSlot);

    //************************************
    // Method:    
    // Parameter: FSoulItemData InItemData
    // Parameter: FSoulItemSlot & OutSlot
    // Parameter: bSkipFullSlot Whether will skip the full stacked slot
    // Parameter: bGetEmptySlot Whether can return a empty slot
    //************************************
    bool GetFirstInventSlot(FSoulItemData InItemData, FSoulInventSlot& OutSlot, bool bSkipFullSlot = true,
                            bool bGetEmptySlot = false) const;

    //************************************
    // Method:    Returns all inventory items of a given type. If none is passed as type it will return all
    // Parameter: FSoulItemData InItemData
    // Parameter: TArray<FSoulItemSlot> & OutItemDatas
    // Parameter: bSkipFullSlot Whether will skip the full stacked slot
    // Parameter: bGetEmptySlot Whether can return a empty slot
    //************************************
    bool GetInventSlots(FSoulItemData InItemData, TArray<FSoulInventSlot>& OutItemDatas, bool bSkipFullSlot = true,
                        bool bGetEmptySlot = false) const;

    //Get the FSoulEquipmentSlot with the specific gear type
    bool GetEquipSlot(EGearType GearType, FSoulEquipmentSlot& EquipSlot) const;

    void Notify_OnInventoryLoadingFinished(bool bFirstTimeInit);

    /** Calls the inventory update callbacks */
    void NotifySlottedItemChanged(FSoulInventSlot ItemSlot, FSoulItemData ItemData);
    void NotifyEquipmentChanged(FSoulEquipmentSlot EquipmentSlot, FSoulItemData ItemData);

    friend ASoul_Like_ACTCharacter;
};
