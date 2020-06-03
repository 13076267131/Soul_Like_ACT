// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SoulCharacterBase.h"
#include "MobBasic.generated.h"

class UDA_FXCollection;
class UMob_TargetingComponent;

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

    virtual void HandleOnDead(float DamageAmount, const bool IsCriticaled, const FHitResult& HitInfo,
       const FGameplayTagContainer& DamageTags, ASoulCharacterBase* InstigatorCharacter,
       AActor* DamageCauser) override;

public:
    UMob_TargetingComponent* GetTargetingComponent() const { return TargetingComponent; }

    UFUNCTION(BlueprintCallable, category = AI_Controller)
    class AMobController* GetMobController() const;
};
