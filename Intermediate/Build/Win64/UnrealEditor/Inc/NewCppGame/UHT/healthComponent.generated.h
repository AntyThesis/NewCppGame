// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "healthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWCPPGAME_healthComponent_generated_h
#error "healthComponent.generated.h already included, missing '#pragma once' in healthComponent.h"
#endif
#define NEWCPPGAME_healthComponent_generated_h

#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_10_DELEGATE \
NEWCPPGAME_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged);


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_11_DELEGATE \
NEWCPPGAME_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRIP); \
	DECLARE_FUNCTION(execAffectHealth);


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUhealthComponent(); \
	friend struct Z_Construct_UClass_UhealthComponent_Statics; \
public: \
	DECLARE_CLASS(UhealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewCppGame"), NO_API) \
	DECLARE_SERIALIZER(UhealthComponent)


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UhealthComponent(UhealthComponent&&); \
	UhealthComponent(const UhealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UhealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UhealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UhealthComponent) \
	NO_API virtual ~UhealthComponent();


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_13_PROLOG
#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWCPPGAME_API UClass* StaticClass<class UhealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewCppGame_Source_NewCppGame_healthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
