// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/ItemBase.h"
#include "NewCppGame/MyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NEWCPPGAME_API UClass* Z_Construct_UClass_AItemBase();
NEWCPPGAME_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
NEWCPPGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
NEWCPPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Class AItemBase Function Interact_Implementation
struct Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics
{
	struct ItemBase_eventInteract_Implementation_Parms
	{
		ACharacter* InteractingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventInteract_Implementation_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBase, nullptr, "Interact_Implementation", nullptr, nullptr, Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::ItemBase_eventInteract_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::ItemBase_eventInteract_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemBase_Interact_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemBase_Interact_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemBase::execInteract_Implementation)
{
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InteractingCharacter);
	P_NATIVE_END;
}
// End Class AItemBase Function Interact_Implementation

// Begin Class AItemBase
void AItemBase::StaticRegisterNativesAItemBase()
{
	UClass* Class = AItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact_Implementation", &AItemBase::execInteract_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBase);
UClass* Z_Construct_UClass_AItemBase_NoRegister()
{
	return AItemBase::StaticClass();
}
struct Z_Construct_UClass_AItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBase.h" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemVariables_MetaData[] = {
		{ "Category", "ItemVariables" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemVariables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBase_Interact_Implementation, "Interact_Implementation" }, // 949578034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemVariables = { "ItemVariables", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemVariables), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemVariables_MetaData), NewProp_ItemVariables_MetaData) }; // 2722130779
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_SuperMesh = { "SuperMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, SuperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperMesh_MetaData), NewProp_SuperMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_SuperMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AItemBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AItemBase, IInteractInterface), false },  // 3384914084
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBase_Statics::ClassParams = {
	&AItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBase()
{
	if (!Z_Registration_Info_UClass_AItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBase.OuterSingleton, Z_Construct_UClass_AItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBase.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<AItemBase>()
{
	return AItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBase);
AItemBase::~AItemBase() {}
// End Class AItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_ItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBase, AItemBase::StaticClass, TEXT("AItemBase"), &Z_Registration_Info_UClass_AItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBase), 1438577397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_ItemBase_h_2542756817(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_ItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
