// Copyright Epic Games, Inc. All Rights Reserved.

#include "BFLSGameMode.h"
#include "BFLSHUD.h"
#include "BFLSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABFLSGameMode::ABFLSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABFLSHUD::StaticClass();
}
