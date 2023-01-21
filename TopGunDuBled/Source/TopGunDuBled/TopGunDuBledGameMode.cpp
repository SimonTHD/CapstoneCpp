// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopGunDuBledGameMode.h"
#include "TopGunDuBledPawn.h"

ATopGunDuBledGameMode::ATopGunDuBledGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ATopGunDuBledPawn::StaticClass();
}
