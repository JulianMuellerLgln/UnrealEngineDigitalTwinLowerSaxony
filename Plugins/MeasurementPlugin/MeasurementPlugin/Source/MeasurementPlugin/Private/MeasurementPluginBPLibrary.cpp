// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeasurementPluginBPLibrary.h"
#include "MeasurementPlugin.h"

void UMeasurementPluginBPLibrary::SetDecalSize(UDecalComponent* decal, FVector size)
{
	decal->DecalSize = size;

	return;
}
