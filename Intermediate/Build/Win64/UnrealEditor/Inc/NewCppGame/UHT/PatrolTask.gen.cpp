// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/PatrolTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolTask() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
NEWCPPGAME_API UClass* Z_Construct_UClass_UPatrolTask();
NEWCPPGAME_API UClass* Z_Construct_UClass_UPatrolTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Class UPatrolTask
void UPatrolTask::StaticRegisterNativesUPatrolTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatrolTask);
UClass* Z_Construct_UClass_UPatrolTask_NoRegister()
{
	return UPatrolTask::StaticClass();
}
struct Z_Construct_UClass_UPatrolTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PatrolTask.h" },
		{ "ModuleRelativePath", "PatrolTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPatrolTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatrolTask_Statics::ClassParams = {
	&UPatrolTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatrolTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatrolTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatrolTask()
{
	if (!Z_Registration_Info_UClass_UPatrolTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatrolTask.OuterSingleton, Z_Construct_UClass_UPatrolTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatrolTask.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<UPatrolTask>()
{
	return UPatrolTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolTask);
UPatrolTask::~UPatrolTask() {}
// End Class UPatrolTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_PatrolTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPatrolTask, UPatrolTask::StaticClass, TEXT("UPatrolTask"), &Z_Registration_Info_UClass_UPatrolTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatrolTask), 236921134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_PatrolTask_h_3738861180(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_PatrolTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_PatrolTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
