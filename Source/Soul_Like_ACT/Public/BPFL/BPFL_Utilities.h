#pragma once
#include "BPFL_Utilities.generated.h"

/** Static class with useful gameplay utility functions that can be called from both Blueprint and C++ */
UCLASS()
class SOUL_LIKE_ACT_API UBPFL_Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void GetRenderedActors(TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime = 0.01f);

	UFUNCTION(BlueprintCallable)
	static void GetNotRenderedActors(TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime = 0.01f); 
};
