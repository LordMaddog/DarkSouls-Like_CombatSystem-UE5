// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FGConversationParticipantComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFGConversationParticipantComponent;
class UFGConversationParticipantData;
struct FGameplayTag;
#ifdef FGCONVERSATIONS_FGConversationParticipantComponent_generated_h
#error "FGConversationParticipantComponent.generated.h already included, missing '#pragma once' in FGConversationParticipantComponent.h"
#endif
#define FGCONVERSATIONS_FGConversationParticipantComponent_generated_h

#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConversationParticipantData(); \
	friend struct Z_Construct_UClass_UFGConversationParticipantData_Statics; \
public: \
	DECLARE_CLASS(UFGConversationParticipantData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FGConversations"), NO_API) \
	DECLARE_SERIALIZER(UFGConversationParticipantData)


#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConversationParticipantData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFGConversationParticipantData(UFGConversationParticipantData&&); \
	UFGConversationParticipantData(const UFGConversationParticipantData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConversationParticipantData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConversationParticipantData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConversationParticipantData) \
	NO_API virtual ~UFGConversationParticipantData();


#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_11_PROLOG
#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONVERSATIONS_API UClass* StaticClass<class UFGConversationParticipantData>();

#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentEntryPoint); \
	DECLARE_FUNCTION(execGetCurrentEntryPoint); \
	DECLARE_FUNCTION(execK2_GetParticipant); \
	DECLARE_FUNCTION(execGetParticipantData); \
	DECLARE_FUNCTION(execFindConversationComponent);


#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConversationParticipantComponent(); \
	friend struct Z_Construct_UClass_UFGConversationParticipantComponent_Statics; \
public: \
	DECLARE_CLASS(UFGConversationParticipantComponent, UConversationParticipantComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGConversations"), NO_API) \
	DECLARE_SERIALIZER(UFGConversationParticipantComponent)


#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFGConversationParticipantComponent(UFGConversationParticipantComponent&&); \
	UFGConversationParticipantComponent(const UFGConversationParticipantComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConversationParticipantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConversationParticipantComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGConversationParticipantComponent) \
	NO_API virtual ~UFGConversationParticipantComponent();


#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_36_PROLOG
#define FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONVERSATIONS_API UClass* StaticClass<class UFGConversationParticipantComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
