// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewCppGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NewCppGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NewCppGame()
	{
		if (!Z_Registration_Info_UPackage__Script_NewCppGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NewCppGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5714985A,
				0xBD240335,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NewCppGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NewCppGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NewCppGame(Z_Construct_UPackage__Script_NewCppGame, TEXT("/Script/NewCppGame"), Z_Registration_Info_UPackage__Script_NewCppGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5714985A, 0xBD240335));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
