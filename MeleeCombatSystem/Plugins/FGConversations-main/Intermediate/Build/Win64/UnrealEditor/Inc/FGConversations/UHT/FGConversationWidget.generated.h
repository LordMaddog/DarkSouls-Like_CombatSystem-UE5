// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/FGConversationWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClientConversationMessagePayload;
#ifdef FGCONVERSATIONS_FGConversationWidget_generated_h
#error "FGConversationWidget.generated.h already included, missing '#pragma once' in FGConversationWidget.h"
#endif
#define FGCONVERSATIONS_FGConversationWidget_generated_h

#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnWindowRevealed);


#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConversationWidget(); \
	friend struct Z_Construct_UClass_UFGConversationWidget_Statics; \
public: \
	DECLARE_CLASS(UFGConversationWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FGConversations"), NO_API) \
	DECLARE_SERIALIZER(UFGConversationWidget)


#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFGConversationWidget(UFGConversationWidget&&); \
	UFGConversationWidget(const UFGConversationWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConversationWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConversationWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConversationWidget) \
	NO_API virtual ~UFGConversationWidget();


#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_11_PROLOG
#define FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONVERSATIONS_API UClass* StaticClass<class UFGConversationWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
