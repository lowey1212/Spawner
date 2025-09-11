// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_UltraSky/Public/DAIUltraSkyTornado.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAIUltraSkyTornado() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyTornado();
DAI_ULTRASKY_API UClass* Z_Construct_UClass_ADAIUltraSkyTornado_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_UltraSky();
// End Cross Module References

// Begin Class ADAIUltraSkyTornado Function SetTargetLocation
struct Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics
{
	struct DAIUltraSkyTornado_eventSetTargetLocation_Parms
	{
		FVector NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAIUltraSkyTornado_eventSetTargetLocation_Parms, NewTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTarget_MetaData), NewProp_NewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyTornado, nullptr, "SetTargetLocation", nullptr, nullptr, Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::DAIUltraSkyTornado_eventSetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::DAIUltraSkyTornado_eventSetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyTornado::execSetTargetLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetLocation(Z_Param_Out_NewTarget);
	P_NATIVE_END;
}
// End Class ADAIUltraSkyTornado Function SetTargetLocation

// Begin Class ADAIUltraSkyTornado Function StartTornado
struct Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyTornado, nullptr, "StartTornado", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyTornado::execStartTornado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTornado();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyTornado Function StartTornado

// Begin Class ADAIUltraSkyTornado Function StopTornado
struct Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAIUltraSkyTornado, nullptr, "StopTornado", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAIUltraSkyTornado::execStopTornado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTornado();
	P_NATIVE_END;
}
// End Class ADAIUltraSkyTornado Function StopTornado

// Begin Class ADAIUltraSkyTornado
void ADAIUltraSkyTornado::StaticRegisterNativesADAIUltraSkyTornado()
{
	UClass* Class = ADAIUltraSkyTornado::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTargetLocation", &ADAIUltraSkyTornado::execSetTargetLocation },
		{ "StartTornado", &ADAIUltraSkyTornado::execStartTornado },
		{ "StopTornado", &ADAIUltraSkyTornado::execStopTornado },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAIUltraSkyTornado);
UClass* Z_Construct_UClass_ADAIUltraSkyTornado_NoRegister()
{
	return ADAIUltraSkyTornado::StaticClass();
}
struct Z_Construct_UClass_ADAIUltraSkyTornado_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAIUltraSkyTornado.h" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TornadoSystem_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara system used to render tornado." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TornadoComponent_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawned Niagara component instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TornadoScale_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uniform visual scale multiplier applied to system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World location the tornado moves toward each tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speed in cm/s toward TargetLocation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "DAI_UltraSky|Tornado" },
		{ "ModuleRelativePath", "Public/DAIUltraSkyTornado.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true starts automatically at BeginPlay." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TornadoSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TornadoComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TornadoScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAIUltraSkyTornado_SetTargetLocation, "SetTargetLocation" }, // 2686121336
		{ &Z_Construct_UFunction_ADAIUltraSkyTornado_StartTornado, "StartTornado" }, // 1700648767
		{ &Z_Construct_UFunction_ADAIUltraSkyTornado_StopTornado, "StopTornado" }, // 3066326554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAIUltraSkyTornado>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoSystem = { "TornadoSystem", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyTornado, TornadoSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TornadoSystem_MetaData), NewProp_TornadoSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoComponent = { "TornadoComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyTornado, TornadoComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TornadoComponent_MetaData), NewProp_TornadoComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoScale = { "TornadoScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyTornado, TornadoScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TornadoScale_MetaData), NewProp_TornadoScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyTornado, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAIUltraSkyTornado, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
void Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((ADAIUltraSkyTornado*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAIUltraSkyTornado), &Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAIUltraSkyTornado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TornadoScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAIUltraSkyTornado_Statics::NewProp_bAutoStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyTornado_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAIUltraSkyTornado_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_UltraSky,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyTornado_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAIUltraSkyTornado_Statics::ClassParams = {
	&ADAIUltraSkyTornado::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAIUltraSkyTornado_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyTornado_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAIUltraSkyTornado_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAIUltraSkyTornado_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAIUltraSkyTornado()
{
	if (!Z_Registration_Info_UClass_ADAIUltraSkyTornado.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAIUltraSkyTornado.OuterSingleton, Z_Construct_UClass_ADAIUltraSkyTornado_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAIUltraSkyTornado.OuterSingleton;
}
template<> DAI_ULTRASKY_API UClass* StaticClass<ADAIUltraSkyTornado>()
{
	return ADAIUltraSkyTornado::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAIUltraSkyTornado);
ADAIUltraSkyTornado::~ADAIUltraSkyTornado() {}
// End Class ADAIUltraSkyTornado

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyTornado_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAIUltraSkyTornado, ADAIUltraSkyTornado::StaticClass, TEXT("ADAIUltraSkyTornado"), &Z_Registration_Info_UClass_ADAIUltraSkyTornado, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAIUltraSkyTornado), 1322248081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyTornado_h_2010435904(TEXT("/Script/DAI_UltraSky"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyTornado_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Plugins_DAI_UltraSky_DAI_UltraSky_Source_DAI_UltraSky_Public_DAIUltraSkyTornado_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
