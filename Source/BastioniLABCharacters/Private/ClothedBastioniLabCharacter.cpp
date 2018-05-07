// Fill out your copyright notice in the Description page of Project Settings.

#include "ClothedBastioniLabCharacter.h"
#include "BastioniLABCharacters.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "UObjectGlobals.h"

FEquippableItem AClothedBastioniLabCharacter::EquipItem(FEquippableItem Item, bool bOverwriteExistingItemInSlot, bool bSetMasterPoseComponent)
{
	if (Item.ItemMesh != nullptr && !Item.ItemName.IsNone() && !Item.ItemSlot.IsNone())
	{
		if (bOverwriteExistingItemInSlot)
		{
			auto ExistingItem = GetItemInSlot(Item.ItemSlot);
			if (ExistingItem.ItemMeshComponent != nullptr)
			{
				UnequipItem(ExistingItem.ItemName);
			}
		}
		USkeletalMeshComponent* MeshComponent = NewObject<USkeletalMeshComponent>(this);
		if (MeshComponent != nullptr)
		{
			Item.ItemMeshComponent = MeshComponent;
			MeshComponent->RegisterComponentWithWorld(GetWorld());
			MeshComponent->AttachTo(GetMesh(), Item.SocketName, EAttachLocation::SnapToTarget);
			AddOwnedComponent(MeshComponent);
			MeshComponent->SetSkeletalMesh(Item.ItemMesh, true);
			if (bSetMasterPoseComponent)
			{
				MeshComponent->SetMasterPoseComponent(GetMesh());
			}
			return Item;
		}
	}
	return Item;
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

bool AClothedBastioniLabCharacter::UnequipItem(FName ItemName)
{
	for (int32 i = EquippedItems.Num() - 1; i >= 0; --i)
	{
		if (EquippedItems[i].ItemName.IsEqual(ItemName))
		{
			EquippedItems[i].ItemMeshComponent->DestroyComponent();
			EquippedItems.RemoveAt(i, 1, false);
			return true;
		}
	}
	return false;
}
