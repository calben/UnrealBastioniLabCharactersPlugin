// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ConstructorHelpers.h"
#include "BastioniLabCharacter.generated.h"

#define MATERIAL_SLOT_BastioniLabGeneric 0
#define MATERIAL_SLOT_BastioniLabTeeth 1
#define MATERIAL_SLOT_BastioniLabFur 2
#define MATERIAL_SLOT_BastioniLabPrivates 3
#define MATERIAL_SLOT_BastioniLabEye 4
#define MATERIAL_SLOT_BastioniLabCornea 5
#define MATERIAL_SLOT_BastioniLabSkin 6

#define MATERIAL_BASE_PATH_BastioniLabGeneric TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabGeneric.BastioniLabGeneric'")
#define MATERIAL_BASE_PATH_BastioniLabTeeth TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabTeeth.BastioniLabTeeth'")
#define MATERIAL_BASE_PATH_BastioniLabFur TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabFur.BastioniLabFur'")
#define MATERIAL_BASE_PATH_BastioniLabPrivates TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabGeneric.BastioniLabGeneric'")
#define MATERIAL_BASE_PATH_BastioniLabEye TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabEye.BastioniLabEye'")
#define MATERIAL_BASE_PATH_BastioniLabCornea TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabCornea.BastioniLabCornea'")
#define MATERIAL_BASE_PATH_BastioniLabSkin TEXT("Material'/BastioniLABCharacters/Materials/BastioniBaseMaterials/BastioniLabSkin.BastioniLabSkin'")

#define LOAD_BASE_BASTIONI_SKIN_MATERIAL_FROM_PATH(MAT) \
static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBastioniLab##MAT##ObjectFinder(MATERIAL_BASE_PATH_BastioniLab##MAT##); \
if (MaterialBastioniLab##MAT##ObjectFinder.Object != NULL) \
{ \
	MaterialBastioniLab##MAT## = (UMaterial*)MaterialBastioniLab##MAT##ObjectFinder.Object; \
}

#define CREATE_AND_SET_DYNAMIC_BASTIONI_LAB_SKIN_MATERIAL(MAT) \
if (MaterialBastioniLab##MAT## != nullptr) \
{ \
	MaterialInstanceDynamicBastioniLab##MAT## = UMaterialInstanceDynamic::Create(MaterialBastioniLab##MAT##, this); \
	if (MaterialInstanceDynamicBastioniLab##MAT## != nullptr) \
	{ \
		GetMesh()->SetMaterial(MATERIAL_SLOT_BastioniLab##MAT##, MaterialInstanceDynamicBastioniLab##MAT##); \
	} \
} 

UCLASS()
class BASTIONILABCHARACTERS_API ABastioniLabCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABastioniLabCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabGeneric;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabTeeth;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabFur;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabPrivates;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabEye;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabCornea;

	UPROPERTY(VisibleAnywhere)
		class UMaterial* MaterialBastioniLabSkin;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabGeneric;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabTeeth;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabFur;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabPrivates;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabEye;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabCornea;

	class UMaterialInstanceDynamic* MaterialInstanceDynamicBastioniLabSkin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bLoadDynamicMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture* SkinTexture;

	UFUNCTION(BlueprintCallable)
		void SetupBastioniLabMaterials();
};
