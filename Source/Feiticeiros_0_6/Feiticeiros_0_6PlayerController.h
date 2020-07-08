// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Feiticeiros_0_6PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FEITICEIROS_0_6_API AFeiticeiros_0_6PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AFeiticeiros_0_6PlayerController();

protected:
	virtual void SetupInputComponent() override;

	void Jump();

	void StopJumping();

	void MoveForward(float Value);

	void MoveRight(float Value);

	void RollRight(float Value);

	void Turn(float Value);

	void TurnAtRate(float Rate);

	void LookUp(float Value);

	void LookUpAtRate(float Rate);

	void Cast();
};
