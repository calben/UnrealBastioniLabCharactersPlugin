// Fill out your copyright notice in the Description page of Project Settings.

#include "BastioniLabCharacter.h"
#include "BastioniLABCharacters.h"
#include "BastioniLABCharactersBPLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"

// Sets default values
ABastioniLabCharacter::ABastioniLabCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Generic);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Teeth);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Fur);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Privates);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Eye);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Cornea);
	LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(Skin);
}

// Called when the game starts or when spawned
void ABastioniLabCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (bLoadDynamicMaterials)
	{
		SetupBastioniLabMaterials();
	}
}

// Called every frame
void ABastioniLabCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABastioniLabCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABastioniLabCharacter::SetupBastioniLabMaterials()
{

	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Generic);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Teeth);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Fur);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Privates);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Eye);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Cornea);
	CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(Skin);

	if (SkinTexture != nullptr)
	{
		MaterialInstanceDynamicBastioniLabEye->SetTextureParameterValue(FName("Diffuse"), SkinTexture);
		MaterialInstanceDynamicBastioniLabSkin->SetTextureParameterValue(FName("Diffuse"), SkinTexture);
	}
}

void ABastioniLabCharacter::ApplyMacroExpression(FBastioniLabCharacterMacroExpression MacroExpression, float Weight)
{
	for (auto MorphTargetExpressionValue : MacroExpression.MorphTargetExpressionValues)
	{
		FName Name = UBastioniLABCharactersBPLibrary::GetMorphTargetNameForBastioniLabCharacterMorphTarget(MorphTargetExpressionValue.Key);
		UE_LOG(LogBastioniLabCharacters, Log, TEXT("Morphing %s on %s to %d"), *Name.ToString(), *GetName(), MacroExpression.Weight * Weight);
		GetMesh()->SetMorphTarget(Name, MacroExpression.Weight * Weight);
	}
}
