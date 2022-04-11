// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOOGLEPLAYUTILS_Main_generated_h
#error "Main.generated.h already included, missing '#pragma once' in Main.h"
#endif
#define GOOGLEPLAYUTILS_Main_generated_h

#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_SPARSE_DATA
#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGooglePlayAuthToken); \
	DECLARE_FUNCTION(execGetGooglePlayUserNickname); \
	DECLARE_FUNCTION(execGetGooglePlayUserUID);


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGooglePlayAuthToken); \
	DECLARE_FUNCTION(execGetGooglePlayUserNickname); \
	DECLARE_FUNCTION(execGetGooglePlayUserUID);


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMain(); \
	friend struct Z_Construct_UClass_UMain_Statics; \
public: \
	DECLARE_CLASS(UMain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GooglePlayUtils"), NO_API) \
	DECLARE_SERIALIZER(UMain)


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMain(); \
	friend struct Z_Construct_UClass_UMain_Statics; \
public: \
	DECLARE_CLASS(UMain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GooglePlayUtils"), NO_API) \
	DECLARE_SERIALIZER(UMain)


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMain(UMain&&); \
	NO_API UMain(const UMain&); \
public:


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMain(UMain&&); \
	NO_API UMain(const UMain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMain)


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_12_PROLOG
#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_SPARSE_DATA \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_RPC_WRAPPERS \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_INCLASS \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_SPARSE_DATA \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEPLAYUTILS_API UClass* StaticClass<class UMain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GooglePlayUtils_Source_GooglePlayUtils_Public_Main_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
