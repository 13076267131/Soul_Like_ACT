// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SoulCharacterBase.h"
#include "MobBasic.generated.h"

class UDA_FXCollection;
class UMob_TargetingComponent;

UENUM()
enum class EAI_ActionType : uint8 { Attack, Parry, Dodge, DashBack, Walk };

UCLASS()
class SOUL_LIKE_ACT_API AMobBasic : public ASoulCharacterBase
{
private:
    GENERATED_BODY()

protected:

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    UMob_TargetingComponent* TargetingComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gears)
    class AWeaponActor* Weapon;

public:
    // Sets default values for this pawn's properties
    AMobBasic();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    class UMobActionManager* ActionManager;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void ForceOverrideFacingDirection(float Alpha) override;

    virtual void HandleOnDead(const FHitResult& HitInfo,
       const FGameplayTagContainer& DamageTags, ASoulCharacterBase* InstigatorCharacter,
       AActor* DamageCauser) override;

public:
    UMob_TargetingComponent* GetTargetingComponent() const { return TargetingComponent; }

    UFUNCTION(BlueprintCallable, category = "AI Controller")
    class AMobController* GetMobController() const;

   UFUNCTION(BlueprintCallable, Category = "AI Controller")
    class UMobRageManager* GetRageManager() const;
        
};
