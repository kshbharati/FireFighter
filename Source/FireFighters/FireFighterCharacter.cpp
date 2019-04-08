// Fill out your copyright notice in the Description page of Project Settings.

#include "FireFighterCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

// Sets default values
AFireFighterCharacter::AFireFighterCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 200.f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(0.f, 0.f, 110.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(0.f, -90.f, 0.f);
	Mesh1P->RelativeLocation = FVector(0.f, 0.f, 0.f);

	// Create a gun mesh component
	/*FP_Axe = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Axe"));
	FP_Axe->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Axe->bCastDynamicShadow = false;
	FP_Axe->CastShadow = false;
	// FP_Axe->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Axe->SetupAttachment(RootComponent);*/


}

// Called when the game starts or when spawned
void AFireFighterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireFighterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugLine(
		GetWorld(),
		AFireFighterCharacter::GetReachLineStart(),
		AFireFighterCharacter::GetReachLineEnd(),
		FColor(255, 0, 255),
		false, -1, 0,
		12.333
	);

}

// Called to bind functionality to input
void AFireFighterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInput = GetOwner()->FindComponentByClass<UInputComponent>();
	if (PlayerInput)
	{
		PlayerInput->BindAction("Grab", IE_Pressed, this, &AFireFighterCharacter::Grab);
		PlayerInput->BindAction("Grab", IE_Released, this, &AFireFighterCharacter::Released);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Player Input Not Assigned. Editor Setting"));
	}
}

void AFireFighterCharacter::Grab()
{
}

void AFireFighterCharacter::Released()
{

}

FVector AFireFighterCharacter::GetReachLineEnd()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);
	return PlayerViewPointLocation + (PlayerViewPointRotation.Vector() * Reach);
}

FVector AFireFighterCharacter::GetReachLineStart()
{
	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewPointLocation, OUT PlayerViewPointRotation);

	return PlayerViewPointLocation;
}

