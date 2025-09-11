// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAI_UltraSky_init() {}
	DAI_ULTRASKY_API UFunction* Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DAI_UltraSky;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DAI_UltraSky()
	{
		if (!Z_Registration_Info_UPackage__Script_DAI_UltraSky.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ADAIUltraSkyActor_OnFootprintStamped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DAI_UltraSky",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x017721DD,
				0x84C73AD6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DAI_UltraSky.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DAI_UltraSky.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DAI_UltraSky(Z_Construct_UPackage__Script_DAI_UltraSky, TEXT("/Script/DAI_UltraSky"), Z_Registration_Info_UPackage__Script_DAI_UltraSky, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x017721DD, 0x84C73AD6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
