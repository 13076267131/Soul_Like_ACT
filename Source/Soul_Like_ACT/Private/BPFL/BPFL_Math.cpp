// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFL/BPFL_Math.h"
#include "GameFramework/Actor.h"
#include "Math/Matrix.h"

void UBPFL_Math::FindHitDirectionFromActor(const AActor* HitActor, const AActor* Attacker, float& Result)
{
	FMatrix RotMatrix = FRotationMatrix(HitActor->GetActorRotation());
	FVector ForwardVec = RotMatrix.GetScaledAxis(EAxis::X);
	FVector RightVector = RotMatrix.GetScaledAxis(EAxis::Y);

	FVector FacingVector = (HitActor->GetActorLocation() - Attacker->GetActorLocation()).GetSafeNormal(0.01f);

	float ForwardCosAngle = FVector::DotProduct(ForwardVec, FacingVector);
	float ForwardDeltaDegree = FMath::RadiansToDegrees(FMath::Acos(ForwardCosAngle));

	float RightCosAngle = FVector::DotProduct(RightVector, FacingVector);

	if (RightCosAngle < 0.f)
		ForwardDeltaDegree *= -1.f;

	Result = ForwardDeltaDegree;
}
