// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDAI_Hub_init() {}
	DAI_HUB_API UFunction* Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DAI_Hub;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DAI_Hub()
	{
		if (!Z_Registration_Info_UPackage__Script_DAI_Hub.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DAI_Hub_DAIHubEventBPDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DAI_Hub",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x815976D7,
				0xBF814DEA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DAI_Hub.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DAI_Hub.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DAI_Hub(Z_Construct_UPackage__Script_DAI_Hub, TEXT("/Script/DAI_Hub"), Z_Registration_Info_UPackage__Script_DAI_Hub, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x815976D7, 0xBF814DEA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
