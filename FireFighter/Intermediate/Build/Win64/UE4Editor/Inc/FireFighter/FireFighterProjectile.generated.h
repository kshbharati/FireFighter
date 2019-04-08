// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIREFIGHTER_FireFighterProjectile_generated_h
#error "FireFighterProjectile.generated.h already included, missing '#pragma once' in FireFighterProjectile.h"
#endif
#define FIREFIGHTER_FireFighterProjectile_generated_h

#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireFighterProjectile(); \
	friend FIREFIGHTER_API class UClass* Z_Construct_UClass_AFireFighterProjectile(); \
public: \
	DECLARE_CLASS(AFireFighterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireFighter"), NO_API) \
	DECLARE_SERIALIZER(AFireFighterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFireFighterProjectile(); \
	friend FIREFIGHTER_API class UClass* Z_Construct_UClass_AFireFighterProjectile(); \
public: \
	DECLARE_CLASS(AFireFighterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FireFighter"), NO_API) \
	DECLARE_SERIALIZER(AFireFighterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireFighterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireFighterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireFighterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireFighterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireFighterProjectile(AFireFighterProjectile&&); \
	NO_API AFireFighterProjectile(const AFireFighterProjectile&); \
public:


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireFighterProjectile(AFireFighterProjectile&&); \
	NO_API AFireFighterProjectile(const AFireFighterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireFighterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireFighterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireFighterProjectile)


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFireFighterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFireFighterProjectile, ProjectileMovement); }


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_9_PROLOG
#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_RPC_WRAPPERS \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_INCLASS \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FireFighter_Source_FireFighter_FireFighterProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FireFighter_Source_FireFighter_FireFighterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FireFighter_Source_FireFighter_FireFighterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
