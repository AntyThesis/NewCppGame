// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWCPPGAME_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define NEWCPPGAME_EnemyController_generated_h

#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewCppGame"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyController(AEnemyController&&); \
	AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController) \
	NO_API virtual ~AEnemyController();


#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_14_PROLOG
#define FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWCPPGAME_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewCppGame_Source_NewCppGame_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
