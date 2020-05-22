// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/ActionSysManager.h"
#include "Player/Soul_Like_ACTCharacter.h"
#include "Types/DA_PlayerAnimSet.h"
#include "Animation/AnimInstance.h"
#include "Abilities/SoulModifierManager.h"
#include "Types/DA_ComboMontage.h"
#include "Abilities/SoulAbilitySystemComponent.h"
#include "TimerManager.h"
#include "Abilities/SoulGameplayAbility.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UActionSysManager::UActionSysManager()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UActionSysManager::BeginPlay()
{
    Super::BeginPlay();

    check(PlayerRef);
}

void UActionSysManager::TickComponent(float DeltaTime, enum ELevelTick TickType,
                                      FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UActionSysManager::SetJumpSection(const FName InpComboScetionName, UAnimMontage* InpMontage)
{
    bWillJumpSection = 0;
    bCanJumpSection = 1;

    JumpSectionName = InpComboScetionName;
    JumpMontage = InpMontage;

    return true;
}

bool UActionSysManager::JumpSectionForCombo()
{
    bCanJumpSection = false;

    if (!bWillJumpSection) return false;

    bWillJumpSection = false;

    UAnimInstance* AnimInstance = PlayerRef->GetMesh()->GetAnimInstance();
    UAnimMontage* CurrentMontage = AnimInstance->GetCurrentActiveMontage();
    //FName CurrentSection = AnimInstance->Montage_GetCurrentSection(CurrentMontage);

    if (JumpMontage != nullptr && (JumpMontage == CurrentMontage))
    {
        FName CurrentSectionName = AnimInstance->Montage_GetCurrentSection(CurrentMontage);

        AnimInstance->Montage_JumpToSection(JumpSectionName, CurrentMontage);

        UE_LOG(LogTemp, Warning, TEXT("Current Montage: %s"),
               *(CurrentMontage->GetName()));
    }

    return true;
}

void UActionSysManager::PredictMovingDirection(ASoul_Like_ACTCharacter* CharacterRef, float& MovementDegree, bool& isMoving)
{
    FVector PlayerVelocity;
    float Degree;
    CharacterRef->PredictMovement(PlayerVelocity, Degree);
    const FRotator PlayerRotation = CharacterRef->GetActorRotation();
    if (!PlayerVelocity.IsNearlyZero())
    {
        const FMatrix RotMatrix = FRotationMatrix(PlayerRotation);
        const FVector ForwardVector = RotMatrix.GetScaledAxis(EAxis::X);
        const FVector RightVector = RotMatrix.GetScaledAxis(EAxis::Y);
        const FVector NormalizedVel = PlayerVelocity.GetSafeNormal2D();

        // get a cos(alpha) of forward vector vs velocity
        const float ForwardCosAngle = FVector::DotProduct(ForwardVector, NormalizedVel);
        // now get the alpha and convert to degree
        float ForwardDeltaDegree = FMath::RadiansToDegrees(FMath::Acos(ForwardCosAngle));

        // depending on where right vector is, flip it
        const float RightCosAngle = FVector::DotProduct(RightVector, NormalizedVel);
        if (RightCosAngle < 0)
        {
            ForwardDeltaDegree *= -1;
        }

        MovementDegree = ForwardDeltaDegree;
        isMoving = true;
        return;
    }

    MovementDegree = 0.f;
    isMoving = false;
    return;
}

FName UActionSysManager::Get4WaysStepDirection_GA(float PredictableMovingDirection)
{
    if (PredictableMovingDirection > -45.f && PredictableMovingDirection < 45.f)
        return "F";
    else if (PredictableMovingDirection <= -45.f && PredictableMovingDirection > -135.f)
        return "L";
    else if (PredictableMovingDirection < 135.f && PredictableMovingDirection >= 45.f)
        return "R";
    else
        return "B";
}

void UActionSysManager::GetActiveAbilitiesWithTags(FGameplayTagContainer AbilityTags,
                                                   TArray<USoulGameplayAbility*>& ActiveAbilities)
{
    if (PlayerRef->AbilitySystemComponent)
        PlayerRef->AbilitySystemComponent->GetActiveAbilitiesWithTags(AbilityTags, ActiveAbilities);
}
