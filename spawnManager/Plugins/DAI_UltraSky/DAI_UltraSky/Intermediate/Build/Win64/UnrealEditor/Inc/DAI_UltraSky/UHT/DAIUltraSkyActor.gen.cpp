// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyClimatePreset_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_UDAIUltraSkyService_NoRegister();
DAI_ULTRASKY_API UFunction* Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Delegate FOnFootprintStamped
struct Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics
{
	struct DAIUltraSkyActor_eventOnFootprintStamped_Parms
	{
		FVector Location;
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventOnFootprintStamped_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventOnFootprintStamped_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "OnFootprintStamped__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::DAIUltraSkyActor_eventOnFootprintStamped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::DAIUltraSkyActor_eventOnFootprintStamped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ADAIUltraSkyActor::FOnFootprintStamped_DelegateWrapper(const FMulticastScriptDelegate& OnFootprintStamped, FVector Location, float Strength)
{
	struct DAIUltraSkyActor_eventOnFootprintStamped_Parms
	{
		FVector Location;
		float Strength;
	};
	DAIUltraSkyActor_eventOnFootprintStamped_Parms Parms;
	Parms.Location=Location;
	Parms.Strength=Strength;
	OnFootprintStamped.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFootprintStamped

// Begin Class ADAIUltraSkyActor Function EditorApplySelectedPreset
struct Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "EditorApplySelectedPreset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execEditorApplySelectedPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorApplySelectedPreset();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function EditorApplySelectedPreset

// Begin Class ADAIUltraSkyActor Function EditorCreateFootprintDemo
#if WITH_EDITOR
struct Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "EditorCreateFootprintDemo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ADAIUltraSkyActor::execEditorCreateFootprintDemo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorCreateFootprintDemo();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ADAIUltraSkyActor Function EditorCreateFootprintDemo

// Begin Class ADAIUltraSkyActor Function EditorCreateUltraSkySamples
#if WITH_EDITOR
struct Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "EditorCreateUltraSkySamples", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ADAIUltraSkyActor::execEditorCreateUltraSkySamples)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorCreateUltraSkySamples();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ADAIUltraSkyActor Function EditorCreateUltraSkySamples

// Begin Class ADAIUltraSkyActor Function EditorRecaptureSkylight
struct Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UltraSky|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor helpers\n" },
#endif
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor helpers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "EditorRecaptureSkylight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execEditorRecaptureSkylight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorRecaptureSkylight();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function EditorRecaptureSkylight

// Begin Class ADAIUltraSkyActor Function EditorRemoveFootprintAppliers
#if WITH_EDITOR
struct Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "EditorRemoveFootprintAppliers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ADAIUltraSkyActor::execEditorRemoveFootprintAppliers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditorRemoveFootprintAppliers();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ADAIUltraSkyActor Function EditorRemoveFootprintAppliers

// Begin Class ADAIUltraSkyActor Function ForceApplyBiome
struct Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics
{
	struct DAIUltraSkyActor_eventForceApplyBiome_Parms
	{
		UDAIUltraSkyBiomeData* Biome;
		float BlendSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Weather" },
		{ "CPP_Default_BlendSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Biome;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventForceApplyBiome_Parms, Biome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::NewProp_BlendSeconds = { "BlendSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventForceApplyBiome_Parms, BlendSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::NewProp_Biome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::NewProp_BlendSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "ForceApplyBiome", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::DAIUltraSkyActor_eventForceApplyBiome_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::DAIUltraSkyActor_eventForceApplyBiome_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execForceApplyBiome)
{
	P_GET_OBJECT(UDAIUltraSkyBiomeData,Z_Param_Biome);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceApplyBiome(Z_Param_Biome,Z_Param_BlendSeconds);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function ForceApplyBiome

// Begin Class ADAIUltraSkyActor Function ForceCondition
struct Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics
{
	struct DAIUltraSkyActor_eventForceCondition_Parms
	{
		FName ConditionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventForceCondition_Parms, ConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::NewProp_ConditionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "ForceCondition", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::DAIUltraSkyActor_eventForceCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::DAIUltraSkyActor_eventForceCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execForceCondition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceCondition(Z_Param_ConditionName);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function ForceCondition

// Begin Class ADAIUltraSkyActor Function IsSnowDeepEnoughForFootprints
struct Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics
{
	struct DAIUltraSkyActor_eventIsSnowDeepEnoughForFootprints_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAIUltraSkyActor_eventIsSnowDeepEnoughForFootprints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAIUltraSkyActor_eventIsSnowDeepEnoughForFootprints_Parms), &Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "IsSnowDeepEnoughForFootprints", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::DAIUltraSkyActor_eventIsSnowDeepEnoughForFootprints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::DAIUltraSkyActor_eventIsSnowDeepEnoughForFootprints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execIsSnowDeepEnoughForFootprints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSnowDeepEnoughForFootprints();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function IsSnowDeepEnoughForFootprints

// Begin Class ADAIUltraSkyActor Function SetDayLengthSeconds
struct Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics
{
	struct DAIUltraSkyActor_eventSetDayLengthSeconds_Parms
	{
		float NewLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Time" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventSetDayLengthSeconds_Parms, NewLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::NewProp_NewLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "SetDayLengthSeconds", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::DAIUltraSkyActor_eventSetDayLengthSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::DAIUltraSkyActor_eventSetDayLengthSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execSetDayLengthSeconds)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDayLengthSeconds(Z_Param_NewLength);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function SetDayLengthSeconds

// Begin Class ADAIUltraSkyActor Function SetTimeOfDay
struct Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics
{
	struct DAIUltraSkyActor_eventSetTimeOfDay_Parms
	{
		float NewTimeOfDay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint utilities\n" },
#endif
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint utilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeOfDay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::NewProp_NewTimeOfDay = { "NewTimeOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventSetTimeOfDay_Parms, NewTimeOfDay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::NewProp_NewTimeOfDay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "SetTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::DAIUltraSkyActor_eventSetTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::DAIUltraSkyActor_eventSetTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execSetTimeOfDay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeOfDay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeOfDay(Z_Param_NewTimeOfDay);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function SetTimeOfDay

// Begin Class ADAIUltraSkyActor Function StampFootprintAtLocation
struct Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics
{
	struct DAIUltraSkyActor_eventStampFootprintAtLocation_Parms
	{
		FVector WorldLocation;
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Snow" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventStampFootprintAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyActor_eventStampFootprintAtLocation_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyActor, nullptr, "StampFootprintAtLocation", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::DAIUltraSkyActor_eventStampFootprintAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::DAIUltraSkyActor_eventStampFootprintAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyActor::execStampFootprintAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StampFootprintAtLocation(Z_Param_WorldLocation,Z_Param_Strength);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyActor Function StampFootprintAtLocation

// Begin Class ADAIUltraSkyActor
void ADAIUltraSkyActor::StaticRegisterNativesADAIUltraSkyActor()
{
	UClass* Class = ADAIUltraSkyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EditorApplySelectedPreset", &ADAIUltraSkyActor::execEditorApplySelectedPreset },
#if WITH_EDITOR
		{ "EditorCreateFootprintDemo", &ADAIUltraSkyActor::execEditorCreateFootprintDemo },
		{ "EditorCreateUltraSkySamples", &ADAIUltraSkyActor::execEditorCreateUltraSkySamples },
#endif // WITH_EDITOR
		{ "EditorRecaptureSkylight", &ADAIUltraSkyActor::execEditorRecaptureSkylight },
#if WITH_EDITOR
		{ "EditorRemoveFootprintAppliers", &ADAIUltraSkyActor::execEditorRemoveFootprintAppliers },
#endif // WITH_EDITOR
		{ "ForceApplyBiome", &ADAIUltraSkyActor::execForceApplyBiome },
		{ "ForceCondition", &ADAIUltraSkyActor::execForceCondition },
		{ "IsSnowDeepEnoughForFootprints", &ADAIUltraSkyActor::execIsSnowDeepEnoughForFootprints },
		{ "SetDayLengthSeconds", &ADAIUltraSkyActor::execSetDayLengthSeconds },
		{ "SetTimeOfDay", &ADAIUltraSkyActor::execSetTimeOfDay },
		{ "StampFootprintAtLocation", &ADAIUltraSkyActor::execStampFootprintAtLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyActor);
UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister()
{
	return ADAIUltraSkyActor::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "UltraSky" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root scene component for UltraSky actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunLight_MetaData[] = {
		{ "Category", "UltraSky|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary directional light representing the sun." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyLight_MetaData[] = {
		{ "Category", "UltraSky|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkyLight capturing ambient lighting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Atmosphere_MetaData[] = {
		{ "Category", "UltraSky|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkyAtmosphere component controlling Rayleigh / Mie scattering." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricClouds_MetaData[] = {
		{ "Category", "UltraSky|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volumetric clouds component for dynamic cloud rendering." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFog_MetaData[] = {
		{ "Category", "UltraSky|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height fog component used for atmospheric ground haze." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRunDayNight_MetaData[] = {
		{ "Category", "UltraSky|Time" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically advance time-of-day each tick using DayLengthSeconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLengthSeconds_MetaData[] = {
		{ "Category", "UltraSky|Time" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Real-time seconds for a full 24h cycle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "UltraSky|Time" },
		{ "ClampMax", "24.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current time of day in hours [0,24)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightRecaptureInterval_MetaData[] = {
		{ "Category", "UltraSky|Performance" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds between SkyLight recaptures (performance tradeoff)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "UltraSky|Atmosphere" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global multiplier for Rayleigh scattering intensity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "UltraSky|Atmosphere" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global multiplier for Mie scattering intensity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudCoverage_MetaData[] = {
		{ "Category", "UltraSky|Clouds" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target normalized cloud coverage (0 clear, 1 overcast)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudDensity_MetaData[] = {
		{ "Category", "UltraSky|Clouds" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target normalized volumetric cloud density." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBiomeVolumes_MetaData[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable biome volume system to drive weather/visual parameters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeatherAnchor_MetaData[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor used as spatial anchor for biome & weather evaluation (e.g., player)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeCheckInterval_MetaData[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds between biome volume overlap evaluations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBiome_MetaData[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback biome used if no volume applies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCondition_MetaData[] = {
		{ "Category", "UltraSky|Weather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually forced weather condition name; leave empty for biome-driven." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[] = {
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biome presets list for quick editing / preview." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSelectedPresetIndex_MetaData[] = {
		{ "Category", "UltraSky|Editor" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index into Presets array selected for apply operations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWindDirectionalSource_MetaData[] = {
		{ "Category", "UltraSky|Wind" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable spawning & updating a wind directional source actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindBaseIntensity_MetaData[] = {
		{ "Category", "UltraSky|Wind" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Baseline wind intensity (0..1) before gust modulation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindGustStrength_MetaData[] = {
		{ "Category", "UltraSky|Wind" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind gust amplitude added to base (0..1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindGustSpeed_MetaData[] = {
		{ "Category", "UltraSky|Wind" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gust noise speed (larger = faster variation)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDirectionDegrees_MetaData[] = {
		{ "Category", "UltraSky|Wind" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wind direction in degrees (0 = +X)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalWindMPC_MetaData[] = {
		{ "Category", "UltraSky|Wind|MPC" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional material parameter collection to broadcast wind params." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCParam_WindIntensity_MetaData[] = {
		{ "Category", "UltraSky|Wind|MPC" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar parameter name for wind intensity in MPC." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCParam_WindDirectionDegrees_MetaData[] = {
		{ "Category", "UltraSky|Wind|MPC" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scalar parameter name for wind direction (degrees) in MPC." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSnowFromTemperature_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto switch to snow accumulation logic based on temperature/precipitation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowTempThresholdC_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temperature (Celsius) threshold at/under which precipitation becomes snow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowAccumulation_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current snow depth proxy (0 none, 1 max)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowAccumulationRate_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate per second snow depth increases during snowfall." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowMeltRate_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate per second snow depth melts when conditions allow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Surface wetness proxy (0 dry, 1 soaked)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetnessAccumulationRateRain_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wetness accumulation rate while raining (per second)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetnessDryRate_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drying rate per second when not precipitating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGASAttributesForSnowLogic_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query GAS attribute set for TemperatureC / Precipitation instead of local simulation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootprintSnowThreshold_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum snow accumulation required before footprints allowed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFootprintStamped_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event fired when a footprint is stamped (location & strength)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRandomWeather_MetaData[] = {
		{ "Category", "UltraSky|RandomWeather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable stochastic weather selection driven by climate preset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Season_MetaData[] = {
		{ "Category", "UltraSky|RandomWeather" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current season index (0 Spring..3 Winter). Fractional values allow blending." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimatePreset_MetaData[] = {
		{ "Category", "UltraSky|RandomWeather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Climate preset providing weighted biome/condition choices per season." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeatherBaseInterval_MetaData[] = {
		{ "Category", "UltraSky|RandomWeather" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base seconds between weather picks (actual jittered \xc2\xb1""25%)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "UltraSky|RandomWeather" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seed for deterministic random weather (0 = non-deterministic)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowDepthThresholds_MetaData[] = {
		{ "Category", "UltraSky|Snow" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized snow depth thresholds (0..1) that fire events when crossed up or down." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBiome_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active biome currently driving visuals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBiome_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target biome being blended towards." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveConditionFX_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active Niagara component for current weather condition FX." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawned wind directional source component (if enabled)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SunLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyLight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Atmosphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumetricClouds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightFog;
	static void NewProp_bAutoRunDayNight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRunDayNight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLengthSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyLightRecaptureInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudCoverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudDensity;
	static void NewProp_bUseBiomeVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBiomeVolumes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeatherAnchor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BiomeCheckInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBiome;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Presets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorSelectedPresetIndex;
	static void NewProp_bEnableWindDirectionalSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWindDirectionalSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindBaseIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindGustStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindGustSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDirectionDegrees;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalWindMPC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MPCParam_WindIntensity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MPCParam_WindDirectionDegrees;
	static void NewProp_bAutoSnowFromTemperature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSnowFromTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowTempThresholdC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAccumulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAccumulationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowMeltRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetnessAccumulationRateRain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetnessDryRate;
	static void NewProp_bUseGASAttributesForSnowLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGASAttributesForSnowLogic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootprintSnowThreshold;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFootprintStamped;
	static void NewProp_bEnableRandomWeather_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRandomWeather;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Season;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimatePreset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomWeatherBaseInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowDepthThresholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SnowDepthThresholds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBiome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBiome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveConditionFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_EditorApplySelectedPreset, "EditorApplySelectedPreset" }, // 3458045310
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateFootprintDemo, "EditorCreateFootprintDemo" }, // 1579886058
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_EditorCreateUltraSkySamples, "EditorCreateUltraSkySamples" }, // 2071673510
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_EditorRecaptureSkylight, "EditorRecaptureSkylight" }, // 3245464293
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_EditorRemoveFootprintAppliers, "EditorRemoveFootprintAppliers" }, // 3621662041
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_ForceApplyBiome, "ForceApplyBiome" }, // 4025705952
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_ForceCondition, "ForceCondition" }, // 837129162
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_IsSnowDeepEnoughForFootprints, "IsSnowDeepEnoughForFootprints" }, // 2303788328
		{ &Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature, "OnFootprintStamped__DelegateSignature" }, // 3671617695
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_SetDayLengthSeconds, "SetDayLengthSeconds" }, // 898766928
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_SetTimeOfDay, "SetTimeOfDay" }, // 590172912
		{ &Z_Construct_UFunction_ADAIUltraSkyActor_StampFootprintAtLocation, "StampFootprintAtLocation" }, // 585254045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SunLight = { "SunLight", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SunLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunLight_MetaData), NewProp_SunLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SkyLight = { "SkyLight", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SkyLight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyLight_MetaData), NewProp_SkyLight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Atmosphere = { "Atmosphere", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, Atmosphere), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Atmosphere_MetaData), NewProp_Atmosphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_VolumetricClouds = { "VolumetricClouds", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, VolumetricClouds), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricClouds_MetaData), NewProp_VolumetricClouds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_HeightFog = { "HeightFog", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, HeightFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFog_MetaData), NewProp_HeightFog_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoRunDayNight_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bAutoRunDayNight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoRunDayNight = { "bAutoRunDayNight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoRunDayNight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRunDayNight_MetaData), NewProp_bAutoRunDayNight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_DayLengthSeconds = { "DayLengthSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, DayLengthSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLengthSeconds_MetaData), NewProp_DayLengthSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, TimeOfDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDay_MetaData), NewProp_TimeOfDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SkyLightRecaptureInterval = { "SkyLightRecaptureInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SkyLightRecaptureInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyLightRecaptureInterval_MetaData), NewProp_SkyLightRecaptureInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, RayleighScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayleighScatteringScale_MetaData), NewProp_RayleighScatteringScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, MieScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieScatteringScale_MetaData), NewProp_MieScatteringScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CloudCoverage = { "CloudCoverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, CloudCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudCoverage_MetaData), NewProp_CloudCoverage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CloudDensity = { "CloudDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, CloudDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudDensity_MetaData), NewProp_CloudDensity_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseBiomeVolumes_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bUseBiomeVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseBiomeVolumes = { "bUseBiomeVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseBiomeVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBiomeVolumes_MetaData), NewProp_bUseBiomeVolumes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WeatherAnchor = { "WeatherAnchor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WeatherAnchor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeatherAnchor_MetaData), NewProp_WeatherAnchor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_BiomeCheckInterval = { "BiomeCheckInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, BiomeCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeCheckInterval_MetaData), NewProp_BiomeCheckInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_DefaultBiome = { "DefaultBiome", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, DefaultBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBiome_MetaData), NewProp_DefaultBiome_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CurrentCondition = { "CurrentCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, CurrentCondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCondition_MetaData), NewProp_CurrentCondition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presets_MetaData), NewProp_Presets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_EditorSelectedPresetIndex = { "EditorSelectedPresetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, EditorSelectedPresetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSelectedPresetIndex_MetaData), NewProp_EditorSelectedPresetIndex_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableWindDirectionalSource_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bEnableWindDirectionalSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableWindDirectionalSource = { "bEnableWindDirectionalSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableWindDirectionalSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWindDirectionalSource_MetaData), NewProp_bEnableWindDirectionalSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindBaseIntensity = { "WindBaseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WindBaseIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindBaseIntensity_MetaData), NewProp_WindBaseIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindGustStrength = { "WindGustStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WindGustStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindGustStrength_MetaData), NewProp_WindGustStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindGustSpeed = { "WindGustSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WindGustSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindGustSpeed_MetaData), NewProp_WindGustSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindDirectionDegrees = { "WindDirectionDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WindDirectionDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDirectionDegrees_MetaData), NewProp_WindDirectionDegrees_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_GlobalWindMPC = { "GlobalWindMPC", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, GlobalWindMPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalWindMPC_MetaData), NewProp_GlobalWindMPC_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MPCParam_WindIntensity = { "MPCParam_WindIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, MPCParam_WindIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCParam_WindIntensity_MetaData), NewProp_MPCParam_WindIntensity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MPCParam_WindDirectionDegrees = { "MPCParam_WindDirectionDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, MPCParam_WindDirectionDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCParam_WindDirectionDegrees_MetaData), NewProp_MPCParam_WindDirectionDegrees_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoSnowFromTemperature_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bAutoSnowFromTemperature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoSnowFromTemperature = { "bAutoSnowFromTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoSnowFromTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSnowFromTemperature_MetaData), NewProp_bAutoSnowFromTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowTempThresholdC = { "SnowTempThresholdC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SnowTempThresholdC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowTempThresholdC_MetaData), NewProp_SnowTempThresholdC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowAccumulation = { "SnowAccumulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SnowAccumulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowAccumulation_MetaData), NewProp_SnowAccumulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowAccumulationRate = { "SnowAccumulationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SnowAccumulationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowAccumulationRate_MetaData), NewProp_SnowAccumulationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowMeltRate = { "SnowMeltRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SnowMeltRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowMeltRate_MetaData), NewProp_SnowMeltRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, Wetness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wetness_MetaData), NewProp_Wetness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WetnessAccumulationRateRain = { "WetnessAccumulationRateRain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WetnessAccumulationRateRain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetnessAccumulationRateRain_MetaData), NewProp_WetnessAccumulationRateRain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WetnessDryRate = { "WetnessDryRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WetnessDryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetnessDryRate_MetaData), NewProp_WetnessDryRate_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseGASAttributesForSnowLogic_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bUseGASAttributesForSnowLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseGASAttributesForSnowLogic = { "bUseGASAttributesForSnowLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseGASAttributesForSnowLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGASAttributesForSnowLogic_MetaData), NewProp_bUseGASAttributesForSnowLogic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_FootprintSnowThreshold = { "FootprintSnowThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, FootprintSnowThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootprintSnowThreshold_MetaData), NewProp_FootprintSnowThreshold_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_OnFootprintStamped = { "OnFootprintStamped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, OnFootprintStamped), Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFootprintStamped_MetaData), NewProp_OnFootprintStamped_MetaData) }; // 3671617695
void Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableRandomWeather_SetBit(void* Obj)
{
	((ADAIUltraSkyActor*)Obj)->bEnableRandomWeather = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableRandomWeather = { "bEnableRandomWeather", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyActor), &Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableRandomWeather_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRandomWeather_MetaData), NewProp_bEnableRandomWeather_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, Season), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Season_MetaData), NewProp_Season_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ClimatePreset = { "ClimatePreset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, ClimatePreset), Z_Construct_UClass_UDAIUltraSkyClimatePreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimatePreset_MetaData), NewProp_ClimatePreset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RandomWeatherBaseInterval = { "RandomWeatherBaseInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, RandomWeatherBaseInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomWeatherBaseInterval_MetaData), NewProp_RandomWeatherBaseInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowDepthThresholds_Inner = { "SnowDepthThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowDepthThresholds = { "SnowDepthThresholds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, SnowDepthThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowDepthThresholds_MetaData), NewProp_SnowDepthThresholds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ActiveBiome = { "ActiveBiome", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, ActiveBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveBiome_MetaData), NewProp_ActiveBiome_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_TargetBiome = { "TargetBiome", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, TargetBiome), Z_Construct_UClass_UDAIUltraSkyBiomeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBiome_MetaData), NewProp_TargetBiome_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ActiveConditionFX = { "ActiveConditionFX", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, ActiveConditionFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveConditionFX_MetaData), NewProp_ActiveConditionFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindSource = { "WindSource", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyActor, WindSource), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindSource_MetaData), NewProp_WindSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SunLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SkyLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Atmosphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_VolumetricClouds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_HeightFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoRunDayNight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_DayLengthSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SkyLightRecaptureInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RayleighScatteringScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MieScatteringScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CloudCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CloudDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseBiomeVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WeatherAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_BiomeCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_DefaultBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_CurrentCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Presets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Presets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_EditorSelectedPresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableWindDirectionalSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindBaseIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindGustStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindGustSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindDirectionDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_GlobalWindMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MPCParam_WindIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_MPCParam_WindDirectionDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bAutoSnowFromTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowTempThresholdC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowAccumulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowAccumulationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowMeltRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Wetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WetnessAccumulationRateRain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WetnessDryRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bUseGASAttributesForSnowLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_FootprintSnowThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_OnFootprintStamped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_bEnableRandomWeather,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_Season,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ClimatePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RandomWeatherBaseInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowDepthThresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_SnowDepthThresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ActiveBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_TargetBiome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_ActiveConditionFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyActor_Statics::NewProp_WindSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDAIUltraSkyService_NoRegister, (int32)VTABLE_OFFSET(ADAIUltraSkyActor, IDAIUltraSkyService), false },  // 3264961282
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyActor_Statics::ClassParams = {
	&ADAIUltraSkyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAIUltraSkyActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyActor()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyActor.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyActor.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyActor>()
{
	return ADAIUltraSkyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyActor);
ADAIUltraSkyActor::~ADAIUltraSkyActor() {}
// End Class ADAIUltraSkyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyActor, ADAIUltraSkyActor::StaticClass, TEXT("ADAIUltraSkyActor"), &Z_Registration_Info_UClass_ADAIUltraSkyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyActor), 28036945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_274144490(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
