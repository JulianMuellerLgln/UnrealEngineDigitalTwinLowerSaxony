// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/DecalComponent.h"
#include "MeasurementPluginBPLibrary.generated.h"

UCLASS()
class UMeasurementPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Decal Size", Keywords = "SetDecalSize"), Category = "Decals")
	static void SetDecalSize(UDecalComponent* decal, FVector size);
};
