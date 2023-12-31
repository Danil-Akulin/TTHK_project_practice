// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TTHK_API APlayerCharacter : public AMainCharacter
{
	GENERATED_BODY()
	

public:

	APlayerCharacter();

	virtual void MoveForward(float Value) override;
	virtual void MoveRight(float Value) override;
	virtual void Turn(float Value) override;
	virtual void LookUp(float Value) override;
	
	void Tick(float DeltaTime);

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character : Camera")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character : Camera")
	class USpringArmComponent* SpringArmComponent;

};
