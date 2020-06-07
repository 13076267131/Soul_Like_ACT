// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBufferEditor/Classes/InputCommandFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCommandFactory() {}
// Cross Module References
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandFactory_NoRegister();
	INPUTBUFFEREDITOR_API UClass* Z_Construct_UClass_UInputCommandFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InputBufferEditor();
// End Cross Module References
	void UInputCommandFactory::StaticRegisterNativesUInputCommandFactory()
	{
	}
	UClass* Z_Construct_UClass_UInputCommandFactory_NoRegister()
	{
		return UInputCommandFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInputCommandFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCommandFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBufferEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCommandFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputCommandFactory.h" },
		{ "ModuleRelativePath", "Classes/InputCommandFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCommandFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCommandFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCommandFactory_Statics::ClassParams = {
		&UInputCommandFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputCommandFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCommandFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCommandFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCommandFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCommandFactory, 1694105244);
	template<> INPUTBUFFEREDITOR_API UClass* StaticClass<UInputCommandFactory>()
	{
		return UInputCommandFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCommandFactory(Z_Construct_UClass_UInputCommandFactory, &UInputCommandFactory::StaticClass, TEXT("/Script/InputBufferEditor"), TEXT("UInputCommandFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCommandFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
