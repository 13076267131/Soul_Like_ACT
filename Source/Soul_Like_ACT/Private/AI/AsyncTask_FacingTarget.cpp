// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AsyncTask_FacingTarget.h"
#include "GameFramework/Pawn.h"
#include "BPFL/BPFL_Math.h"

UAsyncTask_FacingTarget* UAsyncTask_FacingTarget::AI_FacingTarget(UObject* WorldContextObject, float DegreeTolerance, float Duration, float YawSpeed, class APawn* AI_Pawn, class AActor* Target)
{
	if(!AI_Pawn || !Target) return nullptr;

	UAsyncTask_FacingTarget* AsyncTask = NewObject<UAsyncTask_FacingTarget>();

	AsyncTask->DegreeTolerance = DegreeTolerance > 10.f ? DegreeTolerance : 10.f;
	AsyncTask->Duration = Duration > 3.f ? Duration : 3.f;
	AsyncTask->YawSpeed = YawSpeed > 35.f ? YawSpeed : 35.f;
	AsyncTask->AI_Pawn = AI_Pawn;
	AsyncTask->Target = Target;
	AsyncTask->World = WorldContextObject->GetWorld();

	AsyncTask->RegisterWithGameInstance(WorldContextObject);

	return AsyncTask;
}

void UAsyncTask_FacingTarget::Activate()
{
	if(World)
		World->GetTimerManager().SetTimer(RotatingTimer, this, &UAsyncTask_FacingTarget::TryRotate, 0.1f, true);
	else
	{
		RemoveFromRoot();
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "Seg Fault");
	}
}

void UAsyncTask_FacingTarget::TryRotate()
{
	float ForwardDelta;
	UBPFL_Math::FindYawValueToFacingDirection(AI_Pawn, Target, ForwardDelta);

	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::SanitizeFloat(ForwardDelta));

	if(FMath::Abs(ForwardDelta) <= DegreeTolerance)
	{
		if (OnEnded.IsBound())
		{
			OnEnded.Broadcast();

			World->GetTimerManager().ClearTimer(RotatingTimer);

			SetReadyToDestroy();
		}
	}
	else
	{
		FMatrix RotMatrix = FRotationMatrix(AI_Pawn->GetActorRotation());
		FVector YawVec = RotMatrix.GetScaledAxis(EAxis::Z);

		AI_Pawn->AddActorLocalRotation(FQuat(YawVec, YawSpeed * World->GetDeltaSeconds() * -1));
	}

}