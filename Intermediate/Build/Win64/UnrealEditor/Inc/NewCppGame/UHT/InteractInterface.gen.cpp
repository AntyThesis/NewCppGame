// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/InteractInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NEWCPPGAME_API UClass* Z_Construct_UClass_UInteractInterface();
NEWCPPGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Interface UInteractInterface Function Interact
void IInteractInterface::Interact()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractInterface_Interact = FName(TEXT("Interact"));
void IInteractInterface::Execute_Interact(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_Interact);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		I->Interact_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractInterface::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractInterface Function Interact

// Begin Interface UInteractInterface
void UInteractInterface::StaticRegisterNativesUInteractInterface()
{
	UClass* Class = UInteractInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &IInteractInterface::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractInterface);
UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
{
	return UInteractInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_Interact, "Interact" }, // 2840906648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
	&UInteractInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractInterface()
{
	if (!Z_Registration_Info_UClass_UInteractInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractInterface.OuterSingleton, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractInterface.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<UInteractInterface>()
{
	return UInteractInterface::StaticClass();
}
UInteractInterface::UInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
UInteractInterface::~UInteractInterface() {}
// End Interface UInteractInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 1889721103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_3110980796(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
