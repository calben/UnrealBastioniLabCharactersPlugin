// Fill out your copyright notice in the Description page of Project Settings.

#include "ClothedBastioniLabCharacter.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "UObjectGlobals.h"

bool AClothedBastioniLabCharacter::EquipItem(FEquippableItem Item, bool bOverwriteExistingItemInSlot, bool bSetMasterPoseComponent)
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
		USkeletalMeshComponent* MeshComponent = NewObject<USkeletalMeshComponent>(this);
		if (MeshComponent != nullptr)
		{
			Item.ItemMeshComponent = MeshComponent;
			MeshComponent->RegisterComponentWithWorld(GetWorld());
			MeshComponent->SetupAttachment(GetMesh(), Item.ItemSlot);
			AddOwnedComponent(MeshComponent);
			MeshComponent->SetSkeletalMesh(Item.ItemMesh, true);
			if (bSetMasterPoseComponent)
			{
				MeshComponent->SetMasterPoseComponent(GetMesh());
			}
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
