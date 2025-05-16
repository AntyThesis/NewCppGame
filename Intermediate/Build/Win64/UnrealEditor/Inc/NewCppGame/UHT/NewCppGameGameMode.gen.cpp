// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/NewCppGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewCppGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NEWCPPGAME_API UClass* Z_Construct_UClass_ANewCppGameGameMode();
NEWCPPGAME_API UClass* Z_Construct_UClass_ANewCppGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Class ANewCppGameGameMode
void ANewCppGameGameMode::StaticRegisterNativesANewCppGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewCppGameGameMode);
UClass* Z_Construct_UClass_ANewCppGameGameMode_NoRegister()
{
	return ANewCppGameGameMode::StaticClass();
}
struct Z_Construct_UClass_ANewCppGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NewCppGameGameMode.h" },
		{ "ModuleRelativePath", "NewCppGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewCppGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANewCppGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewCppGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewCppGameGameMode_Statics::ClassParams = {
	&ANewCppGameGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewCppGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewCppGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewCppGameGameMode()
{
	if (!Z_Registration_Info_UClass_ANewCppGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewCppGameGameMode.OuterSingleton, Z_Construct_UClass_ANewCppGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewCppGameGameMode.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<ANewCppGameGameMode>()
{
	return ANewCppGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewCppGameGameMode);
ANewCppGameGameMode::~ANewCppGameGameMode() {}
// End Class ANewCppGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewCppGameGameMode, ANewCppGameGameMode::StaticClass, TEXT("ANewCppGameGameMode"), &Z_Registration_Info_UClass_ANewCppGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewCppGameGameMode), 3136243692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameGameMode_h_302677154(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
