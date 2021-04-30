// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGAI_FGCharacter_generated_h
#error "FGCharacter.generated.h already included, missing '#pragma once' in FGCharacter.h"
#endif
#define FGAI_FGCharacter_generated_h

#define FGAI_Source_FGAI_FGCharacter_h_15_DELEGATE \
static inline void FLisenToSounds_DelegateWrapper(const FMulticastScriptDelegate& LisenToSounds) \
{ \
	LisenToSounds.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FGAI_Source_FGAI_FGCharacter_h_20_SPARSE_DATA
#define FGAI_Source_FGAI_FGCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTouchGround); \
	DECLARE_FUNCTION(execMakeEnemieslisen);


#define FGAI_Source_FGAI_FGCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTouchGround); \
	DECLARE_FUNCTION(execMakeEnemieslisen);


#define FGAI_Source_FGAI_FGCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCharacter(); \
	friend struct Z_Construct_UClass_AFGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFGCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacter)


#define FGAI_Source_FGAI_FGCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGCharacter(); \
	friend struct Z_Construct_UClass_AFGCharacter_Statics; \
public: \
	DECLARE_CLASS(AFGCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacter)


#define FGAI_Source_FGAI_FGCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacter(AFGCharacter&&); \
	NO_API AFGCharacter(const AFGCharacter&); \
public:


#define FGAI_Source_FGAI_FGCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacter(AFGCharacter&&); \
	NO_API AFGCharacter(const AFGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCharacter)


#define FGAI_Source_FGAI_FGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(AFGCharacter, Speed); } \
	FORCEINLINE static uint32 __PPO__Gravity() { return STRUCT_OFFSET(AFGCharacter, Gravity); }


#define FGAI_Source_FGAI_FGCharacter_h_17_PROLOG
#define FGAI_Source_FGAI_FGCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_FGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_FGCharacter_h_20_SPARSE_DATA \
	FGAI_Source_FGAI_FGCharacter_h_20_RPC_WRAPPERS \
	FGAI_Source_FGAI_FGCharacter_h_20_INCLASS \
	FGAI_Source_FGAI_FGCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_FGCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_FGCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_FGCharacter_h_20_SPARSE_DATA \
	FGAI_Source_FGAI_FGCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_FGCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_FGCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class AFGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_FGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
