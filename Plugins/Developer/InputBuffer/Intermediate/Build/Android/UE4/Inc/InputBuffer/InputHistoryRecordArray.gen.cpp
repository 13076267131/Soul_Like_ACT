// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputHistoryRecordArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHistoryRecordArray() {}
// Cross Module References
	INPUTBUFFER_API UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputHistoryRecordArray_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputHistoryRecordArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FInputHistoryRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTBUFFER_API uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHistoryRecord, Z_Construct_UPackage__Script_InputBuffer(), TEXT("InputHistoryRecord"), sizeof(FInputHistoryRecord), Get_Z_Construct_UScriptStruct_FInputHistoryRecord_Hash());
	}
	return Singleton;
}
template<> INPUTBUFFER_API UScriptStruct* StaticStruct<FInputHistoryRecord>()
{
	return FInputHistoryRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputHistoryRecord(FInputHistoryRecord::StaticStruct, TEXT("/Script/InputBuffer"), TEXT("InputHistoryRecord"), false, nullptr, nullptr);
static struct FScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord
{
	FScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputHistoryRecord")),new UScriptStruct::TCppStructOps<FInputHistoryRecord>);
	}
} ScriptStruct_InputBuffer_StaticRegisterNativesFInputHistoryRecord;
	struct Z_Construct_UScriptStruct_FInputHistoryRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslatedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TranslatedEvents;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TranslatedEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Blueprint-friendly version of InputBufferRecord\n**/" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "A Blueprint-friendly version of InputBufferRecord" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHistoryRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Input events that are translated from. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "Input events that are translated from." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents = { "TranslatedEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputHistoryRecord, TranslatedEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents_Inner = { "TranslatedEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Input events list. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "Input events list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputHistoryRecord, Events), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Time when we stop recording it. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "Time when we stop recording it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputHistoryRecord, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Time when we start to record it. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "Time when we start to record it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputHistoryRecord, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Whether this record is valid. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "Whether this record is valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FInputHistoryRecord*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputHistoryRecord), &Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_TranslatedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::NewProp_bValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
		nullptr,
		&NewStructOps,
		"InputHistoryRecord",
		sizeof(FInputHistoryRecord),
		alignof(FInputHistoryRecord),
		Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputHistoryRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InputBuffer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputHistoryRecord"), sizeof(FInputHistoryRecord), Get_Z_Construct_UScriptStruct_FInputHistoryRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputHistoryRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputHistoryRecord_Hash() { return 192252611U; }
	void UInputHistoryRecordArray::StaticRegisterNativesUInputHistoryRecordArray()
	{
	}
	UClass* Z_Construct_UClass_UInputHistoryRecordArray_NoRegister()
	{
		return UInputHistoryRecordArray::StaticClass();
	}
	struct Z_Construct_UClass_UInputHistoryRecordArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputHistoryRecordArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputHistoryRecordArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/**\n* An object containing an array of InputHistoryRecord.\n**/" },
		{ "IncludePath", "InputHistoryRecordArray.h" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "An object containing an array of InputHistoryRecord." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* An array of InputHistoryRecord. */" },
		{ "ModuleRelativePath", "Classes/InputHistoryRecordArray.h" },
		{ "ToolTip", "An array of InputHistoryRecord." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputHistoryRecordArray, Records), METADATA_PARAMS(Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputHistoryRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHistoryRecordArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHistoryRecordArray_Statics::NewProp_Records_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputHistoryRecordArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHistoryRecordArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputHistoryRecordArray_Statics::ClassParams = {
		&UInputHistoryRecordArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputHistoryRecordArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputHistoryRecordArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputHistoryRecordArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputHistoryRecordArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputHistoryRecordArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputHistoryRecordArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputHistoryRecordArray, 4107509195);
	template<> INPUTBUFFER_API UClass* StaticClass<UInputHistoryRecordArray>()
	{
		return UInputHistoryRecordArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputHistoryRecordArray(Z_Construct_UClass_UInputHistoryRecordArray, &UInputHistoryRecordArray::StaticClass, TEXT("/Script/InputBuffer"), TEXT("UInputHistoryRecordArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHistoryRecordArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
