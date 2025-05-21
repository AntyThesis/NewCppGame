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
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
NEWCPPGAME_API UClass* Z_Construct_UClass_UInteractInterface();
NEWCPPGAME_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Interface UInteractInterface Function Interact
struct InteractInterface_eventInteract_Parms
{
	ACharacter* InteractingCharacter;
};
void IInteractInterface::Interact(ACharacter* InteractingCharacter)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractInterface_Interact = FName(TEXT("Interact"));
void IInteractInterface::Execute_Interact(UObject* O, ACharacter* InteractingCharacter)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()));
	InteractInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractInterface_Interact);
	if (Func)
	{
		Parms.InteractingCharacter=InteractingCharacter;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractInterface*)(O->GetNativeInterfaceAddress(UInteractInterface::StaticClass())))
	{
		I->Interact_Implementation(InteractingCharacter);
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractInterface_Interact_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractInterface_eventInteract_Parms, InteractingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_Interact_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::PropPointers), sizeof(InteractInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractInterface_eventInteract_Parms) < MAX_uint16);
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
	P_GET_OBJECT(ACharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InteractingCharacter);
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
		{ &Z_Construct_UFunction_UInteractInterface_Interact, "Interact" }, // 724356222
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
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 3384914084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_4160995277(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_InteractInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
