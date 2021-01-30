// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h
#error "HoudiniAssetComponent.generated.h already included, missing '#pragma once' in HoudiniAssetComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h

#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_SPARSE_DATA
#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_RPC_WRAPPERS
#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_RPC_WRAPPERS_NO_PURE_DECLS
#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAssetComponent, NO_API)


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniAssetComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetComponent) \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_ARCHIVESERIALIZER


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetComponent) \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_ARCHIVESERIALIZER


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetComponent(UHoudiniAssetComponent&&); \
	NO_API UHoudiniAssetComponent(const UHoudiniAssetComponent&); \
public:


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetComponent(UHoudiniAssetComponent&&); \
	NO_API UHoudiniAssetComponent(const UHoudiniAssetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetComponent)


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetId() { return STRUCT_OFFSET(UHoudiniAssetComponent, AssetId); } \
	FORCEINLINE static uint32 __PPO__DownstreamHoudiniAssets() { return STRUCT_OFFSET(UHoudiniAssetComponent, DownstreamHoudiniAssets); } \
	FORCEINLINE static uint32 __PPO__ComponentGUID() { return STRUCT_OFFSET(UHoudiniAssetComponent, ComponentGUID); } \
	FORCEINLINE static uint32 __PPO__HapiGUID() { return STRUCT_OFFSET(UHoudiniAssetComponent, HapiGUID); } \
	FORCEINLINE static uint32 __PPO__AssetState() { return STRUCT_OFFSET(UHoudiniAssetComponent, AssetState); } \
	FORCEINLINE static uint32 __PPO__DebugLastAssetState() { return STRUCT_OFFSET(UHoudiniAssetComponent, DebugLastAssetState); } \
	FORCEINLINE static uint32 __PPO__AssetStateResult() { return STRUCT_OFFSET(UHoudiniAssetComponent, AssetStateResult); } \
	FORCEINLINE static uint32 __PPO__SubAssetIndex() { return STRUCT_OFFSET(UHoudiniAssetComponent, SubAssetIndex); } \
	FORCEINLINE static uint32 __PPO__AssetCookCount() { return STRUCT_OFFSET(UHoudiniAssetComponent, AssetCookCount); } \
	FORCEINLINE static uint32 __PPO__bHasBeenLoaded() { return STRUCT_OFFSET(UHoudiniAssetComponent, bHasBeenLoaded); } \
	FORCEINLINE static uint32 __PPO__bHasBeenDuplicated() { return STRUCT_OFFSET(UHoudiniAssetComponent, bHasBeenDuplicated); } \
	FORCEINLINE static uint32 __PPO__bPendingDelete() { return STRUCT_OFFSET(UHoudiniAssetComponent, bPendingDelete); } \
	FORCEINLINE static uint32 __PPO__bRecookRequested() { return STRUCT_OFFSET(UHoudiniAssetComponent, bRecookRequested); } \
	FORCEINLINE static uint32 __PPO__bRebuildRequested() { return STRUCT_OFFSET(UHoudiniAssetComponent, bRebuildRequested); } \
	FORCEINLINE static uint32 __PPO__bEnableCooking() { return STRUCT_OFFSET(UHoudiniAssetComponent, bEnableCooking); } \
	FORCEINLINE static uint32 __PPO__bForceNeedUpdate() { return STRUCT_OFFSET(UHoudiniAssetComponent, bForceNeedUpdate); } \
	FORCEINLINE static uint32 __PPO__bLastCookSuccess() { return STRUCT_OFFSET(UHoudiniAssetComponent, bLastCookSuccess); } \
	FORCEINLINE static uint32 __PPO__bBlueprintStructureModified() { return STRUCT_OFFSET(UHoudiniAssetComponent, bBlueprintStructureModified); } \
	FORCEINLINE static uint32 __PPO__bBlueprintModified() { return STRUCT_OFFSET(UHoudiniAssetComponent, bBlueprintModified); } \
	FORCEINLINE static uint32 __PPO__Parameters() { return STRUCT_OFFSET(UHoudiniAssetComponent, Parameters); } \
	FORCEINLINE static uint32 __PPO__Inputs() { return STRUCT_OFFSET(UHoudiniAssetComponent, Inputs); } \
	FORCEINLINE static uint32 __PPO__Outputs() { return STRUCT_OFFSET(UHoudiniAssetComponent, Outputs); } \
	FORCEINLINE static uint32 __PPO__BakedOutputs() { return STRUCT_OFFSET(UHoudiniAssetComponent, BakedOutputs); } \
	FORCEINLINE static uint32 __PPO__UntrackedOutputs() { return STRUCT_OFFSET(UHoudiniAssetComponent, UntrackedOutputs); } \
	FORCEINLINE static uint32 __PPO__HandleComponents() { return STRUCT_OFFSET(UHoudiniAssetComponent, HandleComponents); } \
	FORCEINLINE static uint32 __PPO__bHasComponentTransformChanged() { return STRUCT_OFFSET(UHoudiniAssetComponent, bHasComponentTransformChanged); } \
	FORCEINLINE static uint32 __PPO__bFullyLoaded() { return STRUCT_OFFSET(UHoudiniAssetComponent, bFullyLoaded); } \
	FORCEINLINE static uint32 __PPO__PDGAssetLink() { return STRUCT_OFFSET(UHoudiniAssetComponent, PDGAssetLink); } \
	FORCEINLINE static uint32 __PPO__RefineMeshesTimer() { return STRUCT_OFFSET(UHoudiniAssetComponent, RefineMeshesTimer); } \
	FORCEINLINE static uint32 __PPO__bNoProxyMeshNextCookRequested() { return STRUCT_OFFSET(UHoudiniAssetComponent, bNoProxyMeshNextCookRequested); } \
	FORCEINLINE static uint32 __PPO__InputPresets() { return STRUCT_OFFSET(UHoudiniAssetComponent, InputPresets); } \
	FORCEINLINE static uint32 __PPO__bBakeAfterNextCook() { return STRUCT_OFFSET(UHoudiniAssetComponent, bBakeAfterNextCook); } \
	FORCEINLINE static uint32 __PPO__bCachedIsPreview() { return STRUCT_OFFSET(UHoudiniAssetComponent, bCachedIsPreview); }


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_136_PROLOG
#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_PRIVATE_PROPERTY_OFFSET \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_SPARSE_DATA \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_RPC_WRAPPERS \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_INCLASS \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_PRIVATE_PROPERTY_OFFSET \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_SPARSE_DATA \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_INCLASS_NO_PURE_DECLS \
	LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_139_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HoudiniAssetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniAssetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostSoul_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h


#define FOREACH_ENUM_EHOUDINIENGINEBAKEOPTION(op) \
	op(EHoudiniEngineBakeOption::ToActor) \
	op(EHoudiniEngineBakeOption::ToBlueprint) \
	op(EHoudiniEngineBakeOption::ToFoliage) \
	op(EHoudiniEngineBakeOption::ToWorldOutliner) 

enum class EHoudiniEngineBakeOption : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>();

#define FOREACH_ENUM_EHOUDINISTATICMESHMETHOD(op) \
	op(EHoudiniStaticMeshMethod::RawMesh) \
	op(EHoudiniStaticMeshMethod::FMeshDescription) \
	op(EHoudiniStaticMeshMethod::UHoudiniStaticMesh) 

enum class EHoudiniStaticMeshMethod : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>();

#define FOREACH_ENUM_EHOUDINIASSETSTATERESULT(op) \
	op(EHoudiniAssetStateResult::None) \
	op(EHoudiniAssetStateResult::Working) \
	op(EHoudiniAssetStateResult::Success) \
	op(EHoudiniAssetStateResult::FinishedWithError) \
	op(EHoudiniAssetStateResult::FinishedWithFatalError) \
	op(EHoudiniAssetStateResult::Aborted) 

enum class EHoudiniAssetStateResult : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>();

#define FOREACH_ENUM_EHOUDINIASSETSTATE(op) \
	op(EHoudiniAssetState::NeedInstantiation) \
	op(EHoudiniAssetState::PreInstantiation) \
	op(EHoudiniAssetState::Instantiating) \
	op(EHoudiniAssetState::PreCook) \
	op(EHoudiniAssetState::Cooking) \
	op(EHoudiniAssetState::PostCook) \
	op(EHoudiniAssetState::PreProcess) \
	op(EHoudiniAssetState::Processing) \
	op(EHoudiniAssetState::None) \
	op(EHoudiniAssetState::NeedRebuild) \
	op(EHoudiniAssetState::NeedDelete) \
	op(EHoudiniAssetState::Deleting) \
	op(EHoudiniAssetState::ProcessTemplate) 

enum class EHoudiniAssetState : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
