// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/healthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NEWCPPGAME_API UClass* Z_Construct_UClass_UhealthComponent();
NEWCPPGAME_API UClass* Z_Construct_UClass_UhealthComponent_NoRegister();
NEWCPPGAME_API UFunction* Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature();
NEWCPPGAME_API UFunction* Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "healthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NewCppGame, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged)
{
	OnHealthChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "healthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NewCppGame, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Class UhealthComponent Function AffectHealth
struct Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics
{
	struct healthComponent_eventAffectHealth_Parms
	{
		float HealthChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "healthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::NewProp_HealthChangeAmount = { "HealthChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(healthComponent_eventAffectHealth_Parms, HealthChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::NewProp_HealthChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UhealthComponent, nullptr, "AffectHealth", nullptr, nullptr, Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::healthComponent_eventAffectHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::healthComponent_eventAffectHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UhealthComponent_AffectHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UhealthComponent_AffectHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UhealthComponent::execAffectHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectHealth(Z_Param_HealthChangeAmount);
	P_NATIVE_END;
}
// End Class UhealthComponent Function AffectHealth

// Begin Class UhealthComponent Function RIP
struct Z_Construct_UFunction_UhealthComponent_RIP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "healthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UhealthComponent_RIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UhealthComponent, nullptr, "RIP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UhealthComponent_RIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UhealthComponent_RIP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UhealthComponent_RIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UhealthComponent_RIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UhealthComponent::execRIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RIP();
	P_NATIVE_END;
}
// End Class UhealthComponent Function RIP

// Begin Class UhealthComponent
void UhealthComponent::StaticRegisterNativesUhealthComponent()
{
	UClass* Class = UhealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AffectHealth", &UhealthComponent::execAffectHealth },
		{ "RIP", &UhealthComponent::execRIP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UhealthComponent);
UClass* Z_Construct_UClass_UhealthComponent_NoRegister()
{
	return UhealthComponent::StaticClass();
}
struct Z_Construct_UClass_UhealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "healthComponent.h" },
		{ "ModuleRelativePath", "healthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "healthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
		{ "ModuleRelativePath", "healthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "healthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "healthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UhealthComponent_AffectHealth, "AffectHealth" }, // 4285704025
		{ &Z_Construct_UFunction_UhealthComponent_RIP, "RIP" }, // 2562456886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UhealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UhealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UhealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UhealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UhealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UhealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UhealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_NewCppGame_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1113819989
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UhealthComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UhealthComponent, OnDeath), Z_Construct_UDelegateFunction_NewCppGame_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 1432132061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UhealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UhealthComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UhealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UhealthComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UhealthComponent_Statics::NewProp_OnDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UhealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UhealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UhealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UhealthComponent_Statics::ClassParams = {
	&UhealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UhealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UhealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UhealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UhealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UhealthComponent()
{
	if (!Z_Registration_Info_UClass_UhealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UhealthComponent.OuterSingleton, Z_Construct_UClass_UhealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UhealthComponent.OuterSingleton;
}
template<> NEWCPPGAME_API UClass* StaticClass<UhealthComponent>()
{
	return UhealthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UhealthComponent);
UhealthComponent::~UhealthComponent() {}
// End Class UhealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UhealthComponent, UhealthComponent::StaticClass, TEXT("UhealthComponent"), &Z_Registration_Info_UClass_UhealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UhealthComponent), 1730862458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_89105908(TEXT("/Script/NewCppGame"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
