// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputBufferPlayerController.h"
#include "Soul_Like_ACTCharacter.h"

#include "SoulPlayerController.generated.h"

UENUM()
enum class ECameraMode : uint8
{
    SoulLike,
    TPS,
    DetachedCam,
};

UCLASS()
class SOUL_LIKE_ACT_API ASoulPlayerController : public AInputBufferPlayerController
{
    GENERATED_BODY()

protected:
    UPROPERTY()
    ASoul_Like_ACTCharacter* PlayerPawn;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = CameraController)
    ECameraMode CameraMode;

public:
    ASoulPlayerController();

    UFUNCTION()
    void OnPossess(APawn* InPawn) override;
    
    UFUNCTION(BlueprintCallable)
    ECameraMode GetCamMode() const { return CameraMode; }

    UFUNCTION(BlueprintCallable)
    void SwitchCameraMode(ECameraMode ToCameraMode);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    static ASoul_Like_ACTCharacter* GetSoulPlayerChar(UObject* WorldContextObj);
};