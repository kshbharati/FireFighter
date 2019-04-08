// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "FireFighterCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class FIREFIGHTERS_API AFireFighterCharacter : public ACharacter
{
	GENERATED_BODY()
	
	/***********
	Setting Up Player Components
	***********/

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this character's properties
	AFireFighterCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//To Store Player Input
	UInputComponent* PlayerInput;

	/************
	Movement Handling Functions
	*************/
	/** Handles moving forward/backward */
	//void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	//void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	//void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	//void LookUpAtRate(float Rate);

	/***********
	Item Pickup and Drop
	************/
	//Ray Cast and Grab what's in reach
	void Grab();

	//Release the object
	void Released();


	/**************
	Using Items
	***************/
	/** Fires a projectile. */
	//void OnActionKeyPressed();


public:



	/* /** Sound to play each time we fire */
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class USoundBase* AxeSound;

	/** AnimMontage to play each time we fire */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	//class UAnimMontage* AxeAnimation;

	
	/****************
	
	*****************/

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	/****************
	For Line Tracing which searches for Hit Objects
	*****************/
	//How far ahrad of the plater can we reacg
	float Reach = 100.0f;

	//Returns Start of reach line
	FVector GetReachLineStart();

	//Returns current end of reach line
	FVector GetReachLineEnd();

	/*********
	
	**********/
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
};
