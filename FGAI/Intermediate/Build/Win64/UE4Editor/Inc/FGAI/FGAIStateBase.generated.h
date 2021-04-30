// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FGAI_FGAIStateBase_generated_h
#error "FGAIStateBase.generated.h already included, missing '#pragma once' in FGAIStateBase.h"
#endif
#define FGAI_FGAIStateBase_generated_h

#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_SPARSE_DATA
#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execChangeState);


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execChangeState);


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_EVENT_PARMS \
	struct FGAIStateBase_eventBP_TickActive_Parms \
	{ \
		float DeltaTime; \
	};


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_CALLBACK_WRAPPERS
#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGAIStateBase(); \
	friend struct Z_Construct_UClass_UFGAIStateBase_Statics; \
public: \
	DECLARE_CLASS(UFGAIStateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGAIStateBase)


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUFGAIStateBase(); \
	friend struct Z_Construct_UClass_UFGAIStateBase_Statics; \
public: \
	DECLARE_CLASS(UFGAIStateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(UFGAIStateBase)


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAIStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAIStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAIStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAIStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAIStateBase(UFGAIStateBase&&); \
	NO_API UFGAIStateBase(const UFGAIStateBase&); \
public:


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAIStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAIStateBase(UFGAIStateBase&&); \
	NO_API UFGAIStateBase(const UFGAIStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAIStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAIStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAIStateBase)


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_PRIVATE_PROPERTY_OFFSET
#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_8_PROLOG \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_EVENT_PARMS


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_SPARSE_DATA \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_RPC_WRAPPERS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_CALLBACK_WRAPPERS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_INCLASS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_SPARSE_DATA \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_CALLBACK_WRAPPERS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class UFGAIStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_AI_StateMachine_FGAIStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
