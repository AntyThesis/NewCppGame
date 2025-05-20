// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewCppGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionInstance;
#ifdef NEWCPPGAME_NewCppGameCharacter_generated_h
#error "NewCppGameCharacter.generated.h already included, missing '#pragma once' in NewCppGameCharacter.h"
#endif
#define NEWCPPGAME_NewCppGameCharacter_generated_h

#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execHandleHealthChange);


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewCppGameCharacter(); \
	friend struct Z_Construct_UClass_ANewCppGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ANewCppGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewCppGame"), NO_API) \
	DECLARE_SERIALIZER(ANewCppGameCharacter)


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANewCppGameCharacter(ANewCppGameCharacter&&); \
	ANewCppGameCharacter(const ANewCppGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewCppGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewCppGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewCppGameCharacter) \
	NO_API virtual ~ANewCppGameCharacter();


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_22_PROLOG
#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWCPPGAME_API UClass* StaticClass<class ANewCppGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewCppGame_Source_NewCppGame_NewCppGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
