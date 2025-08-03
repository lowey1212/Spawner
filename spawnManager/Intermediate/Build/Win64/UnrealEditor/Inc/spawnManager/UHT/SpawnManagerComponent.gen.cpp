// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "spawnManager/SpawnManagerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SPAWNMANAGER_API UClass* Z_Construct_UClass_USpawnManagerComponent();
SPAWNMANAGER_API UClass* Z_Construct_UClass_USpawnManagerComponent_NoRegister();
SPAWNMANAGER_API UEnum* Z_Construct_UEnum_spawnManager_ECompanionLifetime();
SPAWNMANAGER_API UEnum* Z_Construct_UEnum_spawnManager_ECompanionPlacement();
SPAWNMANAGER_API UEnum* Z_Construct_UEnum_spawnManager_ECooldownScope();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FActiveSpawn();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FDespawnPolicy();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FManagedSpawnEntry();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FPersistentSpawnData();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnSettings();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnContext();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnCooldown();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnPool();
SPAWNMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshCompanion();
UPackage* Z_Construct_UPackage__Script_spawnManager();
// End Cross Module References

// Begin Enum ECooldownScope
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECooldownScope;
static UEnum* ECooldownScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECooldownScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECooldownScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_spawnManager_ECooldownScope, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("ECooldownScope"));
	}
	return Z_Registration_Info_UEnum_ECooldownScope.OuterSingleton;
}
template<> SPAWNMANAGER_API UEnum* StaticEnum<ECooldownScope>()
{
	return ECooldownScope_StaticEnum();
}
struct Z_Construct_UEnum_spawnManager_ECooldownScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scope for spawn cooldowns */" },
#endif
		{ "Global.Name", "ECooldownScope::Global" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
		{ "PerClass.Name", "ECooldownScope::PerClass" },
		{ "PerTag.Name", "ECooldownScope::PerTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scope for spawn cooldowns" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECooldownScope::PerClass", (int64)ECooldownScope::PerClass },
		{ "ECooldownScope::PerTag", (int64)ECooldownScope::PerTag },
		{ "ECooldownScope::Global", (int64)ECooldownScope::Global },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	"ECooldownScope",
	"ECooldownScope",
	Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_spawnManager_ECooldownScope()
{
	if (!Z_Registration_Info_UEnum_ECooldownScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECooldownScope.InnerSingleton, Z_Construct_UEnum_spawnManager_ECooldownScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECooldownScope.InnerSingleton;
}
// End Enum ECooldownScope

// Begin ScriptStruct FSpawnCooldown
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnCooldown;
class UScriptStruct* FSpawnCooldown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnCooldown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnCooldown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnCooldown, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("SpawnCooldown"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnCooldown.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FSpawnCooldown>()
{
	return FSpawnCooldown::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configurable cooldown with optional curve and scope */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configurable cooldown with optional curve and scope" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCooldown_MetaData[] = {
		{ "Category", "Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base cooldown in seconds */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base cooldown in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownCurve_MetaData[] = {
		{ "Category", "Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional curve to drive cooldown based on spawn count */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional curve to drive cooldown based on spawn count" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines if cooldown is unique per class, tag, or global */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if cooldown is unique per class, tag, or global" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CooldownCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnCooldown>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_BaseCooldown = { "BaseCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnCooldown, BaseCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCooldown_MetaData), NewProp_BaseCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_CooldownCurve = { "CooldownCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnCooldown, CooldownCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownCurve_MetaData), NewProp_CooldownCurve_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnCooldown, Scope), Z_Construct_UEnum_spawnManager_ECooldownScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 3809575580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_BaseCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_CooldownCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewProp_Scope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnCooldown_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"SpawnCooldown",
	Z_Construct_UScriptStruct_FSpawnCooldown_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCooldown_Statics::PropPointers),
	sizeof(FSpawnCooldown),
	alignof(FSpawnCooldown),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCooldown_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnCooldown_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnCooldown()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnCooldown.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnCooldown.InnerSingleton, Z_Construct_UScriptStruct_FSpawnCooldown_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnCooldown.InnerSingleton;
}
// End ScriptStruct FSpawnCooldown

// Begin ScriptStruct FDespawnPolicy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DespawnPolicy;
class UScriptStruct* FDespawnPolicy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DespawnPolicy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DespawnPolicy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDespawnPolicy, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("DespawnPolicy"));
	}
	return Z_Registration_Info_UScriptStruct_DespawnPolicy.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FDespawnPolicy>()
{
	return FDespawnPolicy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDespawnPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rules describing how and when a spawned actor should be removed */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rules describing how and when a spawned actor should be removed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Despawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Despawn if farther than this distance from its spawn transform. Negative disables check */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn if farther than this distance from its spawn transform. Negative disables check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToLive_MetaData[] = {
		{ "Category", "Despawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Despawn after this many seconds. Negative disables check */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn after this many seconds. Negative disables check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDespawnOutOfView_MetaData[] = {
		{ "Category", "Despawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Despawn when actor is no longer rendered */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn when actor is no longer rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeashRadius_MetaData[] = {
		{ "Category", "Despawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set, actor is teleported back when exceeding radius instead of despawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, actor is teleported back when exceeding radius instead of despawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDespawnOnQuestEnd_MetaData[] = {
		{ "Category", "Despawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true the actor will despawn when an owning quest finishes */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the actor will despawn when an owning quest finishes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToLive;
	static void NewProp_bDespawnOutOfView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDespawnOutOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeashRadius;
	static void NewProp_bDespawnOnQuestEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDespawnOnQuestEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDespawnPolicy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDespawnPolicy, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_TimeToLive = { "TimeToLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDespawnPolicy, TimeToLive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToLive_MetaData), NewProp_TimeToLive_MetaData) };
void Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOutOfView_SetBit(void* Obj)
{
	((FDespawnPolicy*)Obj)->bDespawnOutOfView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOutOfView = { "bDespawnOutOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDespawnPolicy), &Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOutOfView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDespawnOutOfView_MetaData), NewProp_bDespawnOutOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_LeashRadius = { "LeashRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDespawnPolicy, LeashRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeashRadius_MetaData), NewProp_LeashRadius_MetaData) };
void Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOnQuestEnd_SetBit(void* Obj)
{
	((FDespawnPolicy*)Obj)->bDespawnOnQuestEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOnQuestEnd = { "bDespawnOnQuestEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDespawnPolicy), &Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOnQuestEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDespawnOnQuestEnd_MetaData), NewProp_bDespawnOnQuestEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDespawnPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_TimeToLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOutOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_LeashRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewProp_bDespawnOnQuestEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDespawnPolicy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDespawnPolicy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"DespawnPolicy",
	Z_Construct_UScriptStruct_FDespawnPolicy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDespawnPolicy_Statics::PropPointers),
	sizeof(FDespawnPolicy),
	alignof(FDespawnPolicy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDespawnPolicy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDespawnPolicy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDespawnPolicy()
{
	if (!Z_Registration_Info_UScriptStruct_DespawnPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DespawnPolicy.InnerSingleton, Z_Construct_UScriptStruct_FDespawnPolicy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DespawnPolicy.InnerSingleton;
}
// End ScriptStruct FDespawnPolicy

// Begin ScriptStruct FRespawnSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RespawnSettings;
class UScriptStruct* FRespawnSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RespawnSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RespawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnSettings, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("RespawnSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RespawnSettings.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FRespawnSettings>()
{
	return FRespawnSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRespawnSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options controlling how dead actors return */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options controlling how dead actors return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnOnDeath_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allow this actor to respawn after death */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow this actor to respawn after death" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay before respawn occurs */" },
#endif
		{ "EditCondition", "bRespawnOnDeath" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay before respawn occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveCount_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of actors to respawn in a wave */" },
#endif
		{ "EditCondition", "bRespawnOnDeath" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of actors to respawn in a wave" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyMultiplier_MetaData[] = {
		{ "Category", "Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multiplier applied each respawn to increase difficulty */" },
#endif
		{ "EditCondition", "bRespawnOnDeath" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier applied each respawn to increase difficulty" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRespawnOnDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawnOnDeath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaveCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DifficultyMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_bRespawnOnDeath_SetBit(void* Obj)
{
	((FRespawnSettings*)Obj)->bRespawnOnDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_bRespawnOnDeath = { "bRespawnOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRespawnSettings), &Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_bRespawnOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawnOnDeath_MetaData), NewProp_bRespawnOnDeath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRespawnSettings, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_WaveCount = { "WaveCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRespawnSettings, WaveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveCount_MetaData), NewProp_WaveCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_DifficultyMultiplier = { "DifficultyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRespawnSettings, DifficultyMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyMultiplier_MetaData), NewProp_DifficultyMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_bRespawnOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_WaveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewProp_DifficultyMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"RespawnSettings",
	Z_Construct_UScriptStruct_FRespawnSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnSettings_Statics::PropPointers),
	sizeof(FRespawnSettings),
	alignof(FRespawnSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRespawnSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRespawnSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RespawnSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RespawnSettings.InnerSingleton, Z_Construct_UScriptStruct_FRespawnSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RespawnSettings.InnerSingleton;
}
// End ScriptStruct FRespawnSettings

// Begin Enum ECompanionLifetime
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompanionLifetime;
static UEnum* ECompanionLifetime_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompanionLifetime.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompanionLifetime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_spawnManager_ECompanionLifetime, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("ECompanionLifetime"));
	}
	return Z_Registration_Info_UEnum_ECompanionLifetime.OuterSingleton;
}
template<> SPAWNMANAGER_API UEnum* StaticEnum<ECompanionLifetime>()
{
	return ECompanionLifetime_StaticEnum();
}
struct Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines how long a companion mesh should persist */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
		{ "Permanent.Name", "ECompanionLifetime::Permanent" },
		{ "TiedToActor.Name", "ECompanionLifetime::TiedToActor" },
		{ "TimedFade.Name", "ECompanionLifetime::TimedFade" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how long a companion mesh should persist" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompanionLifetime::Permanent", (int64)ECompanionLifetime::Permanent },
		{ "ECompanionLifetime::TiedToActor", (int64)ECompanionLifetime::TiedToActor },
		{ "ECompanionLifetime::TimedFade", (int64)ECompanionLifetime::TimedFade },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	"ECompanionLifetime",
	"ECompanionLifetime",
	Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::Enum_MetaDataParams), Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_spawnManager_ECompanionLifetime()
{
	if (!Z_Registration_Info_UEnum_ECompanionLifetime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompanionLifetime.InnerSingleton, Z_Construct_UEnum_spawnManager_ECompanionLifetime_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompanionLifetime.InnerSingleton;
}
// End Enum ECompanionLifetime

// Begin Enum ECompanionPlacement
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompanionPlacement;
static UEnum* ECompanionPlacement_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompanionPlacement.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompanionPlacement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_spawnManager_ECompanionPlacement, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("ECompanionPlacement"));
	}
	return Z_Registration_Info_UEnum_ECompanionPlacement.OuterSingleton;
}
template<> SPAWNMANAGER_API UEnum* StaticEnum<ECompanionPlacement>()
{
	return ECompanionPlacement_StaticEnum();
}
struct Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AtActor.Name", "ECompanionPlacement::AtActor" },
		{ "AtMarker.Name", "ECompanionPlacement::AtMarker" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines where a companion mesh should be placed */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
		{ "OffsetForward.Name", "ECompanionPlacement::OffsetForward" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines where a companion mesh should be placed" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompanionPlacement::AtMarker", (int64)ECompanionPlacement::AtMarker },
		{ "ECompanionPlacement::AtActor", (int64)ECompanionPlacement::AtActor },
		{ "ECompanionPlacement::OffsetForward", (int64)ECompanionPlacement::OffsetForward },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	"ECompanionPlacement",
	"ECompanionPlacement",
	Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_spawnManager_ECompanionPlacement()
{
	if (!Z_Registration_Info_UEnum_ECompanionPlacement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompanionPlacement.InnerSingleton, Z_Construct_UEnum_spawnManager_ECompanionPlacement_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompanionPlacement.InnerSingleton;
}
// End Enum ECompanionPlacement

// Begin ScriptStruct FStaticMeshCompanion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshCompanion;
class UScriptStruct* FStaticMeshCompanion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshCompanion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshCompanion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshCompanion, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("StaticMeshCompanion"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshCompanion.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FStaticMeshCompanion>()
{
	return FStaticMeshCompanion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configuration for a static mesh spawned alongside the main actor */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration for a static mesh spawned alongside the main actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh to spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional material overrides; a random one is chosen */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional material overrides; a random one is chosen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lifetime policy for the mesh */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lifetime policy for the mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifetimeSeconds_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Seconds before despawn when using TimedFade */" },
#endif
		{ "EditCondition", "Lifetime==ECompanionLifetime::TimedFade" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds before despawn when using TimedFade" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Placement relative to spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Placement relative to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffset_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forward offset when Placement is OffsetForward */" },
#endif
		{ "EditCondition", "Placement==ECompanionPlacement::OffsetForward" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward offset when Placement is OffsetForward" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationMin_MetaData[] = {
		{ "Category", "Companion|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum random rotation */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum random rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationMax_MetaData[] = {
		{ "Category", "Companion|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum random rotation */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum random rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleMin_MetaData[] = {
		{ "Category", "Companion|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum random scale */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum random scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleMax_MetaData[] = {
		{ "Category", "Companion|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum random scale */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum random scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[] = {
		{ "Category", "Companion|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true uses uniform scaling based on X of scale range */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true uses uniform scaling based on X of scale range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnEffect_MetaData[] = {
		{ "Category", "Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Niagara effect when despawning */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Niagara effect when despawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Lifetime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifetimeSeconds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Placement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Placement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleMax;
	static void NewProp_bUniformScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DespawnEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshCompanion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrides_MetaData), NewProp_MaterialOverrides_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Lifetime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, Lifetime), Z_Construct_UEnum_spawnManager_ECompanionLifetime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) }; // 3574780500
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_LifetimeSeconds = { "LifetimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, LifetimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifetimeSeconds_MetaData), NewProp_LifetimeSeconds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Placement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, Placement), Z_Construct_UEnum_spawnManager_ECompanionPlacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Placement_MetaData), NewProp_Placement_MetaData) }; // 1624893376
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_ForwardOffset = { "ForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, ForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardOffset_MetaData), NewProp_ForwardOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomRotationMin = { "RandomRotationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, RandomRotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationMin_MetaData), NewProp_RandomRotationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomRotationMax = { "RandomRotationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, RandomRotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationMax_MetaData), NewProp_RandomRotationMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomScaleMin = { "RandomScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, RandomScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleMin_MetaData), NewProp_RandomScaleMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomScaleMax = { "RandomScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, RandomScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleMax_MetaData), NewProp_RandomScaleMax_MetaData) };
void Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_bUniformScale_SetBit(void* Obj)
{
	((FStaticMeshCompanion*)Obj)->bUniformScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticMeshCompanion), &Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniformScale_MetaData), NewProp_bUniformScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_DespawnEffect = { "DespawnEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshCompanion, DespawnEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnEffect_MetaData), NewProp_DespawnEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_MaterialOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_MaterialOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Lifetime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_LifetimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Placement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_Placement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_ForwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomRotationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomRotationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_RandomScaleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_bUniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewProp_DespawnEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"StaticMeshCompanion",
	Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::PropPointers),
	sizeof(FStaticMeshCompanion),
	alignof(FStaticMeshCompanion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshCompanion()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshCompanion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshCompanion.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshCompanion.InnerSingleton;
}
// End ScriptStruct FStaticMeshCompanion

// Begin ScriptStruct FPersistentSpawnData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PersistentSpawnData;
class UScriptStruct* FPersistentSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PersistentSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PersistentSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersistentSpawnData, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("PersistentSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_PersistentSpawnData.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FPersistentSpawnData>()
{
	return FPersistentSpawnData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPersistentSpawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple persistent representation of a spawned actor */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple persistent representation of a spawned actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Persistence" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Persistence" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersistentSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPersistentSpawnData, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPersistentSpawnData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"PersistentSpawnData",
	Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::PropPointers),
	sizeof(FPersistentSpawnData),
	alignof(FPersistentSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPersistentSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_PersistentSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PersistentSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PersistentSpawnData.InnerSingleton;
}
// End ScriptStruct FPersistentSpawnData

// Begin ScriptStruct FSpawnPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnPool;
class UScriptStruct* FSpawnPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnPool, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("SpawnPool"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnPool.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FSpawnPool>()
{
	return FSpawnPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal pool used for recycling spawned actors */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal pool used for recycling spawned actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inactive_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inactive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inactive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnPool_Statics::NewProp_Inactive_Inner = { "Inactive", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnPool_Statics::NewProp_Inactive = { "Inactive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPool, Inactive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inactive_MetaData), NewProp_Inactive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPool_Statics::NewProp_Inactive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPool_Statics::NewProp_Inactive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"SpawnPool",
	Z_Construct_UScriptStruct_FSpawnPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPool_Statics::PropPointers),
	sizeof(FSpawnPool),
	alignof(FSpawnPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnPool()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnPool.InnerSingleton, Z_Construct_UScriptStruct_FSpawnPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnPool.InnerSingleton;
}
// End ScriptStruct FSpawnPool

// Begin ScriptStruct FActiveSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveSpawn;
class UScriptStruct* FActiveSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveSpawn, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("ActiveSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveSpawn.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FActiveSpawn>()
{
	return FActiveSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime info for active spawned actors */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime info for active spawned actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnPolicy_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Respawn_MetaData[] = {
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Companions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Companion actors spawned alongside the main actor */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Companion actors spawned alongside the main actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DespawnPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Respawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Companions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Companions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_DespawnPolicy = { "DespawnPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, DespawnPolicy), Z_Construct_UScriptStruct_FDespawnPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnPolicy_MetaData), NewProp_DespawnPolicy_MetaData) }; // 237028038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Respawn = { "Respawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, Respawn), Z_Construct_UScriptStruct_FRespawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Respawn_MetaData), NewProp_Respawn_MetaData) }; // 2250430994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Companions_Inner = { "Companions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Companions = { "Companions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveSpawn, Companions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Companions_MetaData), NewProp_Companions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_SpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_DespawnPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Respawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Companions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewProp_Companions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"ActiveSpawn",
	Z_Construct_UScriptStruct_FActiveSpawn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSpawn_Statics::PropPointers),
	sizeof(FActiveSpawn),
	alignof(FActiveSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveSpawn.InnerSingleton, Z_Construct_UScriptStruct_FActiveSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveSpawn.InnerSingleton;
}
// End ScriptStruct FActiveSpawn

// Begin ScriptStruct FManagedSpawnEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManagedSpawnEntry;
class UScriptStruct* FManagedSpawnEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedSpawnEntry, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("ManagedSpawnEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FManagedSpawnEntry>()
{
	return FManagedSpawnEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry describing what and how to spawn.\n *  Renamed to avoid clashing with similarly named structs in other modules.\n */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry describing what and how to spawn.\nRenamed to avoid clashing with similarly named structs in other modules." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class to spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPerCycle_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum number to spawn during a cycle */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum number to spawn during a cycle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerCycle_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number to spawn during a cycle */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number to spawn during a cycle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCap_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional global cap for this entry across all spawners */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional global cap for this entry across all spawners" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags/Faction identifiers */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags/Faction identifiers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base weight for selection */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base weight for selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagWeightModifiers_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multipliers applied when context contains matching tags */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multipliers applied when context contains matching tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDayWeight_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weight adjustment curves */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weight adjustment curves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelWeight_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyWeight_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationMin_MetaData[] = {
		{ "Category", "Spawn|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum random rotation applied on spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum random rotation applied on spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRotationMax_MetaData[] = {
		{ "Category", "Spawn|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum random rotation applied on spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum random rotation applied on spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleMin_MetaData[] = {
		{ "Category", "Spawn|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum random scale applied on spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum random scale applied on spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomScaleMax_MetaData[] = {
		{ "Category", "Spawn|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum random scale applied on spawn */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum random scale applied on spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[] = {
		{ "Category", "Spawn|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true uses uniform scaling based on X of scale range */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true uses uniform scaling based on X of scale range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cooldown settings */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cooldown settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnPolicy_MetaData[] = {
		{ "Category", "Spawn|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Despawn behavior for actors spawned from this entry */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn behavior for actors spawned from this entry" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnSettings_MetaData[] = {
		{ "Category", "Spawn|Lifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Respawn configuration */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Respawn configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshCompanions_MetaData[] = {
		{ "Category", "Spawn|Companion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Companion static meshes to spawn with the actor */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Companion static meshes to spawn with the actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrewarmCount_MetaData[] = {
		{ "Category", "Spawn|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of actors to prewarm in the pool on BeginPlay */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of actors to prewarm in the pool on BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPersistent_MetaData[] = {
		{ "Category", "Spawn|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should actors be saved and restored across sessions */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should actors be saved and restored across sessions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPerCycle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPerCycle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalCap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TagWeightModifiers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagWeightModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TagWeightModifiers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeOfDayWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerLevelWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DifficultyWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRotationMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomScaleMax;
	static void NewProp_bUniformScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DespawnPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshCompanions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshCompanions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrewarmCount;
	static void NewProp_bPersistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedSpawnEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_MinPerCycle = { "MinPerCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, MinPerCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPerCycle_MetaData), NewProp_MinPerCycle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_MaxPerCycle = { "MaxPerCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, MaxPerCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPerCycle_MetaData), NewProp_MaxPerCycle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_GlobalCap = { "GlobalCap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, GlobalCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalCap_MetaData), NewProp_GlobalCap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers_ValueProp = { "TagWeightModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers_Key_KeyProp = { "TagWeightModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers = { "TagWeightModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, TagWeightModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagWeightModifiers_MetaData), NewProp_TagWeightModifiers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TimeOfDayWeight = { "TimeOfDayWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, TimeOfDayWeight), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDayWeight_MetaData), NewProp_TimeOfDayWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_PlayerLevelWeight = { "PlayerLevelWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, PlayerLevelWeight), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevelWeight_MetaData), NewProp_PlayerLevelWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_DifficultyWeight = { "DifficultyWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, DifficultyWeight), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyWeight_MetaData), NewProp_DifficultyWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomRotationMin = { "RandomRotationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, RandomRotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationMin_MetaData), NewProp_RandomRotationMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomRotationMax = { "RandomRotationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, RandomRotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRotationMax_MetaData), NewProp_RandomRotationMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomScaleMin = { "RandomScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, RandomScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleMin_MetaData), NewProp_RandomScaleMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomScaleMax = { "RandomScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, RandomScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomScaleMax_MetaData), NewProp_RandomScaleMax_MetaData) };
void Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bUniformScale_SetBit(void* Obj)
{
	((FManagedSpawnEntry*)Obj)->bUniformScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FManagedSpawnEntry), &Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniformScale_MetaData), NewProp_bUniformScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, Cooldown), Z_Construct_UScriptStruct_FSpawnCooldown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) }; // 2420237121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_DespawnPolicy = { "DespawnPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, DespawnPolicy), Z_Construct_UScriptStruct_FDespawnPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnPolicy_MetaData), NewProp_DespawnPolicy_MetaData) }; // 237028038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RespawnSettings = { "RespawnSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, RespawnSettings), Z_Construct_UScriptStruct_FRespawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnSettings_MetaData), NewProp_RespawnSettings_MetaData) }; // 2250430994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_StaticMeshCompanions_Inner = { "StaticMeshCompanions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshCompanion, METADATA_PARAMS(0, nullptr) }; // 2767108872
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_StaticMeshCompanions = { "StaticMeshCompanions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, StaticMeshCompanions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshCompanions_MetaData), NewProp_StaticMeshCompanions_MetaData) }; // 2767108872
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_PrewarmCount = { "PrewarmCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManagedSpawnEntry, PrewarmCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrewarmCount_MetaData), NewProp_PrewarmCount_MetaData) };
void Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bPersistent_SetBit(void* Obj)
{
	((FManagedSpawnEntry*)Obj)->bPersistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FManagedSpawnEntry), &Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPersistent_MetaData), NewProp_bPersistent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_MinPerCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_MaxPerCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_GlobalCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TagWeightModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_TimeOfDayWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_PlayerLevelWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_DifficultyWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomRotationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomRotationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomScaleMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RandomScaleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bUniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_DespawnPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_RespawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_StaticMeshCompanions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_StaticMeshCompanions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_PrewarmCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewProp_bPersistent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"ManagedSpawnEntry",
	Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::PropPointers),
	sizeof(FManagedSpawnEntry),
	alignof(FManagedSpawnEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManagedSpawnEntry()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.InnerSingleton, Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManagedSpawnEntry.InnerSingleton;
}
// End ScriptStruct FManagedSpawnEntry

// Begin ScriptStruct FSpawnContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnContext;
class UScriptStruct* FSpawnContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnContext, (UObject*)Z_Construct_UPackage__Script_spawnManager(), TEXT("SpawnContext"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnContext.OuterSingleton;
}
template<> SPAWNMANAGER_API UScriptStruct* StaticStruct<FSpawnContext>()
{
	return FSpawnContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** External factors affecting spawn weights */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External factors affecting spawn weights" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biome_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Biome;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Difficulty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnContext, TimeOfDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDay_MetaData), NewProp_TimeOfDay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnContext, PlayerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLevel_MetaData), NewProp_PlayerLevel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_Biome = { "Biome", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnContext, Biome), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biome_MetaData), NewProp_Biome_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnContext, Difficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Difficulty_MetaData), NewProp_Difficulty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnContext, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_PlayerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_Biome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_Difficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnContext_Statics::NewProp_GameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
	nullptr,
	&NewStructOps,
	"SpawnContext",
	Z_Construct_UScriptStruct_FSpawnContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnContext_Statics::PropPointers),
	sizeof(FSpawnContext),
	alignof(FSpawnContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnContext()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnContext.InnerSingleton, Z_Construct_UScriptStruct_FSpawnContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnContext.InnerSingleton;
}
// End ScriptStruct FSpawnContext

// Begin Class USpawnManagerComponent Function LoadActiveSpawns
struct Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics
{
	struct SpawnManagerComponent_eventLoadActiveSpawns_Parms
	{
		TArray<FPersistentSpawnData> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Restore active spawns from saved data */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restore active spawns from saved data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPersistentSpawnData, METADATA_PARAMS(0, nullptr) }; // 3046900202
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManagerComponent_eventLoadActiveSpawns_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3046900202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManagerComponent, nullptr, "LoadActiveSpawns", nullptr, nullptr, Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::SpawnManagerComponent_eventLoadActiveSpawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::SpawnManagerComponent_eventLoadActiveSpawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnManagerComponent::execLoadActiveSpawns)
{
	P_GET_TARRAY_REF(FPersistentSpawnData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadActiveSpawns(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USpawnManagerComponent Function LoadActiveSpawns

// Begin Class USpawnManagerComponent Function SaveActiveSpawns
struct Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics
{
	struct SpawnManagerComponent_eventSaveActiveSpawns_Parms
	{
		TArray<FPersistentSpawnData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn|Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save currently active spawns for persistence */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save currently active spawns for persistence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPersistentSpawnData, METADATA_PARAMS(0, nullptr) }; // 3046900202
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManagerComponent_eventSaveActiveSpawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3046900202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManagerComponent, nullptr, "SaveActiveSpawns", nullptr, nullptr, Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::SpawnManagerComponent_eventSaveActiveSpawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::SpawnManagerComponent_eventSaveActiveSpawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnManagerComponent::execSaveActiveSpawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPersistentSpawnData>*)Z_Param__Result=P_THIS->SaveActiveSpawns();
	P_NATIVE_END;
}
// End Class USpawnManagerComponent Function SaveActiveSpawns

// Begin Class USpawnManagerComponent Function SpawnCycle
struct Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics
{
	struct SpawnManagerComponent_eventSpawnCycle_Parms
	{
		FSpawnContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Perform a spawn cycle based on context */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a spawn cycle based on context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManagerComponent_eventSpawnCycle_Parms, Context), Z_Construct_UScriptStruct_FSpawnContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 652962255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManagerComponent, nullptr, "SpawnCycle", nullptr, nullptr, Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::SpawnManagerComponent_eventSpawnCycle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::SpawnManagerComponent_eventSpawnCycle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnManagerComponent::execSpawnCycle)
{
	P_GET_STRUCT_REF(FSpawnContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnCycle(Z_Param_Out_Context);
	P_NATIVE_END;
}
// End Class USpawnManagerComponent Function SpawnCycle

// Begin Class USpawnManagerComponent
void USpawnManagerComponent::StaticRegisterNativesUSpawnManagerComponent()
{
	UClass* Class = USpawnManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadActiveSpawns", &USpawnManagerComponent::execLoadActiveSpawns },
		{ "SaveActiveSpawns", &USpawnManagerComponent::execSaveActiveSpawns },
		{ "SpawnCycle", &USpawnManagerComponent::execSpawnCycle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManagerComponent);
UClass* Z_Construct_UClass_USpawnManagerComponent_NoRegister()
{
	return USpawnManagerComponent::StaticClass();
}
struct Z_Construct_UClass_USpawnManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component handling advanced spawn selection */" },
#endif
		{ "IncludePath", "SpawnManagerComponent.h" },
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component handling advanced spawn selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entries available for spawning */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entries available for spawning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimeBudgetMs_MetaData[] = {
		{ "Category", "Spawn|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum milliseconds per frame spent spawning */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum milliseconds per frame spent spawning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCountBudget_MetaData[] = {
		{ "Category", "Spawn|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of actors spawned per frame */" },
#endif
		{ "ModuleRelativePath", "SpawnManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of actors spawned per frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimeBudgetMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCountBudget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnManagerComponent_LoadActiveSpawns, "LoadActiveSpawns" }, // 2120981909
		{ &Z_Construct_UFunction_USpawnManagerComponent_SaveActiveSpawns, "SaveActiveSpawns" }, // 3920575817
		{ &Z_Construct_UFunction_USpawnManagerComponent_SpawnCycle, "SpawnCycle" }, // 1929493202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FManagedSpawnEntry, METADATA_PARAMS(0, nullptr) }; // 2897775704
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2897775704
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_SpawnTimeBudgetMs = { "SpawnTimeBudgetMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, SpawnTimeBudgetMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTimeBudgetMs_MetaData), NewProp_SpawnTimeBudgetMs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_SpawnCountBudget = { "SpawnCountBudget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManagerComponent, SpawnCountBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCountBudget_MetaData), NewProp_SpawnCountBudget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_SpawnTimeBudgetMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManagerComponent_Statics::NewProp_SpawnCountBudget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_spawnManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnManagerComponent_Statics::ClassParams = {
	&USpawnManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnManagerComponent()
{
	if (!Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton, Z_Construct_UClass_USpawnManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnManagerComponent.OuterSingleton;
}
template<> SPAWNMANAGER_API UClass* StaticClass<USpawnManagerComponent>()
{
	return USpawnManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnManagerComponent);
USpawnManagerComponent::~USpawnManagerComponent() {}
// End Class USpawnManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECooldownScope_StaticEnum, TEXT("ECooldownScope"), &Z_Registration_Info_UEnum_ECooldownScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3809575580U) },
		{ ECompanionLifetime_StaticEnum, TEXT("ECompanionLifetime"), &Z_Registration_Info_UEnum_ECompanionLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3574780500U) },
		{ ECompanionPlacement_StaticEnum, TEXT("ECompanionPlacement"), &Z_Registration_Info_UEnum_ECompanionPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1624893376U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnCooldown::StaticStruct, Z_Construct_UScriptStruct_FSpawnCooldown_Statics::NewStructOps, TEXT("SpawnCooldown"), &Z_Registration_Info_UScriptStruct_SpawnCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnCooldown), 2420237121U) },
		{ FDespawnPolicy::StaticStruct, Z_Construct_UScriptStruct_FDespawnPolicy_Statics::NewStructOps, TEXT("DespawnPolicy"), &Z_Registration_Info_UScriptStruct_DespawnPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDespawnPolicy), 237028038U) },
		{ FRespawnSettings::StaticStruct, Z_Construct_UScriptStruct_FRespawnSettings_Statics::NewStructOps, TEXT("RespawnSettings"), &Z_Registration_Info_UScriptStruct_RespawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRespawnSettings), 2250430994U) },
		{ FStaticMeshCompanion::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshCompanion_Statics::NewStructOps, TEXT("StaticMeshCompanion"), &Z_Registration_Info_UScriptStruct_StaticMeshCompanion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshCompanion), 2767108872U) },
		{ FPersistentSpawnData::StaticStruct, Z_Construct_UScriptStruct_FPersistentSpawnData_Statics::NewStructOps, TEXT("PersistentSpawnData"), &Z_Registration_Info_UScriptStruct_PersistentSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPersistentSpawnData), 3046900202U) },
		{ FSpawnPool::StaticStruct, Z_Construct_UScriptStruct_FSpawnPool_Statics::NewStructOps, TEXT("SpawnPool"), &Z_Registration_Info_UScriptStruct_SpawnPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnPool), 172014264U) },
		{ FActiveSpawn::StaticStruct, Z_Construct_UScriptStruct_FActiveSpawn_Statics::NewStructOps, TEXT("ActiveSpawn"), &Z_Registration_Info_UScriptStruct_ActiveSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveSpawn), 1664982445U) },
		{ FManagedSpawnEntry::StaticStruct, Z_Construct_UScriptStruct_FManagedSpawnEntry_Statics::NewStructOps, TEXT("ManagedSpawnEntry"), &Z_Registration_Info_UScriptStruct_ManagedSpawnEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManagedSpawnEntry), 2897775704U) },
		{ FSpawnContext::StaticStruct, Z_Construct_UScriptStruct_FSpawnContext_Statics::NewStructOps, TEXT("SpawnContext"), &Z_Registration_Info_UScriptStruct_SpawnContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnContext), 652962255U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnManagerComponent, USpawnManagerComponent::StaticClass, TEXT("USpawnManagerComponent"), &Z_Registration_Info_UClass_USpawnManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManagerComponent), 2323748330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_3055048561(TEXT("/Script/spawnManager"),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_githubdesktop_Spawner_spawnManager_Source_spawnManager_SpawnManagerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
