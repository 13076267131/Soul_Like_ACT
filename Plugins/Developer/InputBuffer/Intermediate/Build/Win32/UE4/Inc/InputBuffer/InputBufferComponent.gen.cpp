// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputBufferComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferComponent() {}
// Cross Module References
	INPUTBUFFER_API UEnum* Z_Construct_UEnum_InputBuffer_EBufferedInputEventType();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_ClearHistory();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_GetLastEvents();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_Initialize();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchCommand();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommand_NoRegister();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchEvents();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_Print();
	INPUTBUFFER_API UFunction* Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords();
// End Cross Module References
	static UEnum* EBufferedInputEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InputBuffer_EBufferedInputEventType, Z_Construct_UPackage__Script_InputBuffer(), TEXT("EBufferedInputEventType"));
		}
		return Singleton;
	}
	template<> INPUTBUFFER_API UEnum* StaticEnum<EBufferedInputEventType>()
	{
		return EBufferedInputEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBufferedInputEventType(EBufferedInputEventType_StaticEnum, TEXT("/Script/InputBuffer"), TEXT("EBufferedInputEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InputBuffer_EBufferedInputEventType_Hash() { return 2676524954U; }
	UEnum* Z_Construct_UEnum_InputBuffer_EBufferedInputEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBufferedInputEventType"), 0, Get_Z_Construct_UEnum_InputBuffer_EBufferedInputEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBufferedInputEventType::Pressed", (int64)EBufferedInputEventType::Pressed },
				{ "EBufferedInputEventType::Released", (int64)EBufferedInputEventType::Released },
				{ "EBufferedInputEventType::Held", (int64)EBufferedInputEventType::Held },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Held.Name", "EBufferedInputEventType::Held" },
				{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
				{ "Pressed.Name", "EBufferedInputEventType::Pressed" },
				{ "Released.Name", "EBufferedInputEventType::Released" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InputBuffer,
				nullptr,
				"EBufferedInputEventType",
				"EBufferedInputEventType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBufferedInputEventKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BufferedInputEventKeyMapping"), sizeof(FBufferedInputEventKeyMapping), Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FBufferedInputEventKeyMapping>()
{
	return FBufferedInputEventKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBufferedInputEventKeyMapping(FBufferedInputEventKeyMapping::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BufferedInputEventKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BufferedInputEventKeyMapping")),new UScriptStruct::TCppStructOps<FBufferedInputEventKeyMapping>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventKeyMapping;
	struct Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBufferedInputEventKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Keys to bind it to. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Keys to bind it to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventKeyMapping, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Name of this mapping. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Name of this mapping." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventKeyMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"BufferedInputEventKeyMapping",
		sizeof(FBufferedInputEventKeyMapping),
		alignof(FBufferedInputEventKeyMapping),
		Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BufferedInputEventKeyMapping"), sizeof(FBufferedInputEventKeyMapping), Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Hash() { return 3953602365U; }
class UScriptStruct* FBufferedInputEventSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputEventSetup, Z_Construct_UPackage__Script_InputBuffer(), TEXT("BufferedInputEventSetup"), sizeof(FBufferedInputEventSetup), Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FBufferedInputEventSetup>()
{
	return FBufferedInputEventSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBufferedInputEventSetup(FBufferedInputEventSetup::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("BufferedInputEventSetup"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BufferedInputEventSetup")),new UScriptStruct::TCppStructOps<FBufferedInputEventSetup>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFBufferedInputEventSetup;
	struct Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMappingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyMappingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBufferedInputEventSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Keys to bind it to. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Keys to bind it to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventSetup, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_KeyMappingName_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Name of key mapping to use for this event. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Name of key mapping to use for this event." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_KeyMappingName = { "KeyMappingName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventSetup, KeyMappingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_KeyMappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_KeyMappingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Should the event get triggered even when the game is paused? */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Should the event get triggered even when the game is paused?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((FBufferedInputEventSetup*)Obj)->bExecuteWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBufferedInputEventSetup), &Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Type of the input event. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Type of the input event." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventSetup, Type), Z_Construct_UEnum_InputBuffer_EBufferedInputEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Name of input event, e.g \"Jump\" */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Name of input event, e.g \"Jump\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBufferedInputEventSetup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Whether this event is enabled. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Whether this event is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FBufferedInputEventSetup*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBufferedInputEventSetup), &Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_KeyMappingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bExecuteWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"BufferedInputEventSetup",
		sizeof(FBufferedInputEventSetup),
		alignof(FBufferedInputEventSetup),
		Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputEventSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BufferedInputEventSetup"), sizeof(FBufferedInputEventSetup), Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBufferedInputEventSetup_Hash() { return 3048714318U; }
	void UInputBufferComponent::StaticRegisterNativesUInputBufferComponent()
	{
		UClass* Class = UInputBufferComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHistory", &UInputBufferComponent::execClearHistory },
			{ "GetCurrentEvents", &UInputBufferComponent::execGetCurrentEvents },
			{ "GetHistoryRecords", &UInputBufferComponent::execGetHistoryRecords },
			{ "GetLastEvents", &UInputBufferComponent::execGetLastEvents },
			{ "Initialize", &UInputBufferComponent::execInitialize },
			{ "InvalidateHistory", &UInputBufferComponent::execInvalidateHistory },
			{ "MatchCommand", &UInputBufferComponent::execMatchCommand },
			{ "MatchEvents", &UInputBufferComponent::execMatchEvents },
			{ "Print", &UInputBufferComponent::execPrint },
			{ "SetHistoryRecords", &UInputBufferComponent::execSetHistoryRecords },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Clears the input buffer. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Clears the input buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "ClearHistory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_ClearHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_ClearHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics
	{
		struct InputBufferComponent_eventGetCurrentEvents_Parms
		{
			TArray<FName> Events;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetCurrentEvents_Parms, Events), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::NewProp_Events_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Retrieves the current input events.\n\x09*\n\x09* Caution: Output input events are only valid after player input is processed in this frame. \n\x09*\n\x09* @param Events An output array of the input events in this frame.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Retrieves the current input events.\n\nCaution: Output input events are only valid after player input is processed in this frame.\n\n@param Events An output array of the input events in this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "GetCurrentEvents", nullptr, nullptr, sizeof(InputBufferComponent_eventGetCurrentEvents_Parms), Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics
	{
		struct InputBufferComponent_eventGetHistoryRecords_Parms
		{
			TArray<FInputHistoryRecord> Records;
			float TimeLimit;
			bool bIncludeInvalidRecords;
		};
		static void NewProp_bIncludeInvalidRecords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeInvalidRecords;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_bIncludeInvalidRecords_SetBit(void* Obj)
	{
		((InputBufferComponent_eventGetHistoryRecords_Parms*)Obj)->bIncludeInvalidRecords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_bIncludeInvalidRecords = { "bIncludeInvalidRecords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventGetHistoryRecords_Parms), &Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_bIncludeInvalidRecords_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetHistoryRecords_Parms, TimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetHistoryRecords_Parms, Records), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputHistoryRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_bIncludeInvalidRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_TimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::NewProp_Records_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Retrieves input records in the input buffer in chronological order.\n\x09*\n\x09* @param Records An output array of input records.\n\x09* @param TimeLimit A time limit used to exclude outdated input records. Zero means no time limit.\n\x09* @param bIncludeInvalidRecords Whether invalidated records are included.\n\x09*/" },
		{ "CPP_Default_bIncludeInvalidRecords", "false" },
		{ "CPP_Default_TimeLimit", "0.000000" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Retrieves input records in the input buffer in chronological order.\n\n@param Records An output array of input records.\n@param TimeLimit A time limit used to exclude outdated input records. Zero means no time limit.\n@param bIncludeInvalidRecords Whether invalidated records are included." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "GetHistoryRecords", nullptr, nullptr, sizeof(InputBufferComponent_eventGetHistoryRecords_Parms), Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics
	{
		struct InputBufferComponent_eventGetLastEvents_Parms
		{
			TArray<FName> Events;
			float TimeLimit;
			bool bSkipEmptyTrail;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bSkipEmptyTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEmptyTrail;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetLastEvents_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_bSkipEmptyTrail_SetBit(void* Obj)
	{
		((InputBufferComponent_eventGetLastEvents_Parms*)Obj)->bSkipEmptyTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_bSkipEmptyTrail = { "bSkipEmptyTrail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventGetLastEvents_Parms), &Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_bSkipEmptyTrail_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetLastEvents_Parms, TimeLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventGetLastEvents_Parms, Events), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_bSkipEmptyTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_TimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::NewProp_Events_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Retrieves the last input events in the input buffer.\n\x09*\n\x09* @param Events An output array of the last input events.\n\x09* @param TimeLimit If the time of the last events exceeds the time limit, nothing will be retrieved. Zero means no time limit.\n\x09* @param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n\x09* @return The time when the last events were buffered.\n\x09*/" },
		{ "CPP_Default_bSkipEmptyTrail", "true" },
		{ "CPP_Default_TimeLimit", "0.000000" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Retrieves the last input events in the input buffer.\n\n@param Events An output array of the last input events.\n@param TimeLimit If the time of the last events exceeds the time limit, nothing will be retrieved. Zero means no time limit.\n@param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n@return The time when the last events were buffered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "GetLastEvents", nullptr, nullptr, sizeof(InputBufferComponent_eventGetLastEvents_Parms), Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_GetLastEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_GetLastEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics
	{
		struct InputBufferComponent_eventInitialize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventInitialize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Resets internal data structures according to EventSetups. Should be called after changes to EventSetups are made.\n\x09*\n\x09* Caution: Calling this function will clear the input buffer.\n\x09*\n\x09* @return The number of registered input events.\n\x09**/" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Resets internal data structures according to EventSetups. Should be called after changes to EventSetups are made.\n\nCaution: Calling this function will clear the input buffer.\n\n@return The number of registered input events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "Initialize", nullptr, nullptr, sizeof(InputBufferComponent_eventInitialize_Parms), Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Invalidates the input buffer. The records in the buffer are still there but they will be no longer valid for command recognition. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Invalidates the input buffer. The records in the buffer are still there but they will be no longer valid for command recognition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "InvalidateHistory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics
	{
		struct InputBufferComponent_eventMatchCommand_Parms
		{
			UInputCommand* Command;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputBufferComponent_eventMatchCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventMatchCommand_Parms), &Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventMatchCommand_Parms, Command), Z_Construct_UClass_UInputCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Returns whether the latest input history matches a given InputCommand. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Returns whether the latest input history matches a given InputCommand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "MatchCommand", nullptr, nullptr, sizeof(InputBufferComponent_eventMatchCommand_Parms), Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_MatchCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics
	{
		struct InputBufferComponent_eventMatchEvents_Parms
		{
			TArray<FName> EventsToMatch;
			TArray<FName> EventsToIgnore;
			float TimeLimit;
			bool bSkipEmptyTrail;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bSkipEmptyTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEmptyTrail;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToIgnore;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToMatch;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventsToMatch_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputBufferComponent_eventMatchEvents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventMatchEvents_Parms), &Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_bSkipEmptyTrail_SetBit(void* Obj)
	{
		((InputBufferComponent_eventMatchEvents_Parms*)Obj)->bSkipEmptyTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_bSkipEmptyTrail = { "bSkipEmptyTrail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventMatchEvents_Parms), &Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_bSkipEmptyTrail_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventMatchEvents_Parms, TimeLimit), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventMatchEvents_Parms, EventsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore_Inner = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch = { "EventsToMatch", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventMatchEvents_Parms, EventsToMatch), METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch_Inner = { "EventsToMatch", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_bSkipEmptyTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_TimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::NewProp_EventsToMatch_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventsToIgnore" },
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Returns whether the last input record matches given input events.\n\x09*\n\x09* @param EventsToMatch Input events to match.\n\x09* @param EventsToIgnore Input events to ignore.\n\x09* @param TimeLimit If the time of the last record exceeds the time limit, always return false. Zero means no time limit.\n\x09* @param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n\x09* @return Whether the last input record matches given input events.\n\x09*/" },
		{ "CPP_Default_bSkipEmptyTrail", "true" },
		{ "CPP_Default_TimeLimit", "0.000000" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Returns whether the last input record matches given input events.\n      *\n      * @param EventsToMatch Input events to match.\n      * @param EventsToIgnore Input events to ignore.\n      * @param TimeLimit If the time of the last record exceeds the time limit, always return false. Zero means no time limit.\n      * @param bSkipEmptyTrail Whether a trailing empty record should be skipped.\n      * @return Whether the last input record matches given input events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "MatchEvents", nullptr, nullptr, sizeof(InputBufferComponent_eventMatchEvents_Parms), Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_MatchEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_MatchEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_Print_Statics
	{
		struct InputBufferComponent_eventPrint_Parms
		{
			int32 MaxRecords;
			bool bIncludeInvalidRecords;
			bool bReverseChronological;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bReverseChronological_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseChronological;
		static void NewProp_bIncludeInvalidRecords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeInvalidRecords;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRecords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventPrint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bReverseChronological_SetBit(void* Obj)
	{
		((InputBufferComponent_eventPrint_Parms*)Obj)->bReverseChronological = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bReverseChronological = { "bReverseChronological", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventPrint_Parms), &Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bReverseChronological_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bIncludeInvalidRecords_SetBit(void* Obj)
	{
		((InputBufferComponent_eventPrint_Parms*)Obj)->bIncludeInvalidRecords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bIncludeInvalidRecords = { "bIncludeInvalidRecords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventPrint_Parms), &Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bIncludeInvalidRecords_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_MaxRecords = { "MaxRecords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventPrint_Parms, MaxRecords), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_Print_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bReverseChronological,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_bIncludeInvalidRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_Print_Statics::NewProp_MaxRecords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_Print_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Prints the content of the input buffer to a string.\n\x09*\n\x09* @param MaxRecords Maximal number of latest records to print.\n\x09* @param bIncludeInvalidRecords Whether invalidated records are included.\n\x09* @param bReverseChronological Whether records are printed in chronological order or reverse chronological order.\n\x09* @return An output string.\n\x09*/" },
		{ "CPP_Default_bIncludeInvalidRecords", "false" },
		{ "CPP_Default_bReverseChronological", "false" },
		{ "CPP_Default_MaxRecords", "0" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Prints the content of the input buffer to a string.\n\n@param MaxRecords Maximal number of latest records to print.\n@param bIncludeInvalidRecords Whether invalidated records are included.\n@param bReverseChronological Whether records are printed in chronological order or reverse chronological order.\n@return An output string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_Print_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "Print", nullptr, nullptr, sizeof(InputBufferComponent_eventPrint_Parms), Z_Construct_UFunction_UInputBufferComponent_Print_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_Print_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_Print_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_Print_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_Print()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_Print_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics
	{
		struct InputBufferComponent_eventSetHistoryRecords_Parms
		{
			TArray<FInputHistoryRecord> Records;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputBufferComponent_eventSetHistoryRecords_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputBufferComponent_eventSetHistoryRecords_Parms), &Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferComponent_eventSetHistoryRecords_Parms, Records), METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputHistoryRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::NewProp_Records_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n\x09* Sets input history to given records. \n\x09* The given records must be in chronological order, and their timespan cannot overlap.\n\x09*\n\x09* Caution: The given records MUST be valid. If incorrect data is inputted, the input buffer may malfunction until those records are flushed out. \n\x09*\n\x09* @param Records An array of given input records.\n\x09* @return Whether there is an error during the process.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Sets input history to given records.\nThe given records must be in chronological order, and their timespan cannot overlap.\n\nCaution: The given records MUST be valid. If incorrect data is inputted, the input buffer may malfunction until those records are flushed out.\n\n@param Records An array of given input records.\n@return Whether there is an error during the process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferComponent, nullptr, "SetHistoryRecords", nullptr, nullptr, sizeof(InputBufferComponent_eventSetHistoryRecords_Parms), Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister()
	{
		return UInputBufferComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInputBufferComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInputHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInputHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslatedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TranslatedEvents;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TranslatedEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventSetups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBufferComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputBufferComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputBufferComponent_ClearHistory, "ClearHistory" }, // 1112772493
		{ &Z_Construct_UFunction_UInputBufferComponent_GetCurrentEvents, "GetCurrentEvents" }, // 4232819784
		{ &Z_Construct_UFunction_UInputBufferComponent_GetHistoryRecords, "GetHistoryRecords" }, // 3907255145
		{ &Z_Construct_UFunction_UInputBufferComponent_GetLastEvents, "GetLastEvents" }, // 1848271872
		{ &Z_Construct_UFunction_UInputBufferComponent_Initialize, "Initialize" }, // 3925958920
		{ &Z_Construct_UFunction_UInputBufferComponent_InvalidateHistory, "InvalidateHistory" }, // 2317342638
		{ &Z_Construct_UFunction_UInputBufferComponent_MatchCommand, "MatchCommand" }, // 1449189583
		{ &Z_Construct_UFunction_UInputBufferComponent_MatchEvents, "MatchEvents" }, // 1100730441
		{ &Z_Construct_UFunction_UInputBufferComponent_Print, "Print" }, // 3401669605
		{ &Z_Construct_UFunction_UInputBufferComponent_SetHistoryRecords, "SetHistoryRecords" }, // 506955735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/**\n* A component used to store input data for input buffering.\n*\n* Caution: Should be used with InputBufferPlayerController.\n**/" },
		{ "IncludePath", "InputBufferComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "A component used to store input data for input buffering.\n\nCaution: Should be used with InputBufferPlayerController." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_MaxInputHistory_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The maximal capacity of the input buffer. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "The maximal capacity of the input buffer." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_MaxInputHistory = { "MaxInputHistory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferComponent, MaxInputHistory), METADATA_PARAMS(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_MaxInputHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_MaxInputHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Optional key mappings that can be referenced in input event set-up. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Optional key mappings that can be referenced in input event set-up." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings = { "KeyMappings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferComponent, KeyMappings), METADATA_PARAMS(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings_Inner = { "KeyMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* A list of input events into which others could be translated. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "A list of input events into which others could be translated." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents = { "TranslatedEvents", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferComponent, TranslatedEvents), METADATA_PARAMS(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents_Inner = { "TranslatedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Input events set-up information. */" },
		{ "ModuleRelativePath", "Classes/InputBufferComponent.h" },
		{ "ToolTip", "Input events set-up information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups = { "EventSetups", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputBufferComponent, EventSetups), METADATA_PARAMS(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups_Inner = { "EventSetups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBufferedInputEventSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputBufferComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_MaxInputHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_KeyMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_TranslatedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBufferComponent_Statics::NewProp_EventSetups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBufferComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBufferComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputBufferComponent_Statics::ClassParams = {
		&UInputBufferComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputBufferComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBufferComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBufferComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputBufferComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputBufferComponent, 1623111845);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputBufferComponent>()
	{
		return UInputBufferComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputBufferComponent(Z_Construct_UClass_UInputBufferComponent, &UInputBufferComponent::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputBufferComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
