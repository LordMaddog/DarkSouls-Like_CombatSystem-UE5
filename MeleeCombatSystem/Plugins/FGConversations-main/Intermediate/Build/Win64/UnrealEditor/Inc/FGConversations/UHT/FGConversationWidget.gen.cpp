// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGConversations/Public/UI/FGConversationWidget.h"
#include "CommonConversationRuntime/Public/ConversationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConversationWidget() {}

// Begin Cross Module References
COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessagePayload();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationParticipantComponent_NoRegister();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationWidget();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_FGConversations();
// End Cross Module References

// Begin Class UFGConversationWidget Function OnConversationEnded
static const FName NAME_UFGConversationWidget_OnConversationEnded = FName(TEXT("OnConversationEnded"));
void UFGConversationWidget::OnConversationEnded()
{
	UFunction* Func = FindFunctionChecked(NAME_UFGConversationWidget_OnConversationEnded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationWidget, nullptr, "OnConversationEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UFGConversationWidget Function OnConversationEnded

// Begin Class UFGConversationWidget Function OnConversationUpdated
struct FGConversationWidget_eventOnConversationUpdated_Parms
{
	FClientConversationMessagePayload MessagePayload;
};
static const FName NAME_UFGConversationWidget_OnConversationUpdated = FName(TEXT("OnConversationUpdated"));
void UFGConversationWidget::OnConversationUpdated(FClientConversationMessagePayload const& MessagePayload)
{
	FGConversationWidget_eventOnConversationUpdated_Parms Parms;
	Parms.MessagePayload=MessagePayload;
	UFunction* Func = FindFunctionChecked(NAME_UFGConversationWidget_OnConversationUpdated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessagePayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessagePayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::NewProp_MessagePayload = { "MessagePayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationWidget_eventOnConversationUpdated_Parms, MessagePayload), Z_Construct_UScriptStruct_FClientConversationMessagePayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessagePayload_MetaData), NewProp_MessagePayload_MetaData) }; // 1751023876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::NewProp_MessagePayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationWidget, nullptr, "OnConversationUpdated", nullptr, nullptr, Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::PropPointers), sizeof(FGConversationWidget_eventOnConversationUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(FGConversationWidget_eventOnConversationUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UFGConversationWidget Function OnConversationUpdated

// Begin Class UFGConversationWidget Function OnWindowRevealed
struct Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationWidget, nullptr, "OnWindowRevealed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationWidget::execOnWindowRevealed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWindowRevealed();
	P_NATIVE_END;
}
// End Class UFGConversationWidget Function OnWindowRevealed

// Begin Class UFGConversationWidget
void UFGConversationWidget::StaticRegisterNativesUFGConversationWidget()
{
	UClass* Class = UFGConversationWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWindowRevealed", &UFGConversationWidget::execOnWindowRevealed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFGConversationWidget);
UClass* Z_Construct_UClass_UFGConversationWidget_NoRegister()
{
	return UFGConversationWidget::StaticClass();
}
struct Z_Construct_UClass_UFGConversationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/FGConversationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealWindow_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "FGConversationWidget" },
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideWindow_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "FGConversationWidget" },
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyConversationComponent_MetaData[] = {
		{ "Category", "FGConversationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/FGConversationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealWindow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HideWindow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyConversationComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGConversationWidget_OnConversationEnded, "OnConversationEnded" }, // 3099876880
		{ &Z_Construct_UFunction_UFGConversationWidget_OnConversationUpdated, "OnConversationUpdated" }, // 3453842523
		{ &Z_Construct_UFunction_UFGConversationWidget_OnWindowRevealed, "OnWindowRevealed" }, // 276797276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGConversationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_RevealWindow = { "RevealWindow", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationWidget, RevealWindow), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealWindow_MetaData), NewProp_RevealWindow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_HideWindow = { "HideWindow", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationWidget, HideWindow), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideWindow_MetaData), NewProp_HideWindow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_MyConversationComponent = { "MyConversationComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationWidget, MyConversationComponent), Z_Construct_UClass_UFGConversationParticipantComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyConversationComponent_MetaData), NewProp_MyConversationComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGConversationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_RevealWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_HideWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationWidget_Statics::NewProp_MyConversationComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFGConversationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FGConversations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFGConversationWidget_Statics::ClassParams = {
	&UFGConversationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFGConversationWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFGConversationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFGConversationWidget()
{
	if (!Z_Registration_Info_UClass_UFGConversationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFGConversationWidget.OuterSingleton, Z_Construct_UClass_UFGConversationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFGConversationWidget.OuterSingleton;
}
template<> FGCONVERSATIONS_API UClass* StaticClass<UFGConversationWidget>()
{
	return UFGConversationWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFGConversationWidget);
UFGConversationWidget::~UFGConversationWidget() {}
// End Class UFGConversationWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFGConversationWidget, UFGConversationWidget::StaticClass, TEXT("UFGConversationWidget"), &Z_Registration_Info_UClass_UFGConversationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFGConversationWidget), 3939613838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_277290243(TEXT("/Script/FGConversations"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_UI_FGConversationWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
