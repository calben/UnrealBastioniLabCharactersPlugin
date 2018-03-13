// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BastioniLabCharacterMorphTargets.h"
#include "BastioniLABCharactersBPLibrary.generated.h"

UCLASS()
class UBastioniLABCharactersBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable)
		static FName GetMorphTargetNameForBastioniLabCharacterMorphTarget(EBastioniLabCharacterMorphTarget Target)
	{
		return BastioniLabCharacterMorphTargetNames[(uint8)Target];
	}
};
