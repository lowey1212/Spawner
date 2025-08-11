// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Spawner/Public/DAISpawnMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAISpawnMarker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnMarker();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnMarker_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Spawner();
// End Cross Module References

// Begin Class ADAISpawnMarker
void ADAISpawnMarker::StaticRegisterNativesADAISpawnMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAISpawnMarker);
UClass* Z_Construct_UClass_ADAISpawnMarker_NoRegister()
{
	return ADAISpawnMarker::StaticClass();
}
struct Z_Construct_UClass_ADAISpawnMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DAISpawnMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root scene component so we can easily manipulate the marker in Blueprints. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root scene component so we can easily manipulate the marker in Blueprints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Arrow component used to visualise the marker location and direction in the editor. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arrow component used to visualise the marker location and direction in the editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Widget component that can host a user provided marker widget. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget component that can host a user provided marker widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn point component indicating where the NPC should spawn relative to the marker.  Designers\n     *  can move this component in the editor to adjust the spawn location (e.g. centre of a\n     *  cave).  When bUseMarker is enabled on the spawn manager, the actor will be spawned at\n     *  the world location of this component while the static mesh is placed at the marker actor's\n     *  location.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn point component indicating where the NPC should spawn relative to the marker.  Designers\ncan move this component in the editor to adjust the spawn location (e.g. centre of a\ncave).  When bUseMarker is enabled on the spawn manager, the actor will be spawned at\nthe world location of this component while the static mesh is placed at the marker actor's\nlocation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerWidgetClass_MetaData[] = {
		{ "Category", "Marker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional widget class used to represent the marker visually.  This\n     *  widget will be spawned on the WidgetComponent during construction.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnMarker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget class used to represent the marker visually.  This\nwidget will be spawned on the WidgetComponent during construction." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MarkerWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAISpawnMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnMarker, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnMarker, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnMarker, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnMarker, SpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_MarkerWidgetClass = { "MarkerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnMarker, MarkerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerWidgetClass_MetaData), NewProp_MarkerWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAISpawnMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_ArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnMarker_Statics::NewProp_MarkerWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAISpawnMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAISpawnMarker_Statics::ClassParams = {
	&ADAISpawnMarker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADAISpawnMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnMarker_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAISpawnMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAISpawnMarker()
{
	if (!Z_Registration_Info_UClass_ADAISpawnMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAISpawnMarker.OuterSingleton, Z_Construct_UClass_ADAISpawnMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAISpawnMarker.OuterSingleton;
}
template<> DAI_SPAWNER_API UClass* StaticClass<ADAISpawnMarker>()
{
	return ADAISpawnMarker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAISpawnMarker);
ADAISpawnMarker::~ADAISpawnMarker() {}
// End Class ADAISpawnMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAISpawnMarker, ADAISpawnMarker::StaticClass, TEXT("ADAISpawnMarker"), &Z_Registration_Info_UClass_ADAISpawnMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAISpawnMarker), 3486644093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnMarker_h_3526405138(TEXT("/Script/DAI_Spawner"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
