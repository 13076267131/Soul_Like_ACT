// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlueprintJsonLibrary.h"
#include "SoulJsonObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class SOUL_LIKE_ACT_API USoulJsonObjectWrapper : public UObject
{
	GENERATED_BODY()
	
	USoulJsonObjectWrapper()
		: Super()
	{
		JsonObject = UBlueprintJsonLibrary::JsonMake();
	}
	
public:
	UPROPERTY(BlueprintReadWrite, Category = Json)
	FBlueprintJsonObject JsonObject;

	UFUNCTION(BlueprintPure, Category = Json)
	static USoulJsonObjectWrapper* MakeSoulJsonObject()
	{
		return NewObject<USoulJsonObjectWrapper>();
	}

	UFUNCTION(BlueprintCallable, category = Json)
 	static void SoulSetJsonField(USoulJsonObjectWrapper* JsonObjectWrapper, const FString& FieldName, const FBlueprintJsonValue& JsonValue)
 	{
 		if (JsonObjectWrapper->JsonObject.Object.IsValid() && JsonValue.Value.IsValid())
		{
			JsonObjectWrapper->JsonObject.Object->SetField(FieldName, JsonValue.Value);
		}
	}

	UFUNCTION(BlueprintCallable, Category = Json)
	static void SoulTryGetJumpSection(USoulJsonObjectWrapper* JsonObjectWrapper, bool& isSameMontage, FString& JumpTargetName, bool& bSuccessful);
};
