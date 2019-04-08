// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FireFightersGameMode.h"
#include "FireFightersHUD.h"
#include "FireFightersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFireFightersGameMode::AFireFightersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFireFightersHUD::StaticClass();
}
