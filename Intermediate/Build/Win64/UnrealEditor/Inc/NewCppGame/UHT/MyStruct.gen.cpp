// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewCppGame/MyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStruct() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
NEWCPPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
NEWCPPGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMyHealthStruct();
UPackage* Z_Construct_UPackage__Script_NewCppGame();
// End Cross Module References

// Begin ScriptStruct FMyHealthStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyHealthStruct;
class UScriptStruct* FMyHealthStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyHealthStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyHealthStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyHealthStruct, (UObject*)Z_Construct_UPackage__Script_NewCppGame(), TEXT("MyHealthStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyHealthStruct.OuterSingleton;
}
template<> NEWCPPGAME_API UScriptStruct* StaticStruct<FMyHealthStruct>()
{
	return FMyHealthStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyHealthStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "MyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyHealthStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyHealthStruct_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyHealthStruct, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyHealthStruct_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyHealthStruct, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyHealthStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyHealthStruct_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyHealthStruct_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyHealthStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyHealthStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
	nullptr,
	&NewStructOps,
	"MyHealthStruct",
	Z_Construct_UScriptStruct_FMyHealthStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyHealthStruct_Statics::PropPointers),
	sizeof(FMyHealthStruct),
	alignof(FMyHealthStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyHealthStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyHealthStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyHealthStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyHealthStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyHealthStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyHealthStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyHealthStruct.InnerSingleton;
}
// End ScriptStruct FMyHealthStruct

// Begin ScriptStruct FItemStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStruct;
class UScriptStruct* FItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, (UObject*)Z_Construct_UPackage__Script_NewCppGame(), TEXT("ItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton;
}
template<> NEWCPPGAME_API UScriptStruct* StaticStruct<FItemStruct>()
{
	return FItemStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemVariables" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemVariables" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemVariables" },
		{ "ModuleRelativePath", "MyStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NewCppGame,
	nullptr,
	&NewStructOps,
	"ItemStruct",
	Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers),
	sizeof(FItemStruct),
	alignof(FItemStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton;
}
// End ScriptStruct FItemStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_MyStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyHealthStruct::StaticStruct, Z_Construct_UScriptStruct_FMyHealthStruct_Statics::NewStructOps, TEXT("MyHealthStruct"), &Z_Registration_Info_UScriptStruct_MyHealthStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyHealthStruct), 3678350482U) },
		{ FItemStruct::StaticStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps, TEXT("ItemStruct"), &Z_Registration_Info_UScriptStruct_ItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStruct), 2722130779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_MyStruct_h_2721319954(TEXT("/Script/NewCppGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_MyStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewCppGame_Source_NewCppGame_MyStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
