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
			MeshComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
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

FEquippableActorItem AClothedBastioniLabCharacter::EquipActorItem(FEquippableActorItem Item, bool bOverwriteExistingItemInSlot, bool bSetMasterPoseComponent)
{
	if (Item.ActorClass != nullptr && !Item.ItemName.IsNone() && !Item.ItemSlot.IsNone())
	{
		FVector Location(0.0f, 0.0f, 0.0f);
		FRotator Rotation(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters SpawnInfo;
		AActor* Actor = GetWorld()->SpawnActor<AActor>(Item.ActorClass, Location, Rotation, SpawnInfo);
		if (Actor != nullptr)
		{
			Item.Actor = Actor;
			Actor->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, Item.SocketName);
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
