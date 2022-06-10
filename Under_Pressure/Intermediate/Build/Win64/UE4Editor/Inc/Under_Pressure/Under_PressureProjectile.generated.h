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
#ifdef UNDER_PRESSURE_Under_PressureProjectile_generated_h
#error "Under_PressureProjectile.generated.h already included, missing '#pragma once' in Under_PressureProjectile.h"
#endif
#define UNDER_PRESSURE_Under_PressureProjectile_generated_h

#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_SPARSE_DATA
#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnder_PressureProjectile(); \
	friend struct Z_Construct_UClass_AUnder_PressureProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnder_PressureProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Under_Pressure"), NO_API) \
	DECLARE_SERIALIZER(AUnder_PressureProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnder_PressureProjectile(); \
	friend struct Z_Construct_UClass_AUnder_PressureProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnder_PressureProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Under_Pressure"), NO_API) \
	DECLARE_SERIALIZER(AUnder_PressureProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnder_PressureProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnder_PressureProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnder_PressureProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnder_PressureProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnder_PressureProjectile(AUnder_PressureProjectile&&); \
	NO_API AUnder_PressureProjectile(const AUnder_PressureProjectile&); \
public:


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnder_PressureProjectile(AUnder_PressureProjectile&&); \
	NO_API AUnder_PressureProjectile(const AUnder_PressureProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnder_PressureProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnder_PressureProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnder_PressureProjectile)


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnder_PressureProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnder_PressureProjectile, ProjectileMovement); }


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_12_PROLOG
#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_SPARSE_DATA \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_RPC_WRAPPERS \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_INCLASS \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_SPARSE_DATA \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDER_PRESSURE_API UClass* StaticClass<class AUnder_PressureProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Under_Pressure_Source_Under_Pressure_Under_PressureProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
