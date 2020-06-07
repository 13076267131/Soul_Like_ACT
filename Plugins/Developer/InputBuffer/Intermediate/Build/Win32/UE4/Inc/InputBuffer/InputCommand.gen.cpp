// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCommand() {}
// Cross Module References
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputCommandSequence();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputCommandEntry();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommand_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputCommand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FInputCommandSequence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandSequence, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandSequence"), sizeof(FInputCommandSequence), Get_Z_Construct_UScriptStruct_FInputCommandSequence_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputCommandSequence>()
{
	return FInputCommandSequence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandSequence(FInputCommandSequence::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandSequence"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputCommandSequence")),new UScriptStruct::TCppStructOps<FInputCommandSequence>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandSequence;
	struct Z_Construct_UScriptStruct_FInputCommandSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCommandSequence>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* A list of input snapshots to match. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "A list of input snapshots to match." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandSequence, Entries), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputCommandEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/** Whether this sequence is enabled. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Whether this sequence is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FInputCommandSequence*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputCommandSequence), &Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCommandSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandSequence_Statics::NewProp_bEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCommandSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputCommandSequence",
		sizeof(FInputCommandSequence),
		alignof(FInputCommandSequence),
		Z_Construct_UScriptStruct_FInputCommandSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandSequence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandSequence"), sizeof(FInputCommandSequence), Get_Z_Construct_UScriptStruct_FInputCommandSequence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputCommandSequence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandSequence_Hash() { return 1303184483U; }
class UScriptStruct* FInputCommandEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCommandEntry, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputCommandEntry"), sizeof(FInputCommandEntry), Get_Z_Construct_UScriptStruct_FInputCommandEntry_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputCommandEntry>()
{
	return FInputCommandEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputCommandEntry(FInputCommandEntry::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputCommandEntry"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputCommandEntry")),new UScriptStruct::TCppStructOps<FInputCommandEntry>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputCommandEntry;
	struct Z_Construct_UScriptStruct_FInputCommandEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOthers_MetaData[];
#endif
		static void NewProp_bIgnoreOthers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOthers;
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCommandEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxInterval_MetaData[] = {
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Maximal time limit between input for this entry and the next one to be considered as valid. Unused if zero. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Maximal time limit between input for this entry and the next one to be considered as valid. Unused if zero." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxInterval = { "MaxInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, MaxInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinInterval_MetaData[] = {
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Minimal time limit between input for this entry and the next one to be considered as valid. Unused if zero. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Minimal time limit between input for this entry and the next one to be considered as valid. Unused if zero." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinInterval = { "MinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, MinInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxDuration_MetaData[] = {
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Maximal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Maximal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxDuration = { "MaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, MaxDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinDuration_MetaData[] = {
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Minimal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Minimal duration for input to be considered as valid. Should be used for input events of held type. Unused if zero." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinDuration = { "MinDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, MinDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* If true, ignore the presence of the other input events except EventsToMatch. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "If true, ignore the presence of the other input events except EventsToMatch." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers_SetBit(void* Obj)
	{
		((FInputCommandEntry*)Obj)->bIgnoreOthers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers = { "bIgnoreOthers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputCommandEntry), &Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Input events to ignore. Unused if bIgnoreOthers is true. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Input events to ignore. Unused if bIgnoreOthers is true." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, EventsToIgnore), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore_Inner = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Input events to match. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Input events to match." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch = { "EventsToMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputCommandEntry, EventsToMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch_Inner = { "EventsToMatch", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCommandEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_MinDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_bIgnoreOthers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCommandEntry_Statics::NewProp_EventsToMatch_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCommandEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputCommandEntry",
		sizeof(FInputCommandEntry),
		alignof(FInputCommandEntry),
		Z_Construct_UScriptStruct_FInputCommandEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCommandEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputCommandEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputCommandEntry"), sizeof(FInputCommandEntry), Get_Z_Construct_UScriptStruct_FInputCommandEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputCommandEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputCommandEntry_Hash() { return 3854468476U; }
	void UInputCommand::StaticRegisterNativesUInputCommand()
	{
	}
	UClass* Z_Construct_UClass_UInputCommand_NoRegister()
	{
		return UInputCommand::StaticClass();
	}
	struct Z_Construct_UClass_UInputCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToIgnore;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/**\n* Represents an input command commonly found in fighting games, such as Quarter-Circle-Forward Punch.\n* Can be used with UInputBufferComponent to detect combinations of buttons.\n**/" },
		{ "IncludePath", "InputCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Represents an input command commonly found in fighting games, such as Quarter-Circle-Forward Punch.\nCan be used with UInputBufferComponent to detect combinations of buttons." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommand_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/* If specified, use this texture for the thumbnail. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "If specified, use this texture for the thumbnail." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommand, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputCommand_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::NewProp_Thumbnail_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Each sequence contains a series of input snapshots to match. A command is considered matched if any of its sequences matches. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Each sequence contains a series of input snapshots to match. A command is considered matched if any of its sequences matches." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommand, Sequences), METADATA_PARAMS(Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputCommandSequence, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore_MetaData[] = {
		{ "Category", "Input Command" },
		{ "Comment", "/* Input events to ignore. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Input events to ignore." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommand, EventsToIgnore), METADATA_PARAMS(Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore_Inner = { "EventsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommand_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Input Command" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Time limit of valid input. Unused if zero. */" },
		{ "ModuleRelativePath", "Classes/InputCommand.h" },
		{ "ToolTip", "Time limit of valid input. Unused if zero." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputCommand_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommand, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_UInputCommand_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::NewProp_TimeLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputCommand_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_Thumbnail,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_Sequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_EventsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommand_Statics::NewProp_TimeLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCommand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCommand_Statics::ClassParams = {
		&UInputCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCommand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCommand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommand, 495609245);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputCommand>()
	{
		return UInputCommand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommand(Z_Construct_UClass_UInputCommand, &UInputCommand::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputCommand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
