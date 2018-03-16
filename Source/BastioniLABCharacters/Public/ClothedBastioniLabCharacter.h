// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BastioniLabCharacter.h"
#include "ClothedBastioniLabCharacter.generated.h"

USTRUCT(BlueprintType)
struct FEquippableItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent* ItemMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMesh* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* ItemPreviewTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SocketName;
};

/**
 *
 */
UCLASS()
class BASTIONILABCHARACTERS_API AClothedBastioniLabCharacter : public ABastioniLabCharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FEquippableItem> EquippedItems;

	UFUNCTION(BlueprintCallable)
		bool EquipNewItem(class USkeletalMesh* ItemMesh, FName ItemName, FName ItemSlot, bool bOverwriteExistingItemInSlot = true);

	UFUNCTION(BlueprintCallable)
		bool EquipItem(FEquippableItem Item, bool bOverwriteExistingItemInSlot = true);

	UFUNCTION(BlueprintCallable)
		FEquippableItem GetItemInSlot(FName ItemSlot);
};
