// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "GrabbableItems.generated.h"

UCLASS()
class FIREFIGHTERS_API AGrabbableItems : public AActor
{
	GENERATED_BODY()
	
	//Mesh For the Grabbable Item
	UPROPERTY(VisibleDefaultsOnly, Category = GrabbableItem)
	class UStaticMeshComponent* ItemMesh;

	//Text Render which shows the key needed to pick It Up
	UPROPERTY(VisibleDefaultsOnly, Category = GrabbableItem)
	class UTextRenderComponent* InputKeyText;

	
public:	
	// Sets default values for this actor's properties
	AGrabbableItems();
	//Checks If is held or not
	bool IsHeld=false;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//set up input key text from perspective from user.
	void setUpTextView();
	
};
