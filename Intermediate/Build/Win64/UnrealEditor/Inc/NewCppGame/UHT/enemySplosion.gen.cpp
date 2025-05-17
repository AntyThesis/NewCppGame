// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/enemySplosion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemySplosion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NEWCPPGAME_API UClass* Z_Construct_UClass_AenemySplosion();
NEWCPPGAME_API UClass* Z_Construct_UClass_AenemySplosion_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Class AenemySplosion
void AenemySplosion::StaticRegisterNativesAenemySplosion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AenemySplosion);
UClass* Z_Construct_UClass_AenemySplosion_NoRegister()
{
	return AenemySplosion::StaticClass();
}
struct Z_Construct_UClass_AenemySplosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "enemySplosion.h" },
		{ "ModuleRelativePath", "enemySplosion.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AenemySplosion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AenemySplosion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AenemySplosion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AenemySplosion_Statics::ClassParams = {
	&AenemySplosion::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AenemySplosion_Statics::Class_MetaDataParams), Z_Construct_UClass_AenemySplosion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AenemySplosion()
{
	if (!Z_Registration_Info_UClass_AenemySplosion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AenemySplosion.OuterSingleton, Z_Construct_UClass_AenemySplosion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AenemySplosion.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<AenemySplosion>()
{
	return AenemySplosion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AenemySplosion);
AenemySplosion::~AenemySplosion() {}
// End Class AenemySplosion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_enemySplosion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AenemySplosion, AenemySplosion::StaticClass, TEXT("AenemySplosion"), &Z_Registration_Info_UClass_AenemySplosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AenemySplosion), 3897150355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_enemySplosion_h_2354867673(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_enemySplosion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_enemySplosion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
