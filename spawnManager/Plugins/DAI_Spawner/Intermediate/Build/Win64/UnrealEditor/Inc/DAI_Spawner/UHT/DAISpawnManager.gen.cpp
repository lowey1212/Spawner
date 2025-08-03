// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DAI_Spawner/Public/DAISpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAISpawnManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnManager();
DAI_SPAWNER_API UClass* Z_Construct_UClass_ADAISpawnManager_NoRegister();
DAI_SPAWNER_API UEnum* Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape();
DAI_SPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawn();
DAI_SPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DAI_Spawner();
// End Cross Module References

// Begin Enum ESpawnAreaShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnAreaShape;
static UEnum* ESpawnAreaShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape, (UObject*)Z_Construct_UPackage__Script_DAI_Spawner(), TEXT("ESpawnAreaShape"));
	}
	return Z_Registration_Info_UEnum_ESpawnAreaShape.OuterSingleton;
}
template<> DAI_SPAWNER_API UEnum* StaticEnum<ESpawnAreaShape>()
{
	return ESpawnAreaShape_StaticEnum();
}
struct Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Comment", "/** Spawn points are chosen within a circle of radius Radius centred on the actor. */" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "ESpawnAreaShape::Circle" },
		{ "Circle.ToolTip", "Spawn points are chosen within a circle of radius Radius centred on the actor." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum describing the shape of the spawn area.  Circle and Square are\n * straightforward geometric primitives, Curve allows sampling of a user supplied\n * radius curve to bias distribution along a radial gradient, and Noise uses\n * Perlin noise to scatter spawns more organically.  Additional shapes can be\n * added later by extending GetSpawnLocation().\n */" },
#endif
		{ "Curve.Comment", "/** Spawn points use a user provided curve (0..1 input) to bias the radial distribution. */" },
		{ "Curve.DisplayName", "Curve" },
		{ "Curve.Name", "ESpawnAreaShape::Curve" },
		{ "Curve.ToolTip", "Spawn points use a user provided curve (0..1 input) to bias the radial distribution." },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
		{ "Noise.Comment", "/** Spawn points are chosen using Perlin noise to produce more natural scatter. */" },
		{ "Noise.DisplayName", "Noise" },
		{ "Noise.Name", "ESpawnAreaShape::Noise" },
		{ "Noise.ToolTip", "Spawn points are chosen using Perlin noise to produce more natural scatter." },
		{ "Square.Comment", "/** Spawn points are chosen within a square of side length 2*Radius centred on the actor. */" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "ESpawnAreaShape::Square" },
		{ "Square.ToolTip", "Spawn points are chosen within a square of side length 2*Radius centred on the actor." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum describing the shape of the spawn area.  Circle and Square are\nstraightforward geometric primitives, Curve allows sampling of a user supplied\nradius curve to bias distribution along a radial gradient, and Noise uses\nPerlin noise to scatter spawns more organically.  Additional shapes can be\nadded later by extending GetSpawnLocation()." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnAreaShape::Square", (int64)ESpawnAreaShape::Square },
		{ "ESpawnAreaShape::Circle", (int64)ESpawnAreaShape::Circle },
		{ "ESpawnAreaShape::Curve", (int64)ESpawnAreaShape::Curve },
		{ "ESpawnAreaShape::Noise", (int64)ESpawnAreaShape::Noise },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DAI_Spawner,
	nullptr,
	"ESpawnAreaShape",
	"ESpawnAreaShape",
	Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape()
{
	if (!Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton, Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnAreaShape.InnerSingleton;
}
// End Enum ESpawnAreaShape

// Begin ScriptStruct FSpawnEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnEntry;
class UScriptStruct* FSpawnEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnEntry, (UObject*)Z_Construct_UPackage__Script_DAI_Spawner(), TEXT("SpawnEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnEntry.OuterSingleton;
}
template<> DAI_SPAWNER_API UScriptStruct* StaticStruct<FSpawnEntry>()
{
	return FSpawnEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structure that defines a single entry in the spawn table.  Each entry\n * specifies what actor to spawn, how likely it is to be selected relative to\n * other entries, whether only one instance of that actor may exist at once,\n * optional cooldown windows when unique instances are destroyed, the static\n * mesh that should accompany the actor (if any), whether that mesh should\n * persist beyond the lifetime of the actor and a list of tags that must be\n * present on the first player pawn in order for the spawn to proceed.  A\n * simple probability field (SpawnChance) allows designers to dial in random\n * non\xe2\x80\x91spawning even when an entry is selected by weight.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure that defines a single entry in the spawn table.  Each entry\nspecifies what actor to spawn, how likely it is to be selected relative to\nother entries, whether only one instance of that actor may exist at once,\noptional cooldown windows when unique instances are destroyed, the static\nmesh that should accompany the actor (if any), whether that mesh should\npersist beyond the lifetime of the actor and a list of tags that must be\npresent on the first player pawn in order for the spawn to proceed.  A\nsimple probability field (SpawnChance) allows designers to dial in random\nnon\xe2\x80\x91spawning even when an entry is selected by weight." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The actor class to spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor class to spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weight used for weighted random selection.  Must be positive to be considered. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weight used for weighted random selection.  Must be positive to be considered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUniqueInstance_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, only one instance of this ActorClass may exist at any given time. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, only one instance of this ActorClass may exist at any given time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownMin_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum cooldown in seconds before this entry may spawn again when unique. */" },
#endif
		{ "EditCondition", "bUniqueInstance" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum cooldown in seconds before this entry may spawn again when unique." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownMax_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum cooldown in seconds before this entry may spawn again when unique. */" },
#endif
		{ "EditCondition", "bUniqueInstance" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum cooldown in seconds before this entry may spawn again when unique." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomCooldown_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, choose a random cooldown between CooldownMin and CooldownMax.  If false, CooldownMin is used as a fixed delay. */" },
#endif
		{ "EditCondition", "bUniqueInstance" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, choose a random cooldown between CooldownMin and CooldownMax.  If false, CooldownMin is used as a fixed delay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional static mesh to place at the spawn location along with the actor. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional static mesh to place at the spawn location along with the actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshPermanent_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the static mesh instance will persist after the actor is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the static mesh instance will persist after the actor is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A list of tags that must be present on the first player pawn for this spawn to occur. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of tags that must be present on the first player pawn for this spawn to occur." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional probability check (0.0\xe2\x80\x93""1.0).  Even if this entry is selected by weight, it may still not spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional probability check (0.0\xe2\x80\x93""1.0).  Even if this entry is selected by weight, it may still not spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many actors to spawn each time this entry is selected. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many actors to spawn each time this entry is selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActive_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number of active actors of this entry allowed at once (0 = unlimited). */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of active actors of this entry allowed at once (0 = unlimited)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bUniqueInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniqueInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownMax;
	static void NewProp_bUseRandomCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bStaticMeshPermanent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshPermanent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance_SetBit(void* Obj)
{
	((FSpawnEntry*)Obj)->bUniqueInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance = { "bUniqueInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnEntry), &Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUniqueInstance_MetaData), NewProp_bUniqueInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_CooldownMin = { "CooldownMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, CooldownMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownMin_MetaData), NewProp_CooldownMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_CooldownMax = { "CooldownMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, CooldownMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownMax_MetaData), NewProp_CooldownMax_MetaData) };
void Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUseRandomCooldown_SetBit(void* Obj)
{
	((FSpawnEntry*)Obj)->bUseRandomCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUseRandomCooldown = { "bUseRandomCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnEntry), &Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUseRandomCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomCooldown_MetaData), NewProp_bUseRandomCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bStaticMeshPermanent_SetBit(void* Obj)
{
	((FSpawnEntry*)Obj)->bStaticMeshPermanent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bStaticMeshPermanent = { "bStaticMeshPermanent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnEntry), &Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bStaticMeshPermanent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMeshPermanent_MetaData), NewProp_bStaticMeshPermanent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredTags_Inner = { "RequiredTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, RequiredTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_MaxActive = { "MaxActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnEntry, MaxActive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActive_MetaData), NewProp_MaxActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUniqueInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_CooldownMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_CooldownMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bUseRandomCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_bStaticMeshPermanent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_SpawnChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewProp_MaxActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
	nullptr,
	&NewStructOps,
	"SpawnEntry",
	Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::PropPointers),
	sizeof(FSpawnEntry),
	alignof(FSpawnEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton, Z_Construct_UScriptStruct_FSpawnEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnEntry.InnerSingleton;
}
// End ScriptStruct FSpawnEntry

// Begin ScriptStruct FPendingSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingSpawn;
class UScriptStruct* FPendingSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingSpawn, (UObject*)Z_Construct_UPackage__Script_DAI_Spawner(), TEXT("PendingSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_PendingSpawn.OuterSingleton;
}
template<> DAI_SPAWNER_API UScriptStruct* StaticStruct<FPendingSpawn>()
{
	return FPendingSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPendingSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pending spawn request item for async batching. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pending spawn request item for async batching." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerEntryIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerEntryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingSpawn, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingSpawn, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_PerEntryIndex = { "PerEntryIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPendingSpawn, PerEntryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerEntryIndex_MetaData), NewProp_PerEntryIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewProp_PerEntryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
	nullptr,
	&NewStructOps,
	"PendingSpawn",
	Z_Construct_UScriptStruct_FPendingSpawn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawn_Statics::PropPointers),
	sizeof(FPendingSpawn),
	alignof(FPendingSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPendingSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton, Z_Construct_UScriptStruct_FPendingSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PendingSpawn.InnerSingleton;
}
// End ScriptStruct FPendingSpawn

// Begin Class ADAISpawnManager Function CanSpawnForEntry
struct DAISpawnManager_eventCanSpawnForEntry_Parms
{
	FSpawnEntry Entry;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DAISpawnManager_eventCanSpawnForEntry_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ADAISpawnManager_CanSpawnForEntry = FName(TEXT("CanSpawnForEntry"));
bool ADAISpawnManager::CanSpawnForEntry(FSpawnEntry const& Entry)
{
	UFunction* Func = FindFunctionChecked(NAME_ADAISpawnManager_CanSpawnForEntry);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DAISpawnManager_eventCanSpawnForEntry_Parms Parms;
		Parms.Entry=Entry;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CanSpawnForEntry_Implementation(Entry);
	}
}
struct Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Override this in Blueprints or C++ to implement custom spawn conditions.\n     * The default implementation will check RequiredTags on the first player\n     * pawn.  Return true to allow spawning or false to skip the spawn.  If\n     * false is returned the spawn call will end quietly.  This allows hook\n     * up to quest systems, time\xe2\x80\x91of\xe2\x80\x91""day logic and other complex conditions\n     * without modifying the C++ class.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override this in Blueprints or C++ to implement custom spawn conditions.\nThe default implementation will check RequiredTags on the first player\npawn.  Return true to allow spawning or false to skip the spawn.  If\nfalse is returned the spawn call will end quietly.  This allows hook\nup to quest systems, time\xe2\x80\x91of\xe2\x80\x91""day logic and other complex conditions\nwithout modifying the C++ class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DAISpawnManager_eventCanSpawnForEntry_Parms, Entry), Z_Construct_UScriptStruct_FSpawnEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 2361864219
void Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DAISpawnManager_eventCanSpawnForEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DAISpawnManager_eventCanSpawnForEntry_Parms), &Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "CanSpawnForEntry", nullptr, nullptr, Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::PropPointers), sizeof(DAISpawnManager_eventCanSpawnForEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(DAISpawnManager_eventCanSpawnForEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execCanSpawnForEntry)
{
	P_GET_STRUCT_REF(FSpawnEntry,Z_Param_Out_Entry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawnForEntry_Implementation(Z_Param_Out_Entry);
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function CanSpawnForEntry

// Begin Class ADAISpawnManager Function DespawnAll
struct Z_Construct_UFunction_ADAISpawnManager_DespawnAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Destroy all dynamically spawned actors and clear any non\xe2\x80\x91permanent\n     *  static meshes.  Persistent static meshes (bStaticMeshPermanent == true)\n     *  remain and can be cleaned up manually if desired. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy all dynamically spawned actors and clear any non\xe2\x80\x91permanent\nstatic meshes.  Persistent static meshes (bStaticMeshPermanent == true)\nremain and can be cleaned up manually if desired." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_DespawnAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "DespawnAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_DespawnAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_DespawnAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAISpawnManager_DespawnAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_DespawnAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execDespawnAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DespawnAll();
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function DespawnAll

// Begin Class ADAISpawnManager Function SpawnActors
struct Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn one actor according to the configured rules.  If multiple entries\n     *  exist they will be considered by weight.  This method is exposed to\n     *  Blueprints so designers can trigger spawns manually.  It is safe to\n     *  call this repeatedly; unique/cooldown rules will be observed. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn one actor according to the configured rules.  If multiple entries\nexist they will be considered by weight.  This method is exposed to\nBlueprints so designers can trigger spawns manually.  It is safe to\ncall this repeatedly; unique/cooldown rules will be observed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADAISpawnManager, nullptr, "SpawnActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADAISpawnManager_SpawnActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADAISpawnManager_SpawnActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADAISpawnManager::execSpawnActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActors();
	P_NATIVE_END;
}
// End Class ADAISpawnManager Function SpawnActors

// Begin Class ADAISpawnManager
void ADAISpawnManager::StaticRegisterNativesADAISpawnManager()
{
	UClass* Class = ADAISpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSpawnForEntry", &ADAISpawnManager::execCanSpawnForEntry },
		{ "DespawnAll", &ADAISpawnManager::execDespawnAll },
		{ "SpawnActors", &ADAISpawnManager::execSpawnActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADAISpawnManager);
UClass* Z_Construct_UClass_ADAISpawnManager_NoRegister()
{
	return ADAISpawnManager::StaticClass();
}
struct Z_Construct_UClass_ADAISpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DAISpawnManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnAreaShape_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The shape of the volume within which spawn points will be generated. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The shape of the volume within which spawn points will be generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance from the spawner at which actors may spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance from the spawner at which actors may spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEntries_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of entries from which a random selection will be made when spawning. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of entries from which a random selection will be made when spawning." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMarker_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, spawn all actors at the location of MarkerActor instead of randomly within the volume. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, spawn all actors at the location of MarkerActor instead of randomly within the volume." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerActor_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When bUseMarker is true, this actor's transform is used as the spawn location.  It should be hidden/invisible. */" },
#endif
		{ "EditCondition", "bUseMarker" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When bUseMarker is true, this actor's transform is used as the spawn location.  It should be hidden/invisible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to automatically spawn one actor on BeginPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to automatically spawn one actor on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopSpawning_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to automatically continue spawning at random intervals. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to automatically continue spawning at random intervals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnIntervalMin_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum interval between automatic spawns when bLoopSpawning is true. */" },
#endif
		{ "EditCondition", "bLoopSpawning" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum interval between automatic spawns when bLoopSpawning is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnIntervalMax_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum interval between automatic spawns when bLoopSpawning is true. */" },
#endif
		{ "EditCondition", "bLoopSpawning" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum interval between automatic spawns when bLoopSpawning is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnPerTick_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Global async batch size: maximum actors to spawn per tick. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global async batch size: maximum actors to spawn per tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCurve_MetaData[] = {
		{ "Category", "Spawn|Curve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional curve used when SpawnAreaShape is Curve.  The curve is sampled\n     * at a random x in 0..1 and multiplied by Radius to determine the spawn\n     * distance from the spawner.  This allows designers to bias where in the\n     * volume spawns occur (e.g. close to centre or around the edges).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional curve used when SpawnAreaShape is Curve.  The curve is sampled\nat a random x in 0..1 and multiplied by Radius to determine the spawn\ndistance from the spawner.  This allows designers to bias where in the\nvolume spawns occur (e.g. close to centre or around the edges)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMComponent_MetaData[] = {
		{ "Category", "Spawn|HISM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A HISM component used to efficiently render the static meshes associated\n     * with spawn entries.  Instances are added on spawn and removed when\n     * DespawnAll() is called.  If you require per\xe2\x80\x91mesh HISMs you can derive\n     * from this class and create additional components as needed.\n     */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A HISM component used to efficiently render the static meshes associated\nwith spawn entries.  Instances are added on spawn and removed when\nDespawnAll() is called.  If you require per\xe2\x80\x91mesh HISMs you can derive\nfrom this class and create additional components as needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable in-editor debug previews and radius. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable in-editor debug previews and radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugGhostMaterial_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional ghost material to apply to preview meshes in editor. */" },
#endif
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional ghost material to apply to preview meshes in editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToHISM_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One HISM per unique mesh, all owned by this spawner. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DAISpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One HISM per unique mesh, all owned by this spawner." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnAreaShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnAreaShape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnEntries;
	static void NewProp_bUseMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerActor;
	static void NewProp_bSpawnOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginPlay;
	static void NewProp_bLoopSpawning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopSpawning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnIntervalMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnIntervalMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnPerTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadiusCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMComponent;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugGhostMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToHISM_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToHISM_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshToHISM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADAISpawnManager_CanSpawnForEntry, "CanSpawnForEntry" }, // 1026680501
		{ &Z_Construct_UFunction_ADAISpawnManager_DespawnAll, "DespawnAll" }, // 815451182
		{ &Z_Construct_UFunction_ADAISpawnManager_SpawnActors, "SpawnActors" }, // 918709153
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADAISpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnAreaShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnAreaShape = { "SpawnAreaShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnAreaShape), Z_Construct_UEnum_DAI_Spawner_ESpawnAreaShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnAreaShape_MetaData), NewProp_SpawnAreaShape_MetaData) }; // 53637358
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries_Inner = { "SpawnEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnEntry, METADATA_PARAMS(0, nullptr) }; // 2361864219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries = { "SpawnEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEntries_MetaData), NewProp_SpawnEntries_MetaData) }; // 2361864219
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bUseMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker = { "bUseMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMarker_MetaData), NewProp_bUseMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MarkerActor = { "MarkerActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MarkerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerActor_MetaData), NewProp_MarkerActor_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bSpawnOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay = { "bSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnOnBeginPlay_MetaData), NewProp_bSpawnOnBeginPlay_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bLoopSpawning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning = { "bLoopSpawning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopSpawning_MetaData), NewProp_bLoopSpawning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMin = { "SpawnIntervalMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnIntervalMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnIntervalMin_MetaData), NewProp_SpawnIntervalMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMax = { "SpawnIntervalMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, SpawnIntervalMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnIntervalMax_MetaData), NewProp_SpawnIntervalMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxSpawnPerTick = { "MaxSpawnPerTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MaxSpawnPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnPerTick_MetaData), NewProp_MaxSpawnPerTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_RadiusCurve = { "RadiusCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, RadiusCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusCurve_MetaData), NewProp_RadiusCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_HISMComponent = { "HISMComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, HISMComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMComponent_MetaData), NewProp_HISMComponent_MetaData) };
void Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((ADAISpawnManager*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADAISpawnManager), &Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_DebugGhostMaterial = { "DebugGhostMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, DebugGhostMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugGhostMaterial_MetaData), NewProp_DebugGhostMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_ValueProp = { "MeshToHISM", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_Key_KeyProp = { "MeshToHISM_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM = { "MeshToHISM", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADAISpawnManager, MeshToHISM), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToHISM_MetaData), NewProp_MeshToHISM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnAreaShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnAreaShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bUseMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MarkerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bSpawnOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bLoopSpawning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_SpawnIntervalMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MaxSpawnPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_RadiusCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_HISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_DebugGhostMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADAISpawnManager_Statics::NewProp_MeshToHISM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADAISpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DAI_Spawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADAISpawnManager_Statics::ClassParams = {
	&ADAISpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADAISpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADAISpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADAISpawnManager()
{
	if (!Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton, Z_Construct_UClass_ADAISpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADAISpawnManager.OuterSingleton;
}
template<> DAI_SPAWNER_API UClass* StaticClass<ADAISpawnManager>()
{
	return ADAISpawnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADAISpawnManager);
ADAISpawnManager::~ADAISpawnManager() {}
// End Class ADAISpawnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpawnAreaShape_StaticEnum, TEXT("ESpawnAreaShape"), &Z_Registration_Info_UEnum_ESpawnAreaShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 53637358U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpawnEntry::StaticStruct, Z_Construct_UScriptStruct_FSpawnEntry_Statics::NewStructOps, TEXT("SpawnEntry"), &Z_Registration_Info_UScriptStruct_SpawnEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnEntry), 2361864219U) },
		{ FPendingSpawn::StaticStruct, Z_Construct_UScriptStruct_FPendingSpawn_Statics::NewStructOps, TEXT("PendingSpawn"), &Z_Registration_Info_UScriptStruct_PendingSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingSpawn), 956593223U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADAISpawnManager, ADAISpawnManager::StaticClass, TEXT("ADAISpawnManager"), &Z_Registration_Info_UClass_ADAISpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADAISpawnManager), 2085452360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_1879449683(TEXT("/Script/DAI_Spawner"),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_spawnManager_Plugins_DAI_Spawner_Source_DAI_Spawner_Public_DAISpawnManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
