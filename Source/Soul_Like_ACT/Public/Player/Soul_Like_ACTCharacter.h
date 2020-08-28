// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SoulCharacterBase.h"
#include "Item/WeaponActor.h"
#include "Soul_Like_ACTCharacter.generated.h"

class ASoulPlayerController;

UCLASS(config=Game)
class ASoul_Like_ACTCharacter : public ASoulCharacterBase
{
protected:
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class USpringArmComponent* Soul_CameraBoom;
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = Camera)
    UChildActorComponent* Soul_CameraActor;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    class USpringArmComponent* TPS_CameraBoom;
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = Camera)
    UChildActorComponent* TPS_CameraActor;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
    class UArrowComponent* TargetLockArrow;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
    class UPlayerTargetingComponent* TargetingComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
    class UInventoryManager* InventoryManager;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = AI)
    class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;

    ASoulPlayerController* _PlayerController;

protected:
    virtual void BeginPlay() override;

    virtual void PossessedBy(AController* NewController) override;

public:
    static const float BattleMovementScale;
    static const float TravelMovementScale;

    ASoul_Like_ACTCharacter();

    virtual void Tick(float DeltaTime) override;

    UPROPERTY(meta = (DeprecatedNode))
    bool _bFreeCamera = true;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
    float BaseTurnRate;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
    float BaseLookUpRate;

    float ForwardAxisValue, RightAxisValue;
    float LeanAmount_Char, LeanSpeed_Char;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
    float LeanAmount_Anim;

protected:
    //Tick------------------------------
    UFUNCTION()
    void MoveForward(float Value);
    UFUNCTION()
    void MoveRight(float Value);

    void MakeMove();

    void TurnAtRate(float Rate);

    void LookUpAtRate(float Rate);

    void ZoomCamera(float Rate);

    UFUNCTION(BlueprintCallable)
    void CalculateLeanValue(float TurnValue);
    //----------------------------------

    UFUNCTION(BlueprintCallable)
    bool IsMovementInputPressed() const
    {
        return !(FMath::IsNearlyZero(ForwardAxisValue) && FMath::IsNearlyZero(RightAxisValue));
    }
    
    UFUNCTION(BlueprintCallable)
    void PredictMovement(FVector& DirectionVec, float& Degree);

    UFUNCTION(BlueprintImplementableEvent)
    void DegreeToMovementMultiplier(const float& Degree, float& Multiplier);

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    /**
     * The function is called when some attack movements have root motion enabled and direction offsets.
     * It overrides the direction with controller's rotation or by calling lock-target component;
     */
    virtual void ForceOverrideFacingDirection(float Alpha) override;

//------------CAMERA---------------
public:
    UFUNCTION(BlueprintCallable, Category = Camera)
    void GetActiveCameraAndSpringArm(ACameraActor*& ActiveCam, USpringArmComponent*& ActiveSpringArm, bool& isValid) const;

//-----------CAMERA------------------
public:
    UFUNCTION(BlueprintCallable)
    void ResetRotation();

    UFUNCTION(BlueprintCallable)
    AWeaponActor* EquipGear(TSubclassOf<AWeaponActor> WeaponClassRef, bool bShowTracelines);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASoulPlayerController* GetSoulController();

    UFUNCTION(BlueprintCallable)
    class UInventoryManager* GetInventoryManager() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (BlueprintInternalUseOnly, WorldContext="WorldContextObj"))
    static void GetPlayer(UObject* WorldContextObj, bool& Successful, ASoulPlayerController*& SoulPlayerController,
                          ASoul_Like_ACTCharacter*& SoulCharacter, UInventoryManager*& SoulInventoryManager);

    virtual void GetMovementMode(ESoulMovementMode& MovementMode) const override;

    UFUNCTION(BlueprintCallable, meta=(DeprecatedNode), Category = Camera)
    void SetCameraMode(bool bFreeCamera) { _bFreeCamera = bFreeCamera; }
    
    friend class ASoulPlayerController;
};
