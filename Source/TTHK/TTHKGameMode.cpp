// Copyright Epic Games, Inc. All Rights Reserved.

#include "TTHKGameMode.h"
#include "TTHKCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATTHKGameMode::ATTHKGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
