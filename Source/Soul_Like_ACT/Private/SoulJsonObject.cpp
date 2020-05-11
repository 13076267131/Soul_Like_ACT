// Fill out your copyright notice in the Description page of Project Settings.


#include "SoulJsonObject.h"


void USoulJsonObjectWrapper::SoulTryGetJumpSection(USoulJsonObjectWrapper* JsonObjectWrapper, bool& isSameMontage,
                                                   FString& JumpTargetName, bool& bSuccessful)
{
    if (JsonObjectWrapper->JsonObject.Object.IsValid())
    {
        if (JsonObjectWrapper->JsonObject.Object->HasField("isSameMontage")
            && JsonObjectWrapper->JsonObject.Object->HasField("JumpTargetName"))
        {
            bSuccessful = true;

            isSameMontage = JsonObjectWrapper->JsonObject.Object->GetBoolField("isSameMontage");
            JumpTargetName = JsonObjectWrapper->JsonObject.Object->GetStringField("JumpTargetName");

            return;
        }
    }

    bSuccessful = false;
    return;
}
