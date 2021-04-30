// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FGAI_SoundProjectile_generated_h
#error "SoundProjectile.generated.h already included, missing '#pragma once' in SoundProjectile.h"
#endif
#define FGAI_SoundProjectile_generated_h

#define FGAI_Source_FGAI_SoundProjectile_h_13_SPARSE_DATA
#define FGAI_Source_FGAI_SoundProjectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FGAI_Source_FGAI_SoundProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FGAI_Source_FGAI_SoundProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoundProjectile(); \
	friend struct Z_Construct_UClass_ASoundProjectile_Statics; \
public: \
	DECLARE_CLASS(ASoundProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(ASoundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FGAI_Source_FGAI_SoundProjectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASoundProjectile(); \
	friend struct Z_Construct_UClass_ASoundProjectile_Statics; \
public: \
	DECLARE_CLASS(ASoundProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FGAI"), NO_API) \
	DECLARE_SERIALIZER(ASoundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FGAI_Source_FGAI_SoundProjectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASoundProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASoundProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoundProjectile(ASoundProjectile&&); \
	NO_API ASoundProjectile(const ASoundProjectile&); \
public:


#define FGAI_Source_FGAI_SoundProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoundProjectile(ASoundProjectile&&); \
	NO_API ASoundProjectile(const ASoundProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoundProjectile)


#define FGAI_Source_FGAI_SoundProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASoundProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASoundProjectile, ProjectileMovement); }


#define FGAI_Source_FGAI_SoundProjectile_h_10_PROLOG
#define FGAI_Source_FGAI_SoundProjectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_SoundProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_SoundProjectile_h_13_SPARSE_DATA \
	FGAI_Source_FGAI_SoundProjectile_h_13_RPC_WRAPPERS \
	FGAI_Source_FGAI_SoundProjectile_h_13_INCLASS \
	FGAI_Source_FGAI_SoundProjectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FGAI_Source_FGAI_SoundProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FGAI_Source_FGAI_SoundProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FGAI_Source_FGAI_SoundProjectile_h_13_SPARSE_DATA \
	FGAI_Source_FGAI_SoundProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FGAI_Source_FGAI_SoundProjectile_h_13_INCLASS_NO_PURE_DECLS \
	FGAI_Source_FGAI_SoundProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGAI_API UClass* StaticClass<class ASoundProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FGAI_Source_FGAI_SoundProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
