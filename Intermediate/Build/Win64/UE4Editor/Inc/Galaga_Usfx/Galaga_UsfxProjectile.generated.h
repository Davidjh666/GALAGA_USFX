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
#ifdef GALAGA_USFX_Galaga_UsfxProjectile_generated_h
#error "Galaga_UsfxProjectile.generated.h already included, missing '#pragma once' in Galaga_UsfxProjectile.h"
#endif
#define GALAGA_USFX_Galaga_UsfxProjectile_generated_h

#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_SPARSE_DATA
#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_UsfxProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_UsfxProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_UsfxProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_Usfx"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_UsfxProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_UsfxProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_UsfxProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_UsfxProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_Usfx"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_UsfxProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_UsfxProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_UsfxProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_UsfxProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_UsfxProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_UsfxProjectile(AGalaga_UsfxProjectile&&); \
	NO_API AGalaga_UsfxProjectile(const AGalaga_UsfxProjectile&); \
public:


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_UsfxProjectile(AGalaga_UsfxProjectile&&); \
	NO_API AGalaga_UsfxProjectile(const AGalaga_UsfxProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_UsfxProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_UsfxProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_UsfxProjectile)


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalaga_UsfxProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalaga_UsfxProjectile, ProjectileMovement); }


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_12_PROLOG
#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_SPARSE_DATA \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_RPC_WRAPPERS \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_INCLASS \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_SPARSE_DATA \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_API UClass* StaticClass<class AGalaga_UsfxProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_Usfx_Source_Galaga_Usfx_Galaga_UsfxProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
