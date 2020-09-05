// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoulAssetManager.h"
#include "Abilities/Modifier.h"
#include "ItemBasic.generated.h"

class USoulGameplayAbility;

UENUM(BlueprintType)
enum class EGearType : uint8
{
    Non_Gear,
    Weapon,
    BodyArmor,
    Helmet,
    Boots,
    Gloves,
    Ring,
    Amulet,
    Reliquary,
    Jewel
};

/** Base class for all items, do not blueprint directly */
UCLASS(Abstract)
class SOUL_LIKE_ACT_API USoulItem : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    /** Constructor */
    USoulItem()
        : MaxCount(1)
    {
    }

    /** Type of this item, set in native parent class */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FPrimaryAssetType ItemType;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    EGearType ItemSlotType;

    /** User-visible short name */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FText ItemName;

    /** User-visible long description */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FText ItemDescription;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    UTexture* ItemIcon;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Max)
    int32 MaxCount;

    /** Returns if the item is consumable (MaxCount <= 0)*/
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = Max)
    bool IsConsumable() const;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Abilities)
    TMap<FModifier, FModifierParams> PrimModifiers;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Abilities)
    TMap<FModifier, FModifierParams> Modifiers;

    UFUNCTION(BlueprintCallable, Category = Item)
    FString GetIdentifierString() const;

    /** Overridden to use saved type */
    virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API USoulWeaponItem : public USoulItem
{
    GENERATED_BODY()

public:
    /** Constructor */
    USoulWeaponItem()
    {
        ItemType = USoulAssetManager::WeaponItemType;
        ItemSlotType = EGearType::Weapon;
    }
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API USoulArmourItem : public USoulItem
{
    GENERATED_BODY()

public:

    /** Constructor */
    USoulArmourItem()
    {
        ItemType = USoulAssetManager::ArmourItemType;
        ItemSlotType = EGearType::BodyArmor;
    }
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API USoulPotionItem : public USoulItem
{
    GENERATED_BODY()

public:
    /** Constructor */
    USoulPotionItem()
    {
        ItemType = USoulAssetManager::PotionItemType;
        MaxCount = 10; // Infinite
        ItemSlotType = EGearType::Non_Gear;
    }
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API USoulJewelItem : public USoulItem
{
    GENERATED_BODY()

public:
    /** Constructor */
    USoulJewelItem()
    {
        ItemType = USoulAssetManager::JewelItemType;
        ItemSlotType = EGearType::Jewel;
    }
};