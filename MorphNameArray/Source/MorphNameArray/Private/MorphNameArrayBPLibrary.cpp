// Copyright Epic Games, Inc. All Rights Reserved.

#include "MorphNameArrayBPLibrary.h"
#include "Components/SkeletalMeshComponent.h"  // Include for USkeletalMeshComponent
#include "Animation/MorphTarget.h"            // Include for morph target access
#include "Engine/SkeletalMesh.h"              // Include for USkeletalMesh

void UBlueprintExtensionBPLibrary::GetMorphTargetNames(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& MorphTargetNames)
{
	if (SkeletalMeshComponent)
	{
		// Use the new API to get the skeletal mesh asset
		USkeletalMesh* SkeletalMesh = SkeletalMeshComponent->GetSkeletalMeshAsset();
		if (SkeletalMesh)
		{
			// Clear the output array to ensure it's empty before filling it with morph target names
			MorphTargetNames.Empty();

			// Retrieve morph targets from the skeletal mesh
			const TArray<UMorphTarget*>& MorphTargets = SkeletalMesh->GetMorphTargets();
			for (UMorphTarget* MorphTarget : MorphTargets)
			{
				if (MorphTarget)
				{
					// Add the morph target name (FName) to the output array
					MorphTargetNames.Add(MorphTarget->GetFName());
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("SkeletalMeshComponent does not have a valid SkeletalMeshAsset."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid SkeletalMeshComponent."));
	}
}

