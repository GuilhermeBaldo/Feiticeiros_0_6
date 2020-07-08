// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Feiticeiros_0_6GameMode.h"
#include "Feiticeiros_0_6Character.h"
#include "Feiticeiros_0_6PlayerController.h"
#include "UObject/ConstructorHelpers.h"

AFeiticeiros_0_6GameMode::AFeiticeiros_0_6GameMode()
{
	PlayerControllerClass = AFeiticeiros_0_6PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}	
}
