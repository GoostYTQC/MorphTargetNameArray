// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/SkeletalMeshComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorphNameArrayBPLibrary.generated.h"

UCLASS()
class UBlueprintExtensionBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Skeletal Mesh")
	static void GetMorphTargetNames(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& MorphTargetNames);
};
