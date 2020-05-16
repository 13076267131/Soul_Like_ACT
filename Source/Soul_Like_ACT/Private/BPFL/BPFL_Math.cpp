    // Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL/BPFL_Math.h"
#include "GameFramework/Actor.h"
#include "Math/Matrix.h"

void UBPFL_Math::FindDegreeToTarget(const AActor* HitActor, const AActor* Attacker, float& Result)
{
    const FVector FacingVector = (Attacker->GetActorLocation() - HitActor->GetActorLocation());
    
    FindDegreeToHitNorm(HitActor->GetActorRotation(), FacingVector, Result);
}

void UBPFL_Math::FindDegreeToHitNorm(const FRotator& ActorRotation, const FVector& HitNorm, float& Result)
{
    const FMatrix RotMatrix = FRotationMatrix(ActorRotation);
    const FVector ForwardVec = RotMatrix.GetScaledAxis(EAxis::X);
    const FVector RightVector = RotMatrix.GetScaledAxis(EAxis::Y);

    const FVector ImpactNorm = HitNorm.GetSafeNormal2D(.1f);

    const float ForwardCosAngle = FVector::DotProduct(ForwardVec, ImpactNorm);
    float ForwardDeltaDegree = FMath::RadiansToDegrees(FMath::Acos(ForwardCosAngle));

    const float RightCosAngle = FVector::DotProduct(RightVector, ImpactNorm);

    //Left
    if (RightCosAngle < 0.f)
        ForwardDeltaDegree *= -1.f;

    Result = ForwardDeltaDegree;
}

void UBPFL_Math::DegreeToFourDirection(float Degree, EFourDirection& Direction)
{
    if(Degree < 45.f && Degree > -45.f)
        Direction = EFourDirection::Forward;
    else if(Degree <= -45.f && Degree > -135.f)
        Direction = EFourDirection::Left;
    else if (Degree <= -135.f || Degree >= 135.f)
        Direction = EFourDirection::Backward;
    else if(Degree >=45.f && Degree < 135.f)
        Direction = EFourDirection::Right;
}

FVector UBPFL_Math::FindVecBetweenTwoVecs(const FVector& Direction, const FVector& SurfaceNormal, float Degree)
{
    const float BigDot = Direction | SurfaceNormal;
    const float BigDegree = FMath::RadiansToDegrees(FMath::Acos(BigDot));

    BigDot * SurfaceNormal * (Degree / BigDegree);
}
