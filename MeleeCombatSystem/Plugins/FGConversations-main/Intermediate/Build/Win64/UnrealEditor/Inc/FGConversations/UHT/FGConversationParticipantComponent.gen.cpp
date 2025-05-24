// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FGConversations/Public/FGConversationParticipantComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConversationParticipantComponent() {}

// Begin Cross Module References
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationParticipantComponent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationParticipantComponent();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationParticipantComponent_NoRegister();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationParticipantData();
FGCONVERSATIONS_API UClass* Z_Construct_UClass_UFGConversationParticipantData_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FGConversations();
// End Cross Module References

// Begin Class UFGConversationParticipantData
void UFGConversationParticipantData::StaticRegisterNativesUFGConversationParticipantData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFGConversationParticipantData);
UClass* Z_Construct_UClass_UFGConversationParticipantData_NoRegister()
{
	return UFGConversationParticipantData::StaticClass();
}
struct Z_Construct_UClass_UFGConversationParticipantData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes a participant in a conversation */" },
#endif
		{ "DisplayName", "FG Conversation Participant Data" },
		{ "IncludePath", "FGConversationParticipantComponent.h" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
		{ "ShortTooltip", "Data asset used to define a Conversation Participant." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes a participant in a conversation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "FGConversationParticipantData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If not set, the owning Actor's name will be used instead. */" },
#endif
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not set, the owning Actor's name will be used instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarImage_MetaData[] = {
		{ "Category", "FGConversationParticipantData" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantTag_MetaData[] = {
		{ "Category", "FGConversationParticipantData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An ID that will be used by the Conversation system to link to the\n\x09 * owning Actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An ID that will be used by the Conversation system to link to the\nowning Actor." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGConversationParticipantData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationParticipantData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_AvatarImage = { "AvatarImage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationParticipantData, AvatarImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarImage_MetaData), NewProp_AvatarImage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationParticipantData, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantTag_MetaData), NewProp_ParticipantTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGConversationParticipantData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_AvatarImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationParticipantData_Statics::NewProp_ParticipantTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFGConversationParticipantData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FGConversations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFGConversationParticipantData_Statics::ClassParams = {
	&UFGConversationParticipantData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFGConversationParticipantData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFGConversationParticipantData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFGConversationParticipantData()
{
	if (!Z_Registration_Info_UClass_UFGConversationParticipantData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFGConversationParticipantData.OuterSingleton, Z_Construct_UClass_UFGConversationParticipantData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFGConversationParticipantData.OuterSingleton;
}
template<> FGCONVERSATIONS_API UClass* StaticClass<UFGConversationParticipantData>()
{
	return UFGConversationParticipantData::StaticClass();
}
UFGConversationParticipantData::UFGConversationParticipantData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFGConversationParticipantData);
UFGConversationParticipantData::~UFGConversationParticipantData() {}
// End Class UFGConversationParticipantData

// Begin Class UFGConversationParticipantComponent Function FindConversationComponent
struct Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics
{
	struct FGConversationParticipantComponent_eventFindConversationComponent_Parms
	{
		const AActor* Actor;
		UFGConversationParticipantComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FG|Conversation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the conversation component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the conversation component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventFindConversationComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventFindConversationComponent_Parms, ReturnValue), Z_Construct_UClass_UFGConversationParticipantComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationParticipantComponent, nullptr, "FindConversationComponent", nullptr, nullptr, Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::FGConversationParticipantComponent_eventFindConversationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::FGConversationParticipantComponent_eventFindConversationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationParticipantComponent::execFindConversationComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFGConversationParticipantComponent**)Z_Param__Result=UFGConversationParticipantComponent::FindConversationComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UFGConversationParticipantComponent Function FindConversationComponent

// Begin Class UFGConversationParticipantComponent Function GetCurrentEntryPoint
struct Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics
{
	struct FGConversationParticipantComponent_eventGetCurrentEntryPoint_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FG|Conversation" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventGetCurrentEntryPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationParticipantComponent, nullptr, "GetCurrentEntryPoint", nullptr, nullptr, Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::FGConversationParticipantComponent_eventGetCurrentEntryPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::FGConversationParticipantComponent_eventGetCurrentEntryPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationParticipantComponent::execGetCurrentEntryPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentEntryPoint();
	P_NATIVE_END;
}
// End Class UFGConversationParticipantComponent Function GetCurrentEntryPoint

// Begin Class UFGConversationParticipantComponent Function GetParticipantData
struct Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics
{
	struct FGConversationParticipantComponent_eventGetParticipantData_Parms
	{
		const UFGConversationParticipantData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventGetParticipantData_Parms, ReturnValue), Z_Construct_UClass_UFGConversationParticipantData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationParticipantComponent, nullptr, "GetParticipantData", nullptr, nullptr, Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::FGConversationParticipantComponent_eventGetParticipantData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::FGConversationParticipantComponent_eventGetParticipantData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationParticipantComponent::execGetParticipantData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UFGConversationParticipantData**)Z_Param__Result=P_THIS->GetParticipantData();
	P_NATIVE_END;
}
// End Class UFGConversationParticipantComponent Function GetParticipantData

// Begin Class UFGConversationParticipantComponent Function K2_GetParticipant
struct Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics
{
	struct FGConversationParticipantComponent_eventK2_GetParticipant_Parms
	{
		FGameplayTag ParticipantTag;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FG|Conversation" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventK2_GetParticipant_Parms, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantTag_MetaData), NewProp_ParticipantTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventK2_GetParticipant_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::NewProp_ParticipantTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationParticipantComponent, nullptr, "K2_GetParticipant", nullptr, nullptr, Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::FGConversationParticipantComponent_eventK2_GetParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::FGConversationParticipantComponent_eventK2_GetParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationParticipantComponent::execK2_GetParticipant)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ParticipantTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->K2_GetParticipant(Z_Param_Out_ParticipantTag);
	P_NATIVE_END;
}
// End Class UFGConversationParticipantComponent Function K2_GetParticipant

// Begin Class UFGConversationParticipantComponent Function SetCurrentEntryPoint
struct Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics
{
	struct FGConversationParticipantComponent_eventSetCurrentEntryPoint_Parms
	{
		FGameplayTag NewEntryPointTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FG|Conversation" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewEntryPointTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::NewProp_NewEntryPointTag = { "NewEntryPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGConversationParticipantComponent_eventSetCurrentEntryPoint_Parms, NewEntryPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::NewProp_NewEntryPointTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConversationParticipantComponent, nullptr, "SetCurrentEntryPoint", nullptr, nullptr, Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::FGConversationParticipantComponent_eventSetCurrentEntryPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::FGConversationParticipantComponent_eventSetCurrentEntryPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFGConversationParticipantComponent::execSetCurrentEntryPoint)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewEntryPointTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentEntryPoint(Z_Param_NewEntryPointTag);
	P_NATIVE_END;
}
// End Class UFGConversationParticipantComponent Function SetCurrentEntryPoint

// Begin Class UFGConversationParticipantComponent
void UFGConversationParticipantComponent::StaticRegisterNativesUFGConversationParticipantComponent()
{
	UClass* Class = UFGConversationParticipantComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindConversationComponent", &UFGConversationParticipantComponent::execFindConversationComponent },
		{ "GetCurrentEntryPoint", &UFGConversationParticipantComponent::execGetCurrentEntryPoint },
		{ "GetParticipantData", &UFGConversationParticipantComponent::execGetParticipantData },
		{ "K2_GetParticipant", &UFGConversationParticipantComponent::execK2_GetParticipant },
		{ "SetCurrentEntryPoint", &UFGConversationParticipantComponent::execSetCurrentEntryPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFGConversationParticipantComponent);
UClass* Z_Construct_UClass_UFGConversationParticipantComponent_NoRegister()
{
	return UFGConversationParticipantComponent::StaticClass();
}
struct Z_Construct_UClass_UFGConversationParticipantComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FGConversationParticipantComponent.h" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversationParticipantData_MetaData[] = {
		{ "Category", "FG|Conversation" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConversationEntryPoint_MetaData[] = {
		{ "Category", "FG|Conversation" },
		{ "ModuleRelativePath", "Public/FGConversationParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConversationParticipantData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultConversationEntryPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGConversationParticipantComponent_FindConversationComponent, "FindConversationComponent" }, // 3891265411
		{ &Z_Construct_UFunction_UFGConversationParticipantComponent_GetCurrentEntryPoint, "GetCurrentEntryPoint" }, // 797532584
		{ &Z_Construct_UFunction_UFGConversationParticipantComponent_GetParticipantData, "GetParticipantData" }, // 1902195937
		{ &Z_Construct_UFunction_UFGConversationParticipantComponent_K2_GetParticipant, "K2_GetParticipant" }, // 1610923394
		{ &Z_Construct_UFunction_UFGConversationParticipantComponent_SetCurrentEntryPoint, "SetCurrentEntryPoint" }, // 2500893845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGConversationParticipantComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGConversationParticipantComponent_Statics::NewProp_ConversationParticipantData = { "ConversationParticipantData", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationParticipantComponent, ConversationParticipantData), Z_Construct_UClass_UFGConversationParticipantData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversationParticipantData_MetaData), NewProp_ConversationParticipantData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGConversationParticipantComponent_Statics::NewProp_DefaultConversationEntryPoint = { "DefaultConversationEntryPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFGConversationParticipantComponent, DefaultConversationEntryPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultConversationEntryPoint_MetaData), NewProp_DefaultConversationEntryPoint_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGConversationParticipantComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationParticipantComponent_Statics::NewProp_ConversationParticipantData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConversationParticipantComponent_Statics::NewProp_DefaultConversationEntryPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFGConversationParticipantComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UConversationParticipantComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FGConversations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFGConversationParticipantComponent_Statics::ClassParams = {
	&UFGConversationParticipantComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFGConversationParticipantComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFGConversationParticipantComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFGConversationParticipantComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFGConversationParticipantComponent()
{
	if (!Z_Registration_Info_UClass_UFGConversationParticipantComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFGConversationParticipantComponent.OuterSingleton, Z_Construct_UClass_UFGConversationParticipantComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFGConversationParticipantComponent.OuterSingleton;
}
template<> FGCONVERSATIONS_API UClass* StaticClass<UFGConversationParticipantComponent>()
{
	return UFGConversationParticipantComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFGConversationParticipantComponent);
UFGConversationParticipantComponent::~UFGConversationParticipantComponent() {}
// End Class UFGConversationParticipantComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFGConversationParticipantData, UFGConversationParticipantData::StaticClass, TEXT("UFGConversationParticipantData"), &Z_Registration_Info_UClass_UFGConversationParticipantData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFGConversationParticipantData), 2176054794U) },
		{ Z_Construct_UClass_UFGConversationParticipantComponent, UFGConversationParticipantComponent::StaticClass, TEXT("UFGConversationParticipantComponent"), &Z_Registration_Info_UClass_UFGConversationParticipantComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFGConversationParticipantComponent), 2631505135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_2336800232(TEXT("/Script/FGConversations"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MeleeCombatSystem_Plugins_FGConversations_main_Source_FGConversations_Public_FGConversationParticipantComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
