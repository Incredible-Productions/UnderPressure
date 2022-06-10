// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNDER_PRESSURE_Under_PressureCharacter_generated_h
#error "Under_PressureCharacter.generated.h already included, missing '#pragma once' in Under_PressureCharacter.h"
#endif
#define UNDER_PRESSURE_Under_PressureCharacter_generated_h

#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_SPARSE_DATA
#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_RPC_WRAPPERS
#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnder_PressureCharacter(); \
	friend struct Z_Construct_UClass_AUnder_PressureCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnder_PressureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Under_Pressure"), NO_API) \
	DECLARE_SERIALIZER(AUnder_PressureCharacter)


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAUnder_PressureCharacter(); \
	friend struct Z_Construct_UClass_AUnder_PressureCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnder_PressureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Under_Pressure"), NO_API) \
	DECLARE_SERIALIZER(AUnder_PressureCharacter)


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnder_PressureCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnder_PressureCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnder_PressureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnder_PressureCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnder_PressureCharacter(AUnder_PressureCharacter&&); \
	NO_API AUnder_PressureCharacter(const AUnder_PressureCharacter&); \
public:


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnder_PressureCharacter(AUnder_PressureCharacter&&); \
	NO_API AUnder_PressureCharacter(const AUnder_PressureCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnder_PressureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnder_PressureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnder_PressureCharacter)


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUnder_PressureCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUnder_PressureCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUnder_PressureCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUnder_PressureCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUnder_PressureCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUnder_PressureCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUnder_PressureCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUnder_PressureCharacter, L_MotionController); }


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_17_PROLOG
#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_SPARSE_DATA \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_RPC_WRAPPERS \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_INCLASS \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_SPARSE_DATA \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDER_PRESSURE_API UClass* StaticClass<class AUnder_PressureCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Under_Pressure_Source_Under_Pressure_Under_PressureCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
