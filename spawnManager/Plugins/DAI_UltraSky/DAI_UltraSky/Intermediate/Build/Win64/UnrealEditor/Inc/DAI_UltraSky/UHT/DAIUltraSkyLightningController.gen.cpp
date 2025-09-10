// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyLightningController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyLightningController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyActor_NoRegister();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyLightningController();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyLightningController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class ADAIUltraSkyLightningController Function TriggerRandomStrike
struct Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyLightningController, nullptr, "TriggerRandomStrike", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyLightningController::execTriggerRandomStrike)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerRandomStrike();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyLightningController Function TriggerRandomStrike

// Begin Class ADAIUltraSkyLightningController Function TriggerStrikeAtLocation
struct Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics
{
	struct DAIUltraSkyLightningController_eventTriggerStrikeAtLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UltraSky|Lightning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Immediate manual trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Immediate manual trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyLightningController_eventTriggerStrikeAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyLightningController, nullptr, "TriggerStrikeAtLocation", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::DAIUltraSkyLightningController_eventTriggerStrikeAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::DAIUltraSkyLightningController_eventTriggerStrikeAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyLightningController::execTriggerStrikeAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerStrikeAtLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyLightningController Function TriggerStrikeAtLocation

// Begin Class ADAIUltraSkyLightningController
void ADAIUltraSkyLightningController::StaticRegisterNativesADAIUltraSkyLightningController()
{
	UClass* Class = ADAIUltraSkyLightningController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerRandomStrike", &ADAIUltraSkyLightningController::execTriggerRandomStrike },
		{ "TriggerStrikeAtLocation", &ADAIUltraSkyLightningController::execTriggerStrikeAtLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyLightningController);
UClass* Z_Construct_UClass_ADAIUltraSkyLightningController_NoRegister()
{
	return ADAIUltraSkyLightningController::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyLightningController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyLightningController.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master enable for automatic lightning logic (manual trigger still works if false)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinIntervalSeconds_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum seconds between auto strikes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIntervalSeconds_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum seconds between auto strikes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrikeRadius_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random strike XY radius around anchor (world units)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrikeHeight_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height above ground plane to spawn bolt start (world Z units)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceNearAnchor_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Probability a strike is biased close to anchor vs anywhere in radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightningSystem_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara system for primary lightning bolt." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightningGlowSystem_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Niagara system for glow/secondary effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UltraSky_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UltraSky actor used to fetch storm anchor / condition. Auto-found if null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThunderSound_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional thunder sound played after distance-based delay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThunderDelayPerKm_MetaData[] = {
		{ "Category", "UltraSky|Lightning" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyLightningController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds of delay per kilometer of (approx) distance for thunder playback." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxIntervalSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrikeRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrikeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceNearAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightningSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightningGlowSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UltraSky;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThunderSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThunderDelayPerKm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerRandomStrike, "TriggerRandomStrike" }, // 2298564
		{ &Z_Construct_UFunction_ADAIUltraSkyLightningController_TriggerStrikeAtLocation, "TriggerStrikeAtLocation" }, // 1393056787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyLightningController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ADAIUltraSkyLightningController*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyLightningController), &Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_MinIntervalSeconds = { "MinIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, MinIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinIntervalSeconds_MetaData), NewProp_MinIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_MaxIntervalSeconds = { "MaxIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, MaxIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIntervalSeconds_MetaData), NewProp_MaxIntervalSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_StrikeRadius = { "StrikeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, StrikeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrikeRadius_MetaData), NewProp_StrikeRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_StrikeHeight = { "StrikeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, StrikeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrikeHeight_MetaData), NewProp_StrikeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ChanceNearAnchor = { "ChanceNearAnchor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, ChanceNearAnchor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceNearAnchor_MetaData), NewProp_ChanceNearAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_LightningSystem = { "LightningSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, LightningSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightningSystem_MetaData), NewProp_LightningSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_LightningGlowSystem = { "LightningGlowSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, LightningGlowSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightningGlowSystem_MetaData), NewProp_LightningGlowSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_UltraSky = { "UltraSky", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, UltraSky), Z_Construct_UClass_ADAIUltraSkyActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UltraSky_MetaData), NewProp_UltraSky_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ThunderSound = { "ThunderSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, ThunderSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThunderSound_MetaData), NewProp_ThunderSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ThunderDelayPerKm = { "ThunderDelayPerKm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyLightningController, ThunderDelayPerKm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThunderDelayPerKm_MetaData), NewProp_ThunderDelayPerKm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_MinIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_MaxIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_StrikeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_StrikeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ChanceNearAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_LightningSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_LightningGlowSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_UltraSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ThunderSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::NewProp_ThunderDelayPerKm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::ClassParams = {
	&ADAIUltraSkyLightningController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyLightningController()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyLightningController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyLightningController.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyLightningController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyLightningController.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyLightningController>()
{
	return ADAIUltraSkyLightningController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyLightningController);
ADAIUltraSkyLightningController::~ADAIUltraSkyLightningController() {}
// End Class ADAIUltraSkyLightningController

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyLightningController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyLightningController, ADAIUltraSkyLightningController::StaticClass, TEXT("ADAIUltraSkyLightningController"), &Z_Registration_Info_UClass_ADAIUltraSkyLightningController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyLightningController), 441898827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyLightningController_h_2707191146(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyLightningController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyLightningController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
