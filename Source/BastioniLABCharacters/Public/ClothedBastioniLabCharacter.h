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
		class UTexture2D* ItemPreviewTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SocketName;

	FEquippableItem() :
		ItemMeshComponent(nullptr),
		ItemMesh(nullptr),
		ItemPreviewTexture(nullptr),
		ItemName(FName::FName()),
		ItemSlot(FName::FName()),
		SocketName(FName::FName())
	{};

	FEquippableItem(class USkeletalMeshComponent* ItemMeshComponent,
		class USkeletalMesh* ItemMesh,
		class UTexture2D* ItemPreviewTexture,
		FName ItemName,
		FName ItemSlot,
		FName SocketName) :
		ItemMeshComponent(ItemMeshComponent),
		ItemMesh(ItemMesh),
		ItemPreviewTexture(ItemPreviewTexture),
		ItemName(ItemName),
		ItemSlot(ItemSlot),
		SocketName(SocketName)
	{};

};

USTRUCT(BlueprintType)
struct FEquippableActorItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AActor> ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AActor* Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* ItemPreviewTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SocketName;

	FEquippableActorItem() :
		ActorClass(nullptr),
		Actor(nullptr),
		ItemPreviewTexture(nullptr),
		ItemName(FName::FName()),
		ItemSlot(FName::FName()),
		SocketName(FName::FName())
	{};

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TArray<FEquippableActorItem> EquippedActorItems;

	UFUNCTION(BlueprintCallable)
		FEquippableItem EquipItem(FEquippableItem Item, bool bOverwriteExistingItemInSlot = true, bool bSetMasterPoseComponent = true);

	UFUNCTION(BlueprintCallable)
		FEquippableActorItem EquipActorItem(FEquippableActorItem Item, bool bOverwriteExistingItemInSlot, bool bSetMasterPoseComponent);

	UFUNCTION(BlueprintCallable)
		FEquippableItem GetItemInSlot(FName ItemSlot);

	UFUNCTION(BlueprintCallable)
		bool UnequipItem(FName ItemName);

};
