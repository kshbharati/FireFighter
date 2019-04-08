// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREFIGHTER_FireFighterCharacter_generated_h
#error "FireFighterCharacter.generated.h already included, missing '#pragma once' in FireFighterCharacter.h"
#endif
#define FIREFIGHTER_FireFighterCharacter_generated_h

#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_RPC_WRAPPERS
#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireFighterCharacter(); \
	friend FIREFIGHTER_API class UClass* Z_Construct_UClass_AFireFighterCharacter(); \
public: \
	DECLARE_CLASS(AFireFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireFighter"), NO_API) \
	DECLARE_SERIALIZER(AFireFighterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFireFighterCharacter(); \
	friend FIREFIGHTER_API class UClass* Z_Construct_UClass_AFireFighterCharacter(); \
public: \
	DECLARE_CLASS(AFireFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireFighter"), NO_API) \
	DECLARE_SERIALIZER(AFireFighterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireFighterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireFighterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireFighterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireFighterCharacter(AFireFighterCharacter&&); \
	NO_API AFireFighterCharacter(const AFireFighterCharacter&); \
public:


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireFighterCharacter(AFireFighterCharacter&&); \
	NO_API AFireFighterCharacter(const AFireFighterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireFighterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireFighterCharacter)


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFireFighterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFireFighterCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFireFighterCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFireFighterCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFireFighterCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFireFighterCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFireFighterCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFireFighterCharacter, L_MotionController); }


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_11_PROLOG
#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_RPC_WRAPPERS \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_INCLASS \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FireFighter_Source_FireFighter_FireFighterCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FireFighter_Source_FireFighter_FireFighterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FireFighter_Source_FireFighter_FireFighterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
