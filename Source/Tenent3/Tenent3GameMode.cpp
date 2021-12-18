// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tenent3GameMode.h"
#include "Tenent3HUD.h"
#include "Tenent3Character.h"
#include "UObject/ConstructorHelpers.h"

ATenent3GameMode::ATenent3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATenent3HUD::StaticClass();
}
