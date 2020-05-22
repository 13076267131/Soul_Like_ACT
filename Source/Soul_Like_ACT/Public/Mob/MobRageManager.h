#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MobRageManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRagePointUpdated);

UCLASS()
class SOUL_LIKE_ACT_API UMobRageManager : public UActorComponent
{
    GENERATED_BODY()

public:
    UMobRageManager();

    UPROPERTY(BlueprintReadOnly, Category = RageSystem)
    int32 RageScore;

    UFUNCTION(BlueprintCallable, Category = RageSystem)
    void UpdateRageScore(int32 AdditiveRageScore, bool bOverride, int32& UpdatedRageScore);
    UPROPERTY(BlueprintAssignable)
    FOnRagePointUpdated OnRagePointUpdated;
};