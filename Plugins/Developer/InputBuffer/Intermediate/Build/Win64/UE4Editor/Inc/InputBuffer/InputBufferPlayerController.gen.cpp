// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBuffer/Classes/InputBufferPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferPlayerController() {}
// Cross Module References
	INPUTBUFFER_API UClass* Z_Construct_UClass_AInputBufferPlayerController_NoRegister();
	INPUTBUFFER_API UClass* Z_Construct_UClass_AInputBufferPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_InputBuffer();
	INPUTBUFFER_API UClass* Z_Construct_UClass_UInputBufferComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInputBufferPlayerController::execTranslateInputEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->TranslateInputEvent_Implementation(Z_Param_Event);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInputBufferPlayerController::execPostBufferInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostBufferInput_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AInputBufferPlayerController_PostBufferInput = FName(TEXT("PostBufferInput"));
	void AInputBufferPlayerController::PostBufferInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInputBufferPlayerController_PostBufferInput),NULL);
	}
	static FName NAME_AInputBufferPlayerController_TranslateInputEvent = FName(TEXT("TranslateInputEvent"));
	FName AInputBufferPlayerController::TranslateInputEvent(FName Event)
	{
		InputBufferPlayerController_eventTranslateInputEvent_Parms Parms;
		Parms.Event=Event;
		ProcessEvent(FindFunctionChecked(NAME_AInputBufferPlayerController_TranslateInputEvent),&Parms);
		return Parms.ReturnValue;
	}
	void AInputBufferPlayerController::StaticRegisterNativesAInputBufferPlayerController()
	{
		UClass* Class = AInputBufferPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostBufferInput", &AInputBufferPlayerController::execPostBufferInput },
			{ "TranslateInputEvent", &AInputBufferPlayerController::execTranslateInputEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Called when a new input is just buffered.\x09*/" },
		{ "ModuleRelativePath", "Classes/InputBufferPlayerController.h" },
		{ "ToolTip", "Called when a new input is just buffered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInputBufferPlayerController, nullptr, "PostBufferInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferPlayerController_eventTranslateInputEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputBufferPlayerController_eventTranslateInputEvent_Parms, Event), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/* Developers can override this function to translate a received input event. */" },
		{ "ModuleRelativePath", "Classes/InputBufferPlayerController.h" },
		{ "ToolTip", "Developers can override this function to translate a received input event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInputBufferPlayerController, nullptr, "TranslateInputEvent", nullptr, nullptr, sizeof(InputBufferPlayerController_eventTranslateInputEvent_Parms), Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInputBufferPlayerController_NoRegister()
	{
		return AInputBufferPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInputBufferPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInputBufferPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBuffer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInputBufferPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInputBufferPlayerController_PostBufferInput, "PostBufferInput" }, // 2834752094
		{ &Z_Construct_UFunction_AInputBufferPlayerController_TranslateInputEvent, "TranslateInputEvent" }, // 3181878492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputBufferPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A player controller with an input buffer.\n*\n* Caution: Developers should reparent their player controllers to this class if they need input buffering. \n**/" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InputBufferPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferPlayerController.h" },
		{ "ToolTip", "A player controller with an input buffer.\n\nCaution: Developers should reparent their player controllers to this class if they need input buffering." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInputBufferPlayerController_Statics::NewProp_InputBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input Buffer" },
		{ "Comment", "/** Component of input buffer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/InputBufferPlayerController.h" },
		{ "ToolTip", "Component of input buffer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInputBufferPlayerController_Statics::NewProp_InputBuffer = { "InputBuffer", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInputBufferPlayerController, InputBuffer), Z_Construct_UClass_UInputBufferComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInputBufferPlayerController_Statics::NewProp_InputBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInputBufferPlayerController_Statics::NewProp_InputBuffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInputBufferPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInputBufferPlayerController_Statics::NewProp_InputBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInputBufferPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInputBufferPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInputBufferPlayerController_Statics::ClassParams = {
		&AInputBufferPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInputBufferPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInputBufferPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInputBufferPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInputBufferPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInputBufferPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInputBufferPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInputBufferPlayerController, 2202943319);
	template<> INPUTBUFFER_API UClass* StaticClass<AInputBufferPlayerController>()
	{
		return AInputBufferPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInputBufferPlayerController(Z_Construct_UClass_AInputBufferPlayerController, &AInputBufferPlayerController::StaticClass, TEXT("/Script/InputBuffer"), TEXT("AInputBufferPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInputBufferPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
