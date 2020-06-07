// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBufferEditor/Classes/InputCommandThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCommandThumbnailRenderer() {}
// Cross Module References
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer_NoRegister();
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UInputCommandThumbnailRenderer::StaticRegisterNativesUInputCommandThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer_NoRegister()
	{
		return UInputCommandThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBufferEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputCommandThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/InputCommandThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCommandThumbnailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::NewProp_DefaultTexture = { "DefaultTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputCommandThumbnailRenderer, DefaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::NewProp_DefaultTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::NewProp_DefaultTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCommandThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::ClassParams = {
		&UInputCommandThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCommandThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCommandThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandThumbnailRenderer, 3104174348);
	template<> INPUTBUFFEREDITOR_API UClass* StaticClass<UInputCommandThumbnailRenderer>()
	{
		return UInputCommandThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandThumbnailRenderer(Z_Construct_UClass_UInputCommandThumbnailRenderer, &UInputCommandThumbnailRenderer::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputCommandThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
