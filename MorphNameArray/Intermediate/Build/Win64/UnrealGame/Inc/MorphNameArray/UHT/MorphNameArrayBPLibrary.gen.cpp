// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MorphNameArray/Public/MorphNameArrayBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorphNameArrayBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MORPHNAMEARRAY_API UClass* Z_Construct_UClass_UBlueprintExtensionBPLibrary();
MORPHNAMEARRAY_API UClass* Z_Construct_UClass_UBlueprintExtensionBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MorphNameArray();
// End Cross Module References

// Begin Class UBlueprintExtensionBPLibrary Function GetMorphTargetNames
struct Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics
{
	struct BlueprintExtensionBPLibrary_eventGetMorphTargetNames_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		TArray<FName> MorphTargetNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/MorphNameArrayBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintExtensionBPLibrary_eventGetMorphTargetNames_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_MorphTargetNames_Inner = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_MorphTargetNames = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintExtensionBPLibrary_eventGetMorphTargetNames_Parms, MorphTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_MorphTargetNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::NewProp_MorphTargetNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintExtensionBPLibrary, nullptr, "GetMorphTargetNames", nullptr, nullptr, Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::BlueprintExtensionBPLibrary_eventGetMorphTargetNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::BlueprintExtensionBPLibrary_eventGetMorphTargetNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintExtensionBPLibrary::execGetMorphTargetNames)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_TARRAY_REF(FName,Z_Param_Out_MorphTargetNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintExtensionBPLibrary::GetMorphTargetNames(Z_Param_SkeletalMeshComponent,Z_Param_Out_MorphTargetNames);
	P_NATIVE_END;
}
// End Class UBlueprintExtensionBPLibrary Function GetMorphTargetNames

// Begin Class UBlueprintExtensionBPLibrary
void UBlueprintExtensionBPLibrary::StaticRegisterNativesUBlueprintExtensionBPLibrary()
{
	UClass* Class = UBlueprintExtensionBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMorphTargetNames", &UBlueprintExtensionBPLibrary::execGetMorphTargetNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintExtensionBPLibrary);
UClass* Z_Construct_UClass_UBlueprintExtensionBPLibrary_NoRegister()
{
	return UBlueprintExtensionBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MorphNameArrayBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MorphNameArrayBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintExtensionBPLibrary_GetMorphTargetNames, "GetMorphTargetNames" }, // 3776823438
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintExtensionBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MorphNameArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::ClassParams = {
	&UBlueprintExtensionBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintExtensionBPLibrary()
{
	if (!Z_Registration_Info_UClass_UBlueprintExtensionBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintExtensionBPLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintExtensionBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintExtensionBPLibrary.OuterSingleton;
}
template<> MORPHNAMEARRAY_API UClass* StaticClass<UBlueprintExtensionBPLibrary>()
{
	return UBlueprintExtensionBPLibrary::StaticClass();
}
UBlueprintExtensionBPLibrary::UBlueprintExtensionBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintExtensionBPLibrary);
UBlueprintExtensionBPLibrary::~UBlueprintExtensionBPLibrary() {}
// End Class UBlueprintExtensionBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintExtensionBPLibrary, UBlueprintExtensionBPLibrary::StaticClass, TEXT("UBlueprintExtensionBPLibrary"), &Z_Registration_Info_UClass_UBlueprintExtensionBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintExtensionBPLibrary), 2947574008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_1439647150(TEXT("/Script/MorphNameArray"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MorphNameArray_Source_MorphNameArray_Public_MorphNameArrayBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
