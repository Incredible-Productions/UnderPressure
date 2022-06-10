// Copyright Epic Games, Inc. All Rights Reserved.

#include "Under_PressureGameMode.h"
#include "Under_PressureHUD.h"
#include "Under_PressureCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnder_PressureGameMode::AUnder_PressureGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnder_PressureHUD::StaticClass();
}
