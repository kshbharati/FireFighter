// Fill out your copyright notice in the Description page of Project Settings.
#include "Grabbler.h"
#define OUT

// Sets default values for this component's properties
UGrabbler::UGrabbler()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabbler::BeginPlay()
{
	Super::BeginPlay();
	FindPhysicsHandleComponent();
	SetupInputComponent();
}

void UGrabbler::Grab()
{
	///Line Trace and Try and reach any actors with physics body collision channel set
	auto HitResult=GetFirstPhysicsBodyInReach();
	auto ComponentToGrab = HitResult.GetComponent();
	///if we hit something attach a physics handle
	if (!PhysicsHandle) return;
	if (HitResult.GetActor())
	{
		PhysicsHandle->GrabComponent(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			true
		);
	}
}

void UGrabbler::Released()
{
	if (!PhysicsHandle) return;
	PhysicsHandle->ReleaseComponent();
}

void UGrabbler::FindPhysicsHandleComponent()
{

	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle==nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Error: Physics Handle Component Not Found on Pawn: %s"), *(GetOwner()->GetName()));
	}
}

//look for player input component(only appears at run time)
void UGrabbler::SetupInputComponent()
{

	PlayerInput = GetOwner()->FindComponentByClass<UInputComponent>();
	if (PlayerInput)
	{
		PlayerInput->BindAction("Grab", IE_Pressed, this, &UGrabbler::Grab);
		PlayerInput->BindAction("Grab", IE_Released, this, &UGrabbler::Released);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Player Input Not Assigned. Editor Setting"));
	}
}

// Called every frame
void UGrabbler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PhysicsHandle) return;
	//if the physics handle is attached 
	if(PhysicsHandle->GrabbedComponent)
	{ 
		//move the object that we are holding
		PhysicsHandle->SetTargetLocation(GetReachLineEnd());
	}
}

const FHitResult UGrabbler::GetFirstPhysicsBodyInReach()
{
	///Line Trace(Ray Cast) out to reach distance
	FHitResult Hit;

	GetWorld()->LineTraceSingleByObjectType(
		OUT Hit,
		GetReachLineStart(),
		GetReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);

	AActor* HitActor = Hit.GetActor();
	if (HitActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Line Trace Hit: %s"), *(HitActor->GetName()));
	}
	return Hit;
}

FVector UGrabbler::GetReachLineEnd()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	return PlayerViewPointLocation + (PlayerViewPointRotation.Vector() * Reach);
}

FVector UGrabbler::GetReachLineStart()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	
	return PlayerViewPointLocation;
}