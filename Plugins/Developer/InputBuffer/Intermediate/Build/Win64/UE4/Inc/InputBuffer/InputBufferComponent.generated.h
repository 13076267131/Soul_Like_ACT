// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputCommand;
struct FInputHistoryRecord;
#ifdef INPUTBUFFER_InputBufferComponent_generated_h
#error "InputBufferComponent.generated.h already included, missing '#pragma once' in InputBufferComponent.h"
#endif
#define INPUTBUFFER_InputBufferComponent_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBufferedInputEventKeyMapping_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBufferedInputEventKeyMapping>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBufferedInputEventSetup_Statics; \
	INPUTBUFFER_API static class UScriptStruct* StaticStruct();


template<> INPUTBUFFER_API UScriptStruct* StaticStruct<struct FBufferedInputEventSetup>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMatchCommand) \
	{ \
		P_GET_OBJECT(UInputCommand,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MatchCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToMatch); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToIgnore); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MatchEvents(Z_Param_Out_EventsToMatch,Z_Param_Out_EventsToIgnore,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetHistoryRecords(Z_Param_Out_Records); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHistoryRecords(Z_Param_Out_Records,Z_Param_TimeLimit,Z_Param_bIncludeInvalidRecords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastEvents(Z_Param_Out_Events,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentEvents(Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxRecords); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_GET_UBOOL(Z_Param_bReverseChronological); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Print(Z_Param_MaxRecords,Z_Param_bIncludeInvalidRecords,Z_Param_bReverseChronological); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvalidateHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatchCommand) \
	{ \
		P_GET_OBJECT(UInputCommand,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MatchCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMatchEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToMatch); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventsToIgnore); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->MatchEvents(Z_Param_Out_EventsToMatch,Z_Param_Out_EventsToIgnore,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetHistoryRecords(Z_Param_Out_Records); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHistoryRecords) \
	{ \
		P_GET_TARRAY_REF(FInputHistoryRecord,Z_Param_Out_Records); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetHistoryRecords(Z_Param_Out_Records,Z_Param_TimeLimit,Z_Param_bIncludeInvalidRecords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeLimit); \
		P_GET_UBOOL(Z_Param_bSkipEmptyTrail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastEvents(Z_Param_Out_Events,Z_Param_TimeLimit,Z_Param_bSkipEmptyTrail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEvents) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_Events); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentEvents(Z_Param_Out_Events); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxRecords); \
		P_GET_UBOOL(Z_Param_bIncludeInvalidRecords); \
		P_GET_UBOOL(Z_Param_bReverseChronological); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Print(Z_Param_MaxRecords,Z_Param_bIncludeInvalidRecords,Z_Param_bReverseChronological); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvalidateHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHistory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearHistory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend struct Z_Construct_UClass_UInputBufferComponent_Statics; \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUInputBufferComponent(); \
	friend struct Z_Construct_UClass_UInputBufferComponent_Statics; \
public: \
	DECLARE_CLASS(UInputBufferComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputBuffer"), NO_API) \
	DECLARE_SERIALIZER(UInputBufferComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBufferComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBufferComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBufferComponent(UInputBufferComponent&&); \
	NO_API UInputBufferComponent(const UInputBufferComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBufferComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBufferComponent)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_119_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTBUFFER_API UClass* StaticClass<class UInputBufferComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InputBuffer_Source_InputBuffer_Classes_InputBufferComponent_h


#define FOREACH_ENUM_EBUFFEREDINPUTEVENTTYPE(op) \
	op(EBufferedInputEventType::Pressed) \
	op(EBufferedInputEventType::Released) \
	op(EBufferedInputEventType::Held) 

enum class EBufferedInputEventType : uint8;
template<> INPUTBUFFER_API UEnum* StaticEnum<EBufferedInputEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
