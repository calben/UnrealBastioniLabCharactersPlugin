// Fill out your copyright notice in the Description page of Project Settings.

#include "ClothedBastioniLabCharacter.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "UObjectGlobals.h"

bool AClothedBastioniLabCharacter::EquipNewItem(USkeletalMesh* ItemMesh, FName ItemName, FName ItemSlot, bool bOverwriteExistingItemInSlot)
{
	FEquippableItem Item;
	Item.ItemMesh = ItemMesh;
	Item.ItemName = ItemName;
	Item.ItemSlot = ItemSlot;
	return EquipItem(Item, bOverwriteExistingItemInSlot);
}

bool AClothedBastioniLabCharacter::EquipItem(FEquippableItem Item, bool bOverwriteExistingItemInSlot)
{
	if (Item.ItemMesh != nullptr && !Item.ItemName.IsNone() && !Item.ItemSlot.IsNone())
	{
		if (bOverwriteExistingItemInSlot)
		{
			auto ExistingItem = GetItemInSlot(Item.ItemSlot);
			if (ExistingItem.ItemMeshComponent != nullptr)
			{
				ExistingItem.ItemMeshComponent->DestroyComponent();
			}
		}
		USkeletalMeshComponent* MeshComponent = NewObject<USkeletalMeshComponent>(USkeletalMeshComponent::StaticClass());
		if (MeshComponent != nullptr)
		{
			Item.ItemMeshComponent = MeshComponent;
			MeshComponent->SetupAttachment(RootComponent);
			MeshComponent->SetMasterPoseComponent(GetMesh());
			MeshComponent->SetSkeletalMesh(Item.ItemMesh, true);
			return true;
		}
	}
	return false;
}



FEquippableItem AClothedBastioniLabCharacter::GetItemInSlot(FName ItemSlot)
{
	FEquippableItem EmptyItem;
	for (auto Item : EquippedItems)
	{
		if (Item.ItemSlot.IsEqual(ItemSlot))
		{
			return Item;
		}
	}
	return EmptyItem;
}
