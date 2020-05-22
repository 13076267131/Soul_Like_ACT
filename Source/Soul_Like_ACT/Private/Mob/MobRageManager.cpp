#include "Mob/MobRageManager.h"

UMobRageManager::UMobRageManager()
{
    PrimaryComponentTick.SetTickFunctionEnable(false);
}

void UMobRageManager::UpdateRageScore(int32 AdditiveRageScore, bool bOverride, int32& UpdatedRageScore)
{
    RageScore = FMath::Clamp(bOverride?  RageScore + AdditiveRageScore : AdditiveRageScore, -100, 100);

    UpdatedRageScore = RageScore;

    if(OnRagePointUpdated.IsBound())
        OnRagePointUpdated.Broadcast();
}