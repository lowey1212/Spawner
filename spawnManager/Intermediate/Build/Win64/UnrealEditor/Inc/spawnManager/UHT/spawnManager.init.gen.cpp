// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespawnManager_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_spawnManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_spawnManager()
	{
		if (!Z_Registration_Info_UPackage__Script_spawnManager.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/spawnManager",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0AB61271,
				0x6A439420,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_spawnManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_spawnManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_spawnManager(Z_Construct_UPackage__Script_spawnManager, TEXT("/Script/spawnManager"), Z_Registration_Info_UPackage__Script_spawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0AB61271, 0x6A439420));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
