// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/SoulPlayerController.h"

ASoulPlayerController::ASoulPlayerController()
{
    CameraMode = ECameraMode::DetachedCam;
}

void ASoulPlayerController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    SwitchCameraMode(ECameraMode::SoulLike);
}

void ASoulPlayerController::SwitchCameraMode(ECameraMode ToCameraMode)
{
    if(CameraMode == ToCameraMode) return;

    ASoul_Like_ACTCharacter* PlayerChar = GetSoulPlayerChar(this);
    switch (ToCameraMode)
    {
    case ECameraMode::SoulLike:
        if(!PlayerChar->Soul_CameraActor->GetChildActor())
        {
            LOG_FUNC_ERROR("Camera Actor not spawned yet");
            break;
        }
        SetViewTargetWithBlend(PlayerChar->Soul_CameraActor->GetChildActor(), 0.3f, EViewTargetBlendFunction::VTBlend_EaseInOut, 1.5f);
        break;
    case ECameraMode::TPS:
        if(!PlayerChar->TPS_CameraActor->GetChildActor())
        {
            LOG_FUNC_ERROR("Camera Actor not spawned yet");
            break;
        }
        SetViewTargetWithBlend(PlayerChar->TPS_CameraActor->GetChildActor(), 0.3f, EViewTargetBlendFunction::VTBlend_EaseInOut, 1.5f);
        break;
    case ECameraMode::DetachedCam:
        //TODO
        break;
    default:
        //TODO
        ;
    }
    
    CameraMode = ToCameraMode;
}

ASoul_Like_ACTCharacter* ASoulPlayerController::GetSoulPlayerChar(UObject* WorldContextObj)
{
    if(WorldContextObj->IsValidLowLevel())
    {
        APlayerController* PlayerController = WorldContextObj->GetWorld()->GetFirstPlayerController();
        if(PlayerController)
        {
            APawn* PlayerChar = PlayerController->GetPawn();
            if(PlayerChar && PlayerChar->IsA(ASoul_Like_ACTCharacter::StaticClass()))
            {
                return Cast<ASoul_Like_ACTCharacter>(PlayerChar);
            }
        }
    }

    return nullptr;
}
