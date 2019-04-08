// Fill out your copyright notice in the Description page of Project Settings.

#include "GrabbableItems.h"


// Sets default values
AGrabbableItems::AGrabbableItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a Item Mesh
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabbableItemMesh"));
	ItemMesh->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	ItemMesh->bCastDynamicShadow = true;
	ItemMesh->CastShadow = true;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	ItemMesh->SetupAttachment(RootComponent);

	//Create a Text Render
	InputKeyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Input Key"));
}

// Called when the game starts or when spawned
void AGrabbableItems::BeginPlay()
{
	Super::BeginPlay();

	FString string = GetName();

	FVector location = GetTransform().GetLocation();

	FString ObjectPos = location.ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *string, *ObjectPos);
	
}

// Called every frame
void AGrabbableItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrabbableItems::setUpTextView()
{
	
}
