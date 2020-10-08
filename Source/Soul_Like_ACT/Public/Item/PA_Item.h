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
    Greaves,
    Gloves,
    Jewel
};

UENUM(BlueprintType)
enum EJewelSocketStatus : uint8
{
    Invalid,
    Empty,
    Inserted
};

USTRUCT(BlueprintType)
struct FItemModifier
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Modifier)
    FModifier Modifier;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Modifier)
    FModifierParams ModifierParams;
};

/** Base class for all items, do not blueprint directly */
UCLASS(Abstract)
class SOUL_LIKE_ACT_API UPA_Item_Abstract : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPA_Item_Abstract() {}

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FPrimaryAssetType ItemType;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    EGearType ItemSlotType;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FText ItemName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    FText ItemDescription;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
    UTexture* ItemIcon;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Modifiers)
    TArray<FItemModifier> Modifiers;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Slots)
    int32 MaxJewelSockets;

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId(ItemType, GetFName());
    }
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API UPA_Jewel : public UPA_Item_Abstract
{
    GENERATED_BODY()

    public:
    /** Constructor */
    UPA_Jewel()
    {
        ItemType = USoulAssetManager::JewelItemType;
        ItemSlotType = EGearType::Jewel;
    }
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API UPA_Weapon : public UPA_Item_Abstract
{
    GENERATED_BODY()

public:
    UPA_Weapon()
        : BaseWeaponDamage(10.f)
        , AttackSpeedMulti(1.f)
    {
        ItemType = USoulAssetManager::WeaponItemType;
        ItemSlotType = EGearType::Weapon;
    }

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Weapoon)
    float BaseWeaponDamage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Weapoon)
    float AttackSpeedMulti;
};

UCLASS(Blueprintable)
class SOUL_LIKE_ACT_API UPA_Armour : public UPA_Item_Abstract
{
    GENERATED_BODY()

public:
    UPA_Armour()
        : FlatDamageDeduction(0.f)
        , FlatPostureDamageDeduction(0.f)
    {
        ItemType = USoulAssetManager::ArmourItemType;
        ItemSlotType = EGearType::BodyArmor;
    }

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Armor)
    float FlatDamageDeduction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Armor)
    float FlatPostureDamageDeduction;
};
