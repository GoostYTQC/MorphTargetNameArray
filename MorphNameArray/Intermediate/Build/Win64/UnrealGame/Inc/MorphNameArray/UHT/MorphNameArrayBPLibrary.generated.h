// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MorphNameArrayBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef MORPHNAMEARRAY_MorphNameArrayBPLibrary_generated_h
#error "MorphNameArrayBPLibrary.generated.h already included, missing '#pragma once' in MorphNameArrayBPLibrary.h"
#endif
#define MORPHNAMEARRAY_MorphNameArrayBPLibrary_generated_h

#define FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMorphTargetNames);


#define FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintExtensionBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintExtensionBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MorphNameArray"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintExtensionBPLibrary)


#define FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintExtensionBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintExtensionBPLibrary(UBlueprintExtensionBPLibrary&&); \
	UBlueprintExtensionBPLibrary(const UBlueprintExtensionBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintExtensionBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintExtensionBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintExtensionBPLibrary) \
	NO_API virtual ~UBlueprintExtensionBPLibrary();


#define FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_9_PROLOG
#define FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MORPHNAMEARRAY_API UClass* StaticClass<class UBlueprintExtensionBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
