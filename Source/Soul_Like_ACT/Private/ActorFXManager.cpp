// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorFXManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UActorFXManager::UActorFXManager()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = 0;
}

void UActorFXManager::SpawnParticleWithHitResult(const FHitResult& HitResult, UParticleSystem* ParticleClass)
{
    if(ParticleClass && HitResult.IsValidBlockingHit())
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld()
                                             , ParticleClass
                                             , HitResult.ImpactPoint 
                                             , FRotationMatrix::MakeFromX(HitResult.ImpactNormal).Rotator()
                                             , true);
}

void UActorFXManager::SpawnSoundWithHitResult(const FHitResult& HitResult, USoundBase* SoundCue)
{
    if(SoundCue)
        UGameplayStatics::PlaySound2D(GetWorld(), SoundCue);
}

bool UActorFXManager::PlayEffects(const FHitResult& HitResult, const EFXType InputType)
{
    switch (InputType)
    {
    case EFXType::VE_OnHit:
        SpawnParticleWithHitResult(HitResult, OnHitParticles[0]);
        SpawnSoundWithHitResult(HitResult, OnHitSounds[0]);
        break;
    case EFXType::VE_OnParry:
        SpawnParticleWithHitResult(HitResult, OnParryParticles[0]);
        SpawnSoundWithHitResult(HitResult, OnParrySounds[0]);
        break;
    case EFXType::VE_OnBlock:
        SpawnParticleWithHitResult(HitResult, OnBlockParticles[0]);
        SpawnSoundWithHitResult(HitResult, OnBlockSounds[0]);
        break;
    default:
        break;
    }
    return true;
}
