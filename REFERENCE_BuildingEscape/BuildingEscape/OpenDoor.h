// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerVolume.h"
#include "Engine/World.h"
#include "OpenDoor.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float WeightRequiredToOpenDoor = 30.f;

	//the puzzle triggervolume which requires certain mass for the door to open
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate = nullptr;

	//the triggervgolume which decides if the player won
	UPROPERTY(EditAnywhere)
	ATriggerVolume* VictoryPlate = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets") 
	TSubclassOf<class UUserWidget> wMainMenu;
	
	UUserWidget* MyMainMenu;

	//Get's the owner
	AActor* Owner=nullptr;

	//returns the total mass of objects in pressureplate
	float GetTotalMassOfActorsOnPlate();

	UPROPERTY(BlueprintAssignable)
	FDoorEvent OnOpenRequest;

	UPROPERTY(BlueprintAssignable)
	FDoorEvent OnCloseRequest;
};
