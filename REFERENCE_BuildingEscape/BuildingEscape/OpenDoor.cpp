// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();	
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("CAnnot find Owner for The Component OpenDoor"));
			}

	if (!PressurePlate)
	{
		UE_LOG(LogTemp, Warning, TEXT("The Component is not assigned to PressurePlate variable on OpenDoor Component"));
	}
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Poll the trigger Volume

	if (GetTotalMassOfActorsOnPlate() > WeightRequiredToOpenDoor) //TODO make into a parameter
	{
		OnOpenRequest.Broadcast();
	}
	else
	{
		OnCloseRequest.Broadcast();
	}


}

float UOpenDoor::GetTotalMassOfActorsOnPlate()
{
	float TotalMass=0.0f;

	if (!PressurePlate) return TotalMass;
	//Find all the overlapping actors
	TArray<AActor*> OverlappingActors; 
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	//Iterate through them adding their masses
	for (const auto* TempActor : OverlappingActors)
	{
		TotalMass+=TempActor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return TotalMass;
}

