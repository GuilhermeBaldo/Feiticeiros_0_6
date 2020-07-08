// Fill out your copyright notice in the Description page of Project Settings.


#include "Feiticeiros_0_6PlayerController.h"
#include "Feiticeiros_0_6Character.h"
#include "Engine/Engine.h"

AFeiticeiros_0_6PlayerController::AFeiticeiros_0_6PlayerController()
{
	//bShowMouseCursor = true;
	//DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AFeiticeiros_0_6PlayerController::SetupInputComponent( )
{
	Super::SetupInputComponent();

	// Set up gameplay key bindings
	InputComponent->BindAction("Jump", IE_Pressed, this, &AFeiticeiros_0_6PlayerController::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &AFeiticeiros_0_6PlayerController::StopJumping);

	InputComponent->BindAxis("MoveForward", this, &AFeiticeiros_0_6PlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AFeiticeiros_0_6PlayerController::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	InputComponent->BindAxis("Turn", this, &AFeiticeiros_0_6PlayerController::Turn);
	InputComponent->BindAxis("TurnRate", this, &AFeiticeiros_0_6PlayerController::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &AFeiticeiros_0_6PlayerController::LookUp);
	InputComponent->BindAxis("LookUpRate", this, &AFeiticeiros_0_6PlayerController::LookUpAtRate);
}

void AFeiticeiros_0_6PlayerController::Jump()
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->Jump();
	}
}

void AFeiticeiros_0_6PlayerController::StopJumping()
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->StopJumping();
	}
}


void AFeiticeiros_0_6PlayerController::MoveForward(float Value) 
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player) 
	{
		Player->MoveForward(Value);
	}
}

void AFeiticeiros_0_6PlayerController::MoveRight(float Value) 
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->MoveRight(Value);
	}
}

void AFeiticeiros_0_6PlayerController::RollRight(float Value)
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		//Player->RollRight(Value);
	}
}

void AFeiticeiros_0_6PlayerController::Turn(float Value)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("X=%f"), Value));
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->Turn(Value);
	}
}

void AFeiticeiros_0_6PlayerController::TurnAtRate(float Rate)
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->TurnAtRate(Rate);
	}
}

void AFeiticeiros_0_6PlayerController::LookUp(float Value)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Y=%f"), Value));
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->LookUp(Value);
	}
}

void AFeiticeiros_0_6PlayerController::LookUpAtRate(float Rate)
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		Player->LookUpAtRate(Rate);
	}
}

void AFeiticeiros_0_6PlayerController::Cast()
{
	AFeiticeiros_0_6Character* Player = (AFeiticeiros_0_6Character*)GetPawn();
	if (Player)
	{
		//Player->Cast();
	}
}
