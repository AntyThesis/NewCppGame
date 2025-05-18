// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
NEWCPPGAME_API UClass* Z_Construct_UClass_AEnemyController();
NEWCPPGAME_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Class AEnemyController
void AEnemyController::StaticRegisterNativesAEnemyController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyController);
UClass* Z_Construct_UClass_AEnemyController_NoRegister()
{
	return AEnemyController::StaticClass();
}
struct Z_Construct_UClass_AEnemyController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackBoardComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackBoardComponent = { "BlackBoardComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyController, BlackBoardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackBoardComponent_MetaData), NewProp_BlackBoardComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_BlackBoardComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
	&AEnemyController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyController()
{
	if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<AEnemyController>()
{
	return AEnemyController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
AEnemyController::~AEnemyController() {}
// End Class AEnemyController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 1930645692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_2644981285(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
