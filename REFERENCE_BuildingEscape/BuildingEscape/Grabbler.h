// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "Object.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#include "Engine/Public/DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"
#include "Grabbler.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UGrabbler : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabbler();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	//How far ahrad of the plater can we reacg
	float Reach = 100.0f;
	

	UPhysicsHandleComponent* PhysicsHandle = nullptr;

	UInputComponent* PlayerInput = nullptr;

	//Ray Cast and Grab what's in reach
	void Grab();

	//Release the object
	void Released();

	//Look for attached Physics Handle
	void FindPhysicsHandleComponent();

	//Setup (assumed) attachedINput Component
	void SetupInputComponent();
	
	//Return hit for first physics body in reach
	const FHitResult GetFirstPhysicsBodyInReach();

	//Returns Start of reach line
	FVector GetReachLineStart();

	//Returns current end of reach line
	FVector GetReachLineEnd();
};
