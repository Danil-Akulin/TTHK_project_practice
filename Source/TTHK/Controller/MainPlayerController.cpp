
#include "MainPlayerController.h"
#include "../MainCharacter.h"

void AMainPlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);

	CachedMainCharacter = Cast<AMainCharacter>(InPawn);
}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &AMainPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMainPlayerController::MoveRight);
	InputComponent->BindAxis("Turn", this, &AMainPlayerController::Turn);
	InputComponent->BindAxis("LookUp", this, &AMainPlayerController::LookUp);
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AMainPlayerController::Jump);
}

void AMainPlayerController::MoveForward(float Value)
{
	if (CachedMainCharacter.IsValid())
	{
		CachedMainCharacter->MoveForward(Value);
	}
}

void AMainPlayerController::MoveRight(float Value)
{
	if (CachedMainCharacter.IsValid())
	{
		CachedMainCharacter->MoveRight(Value);
	}
}

void AMainPlayerController::Turn(float Value)
{
	if (CachedMainCharacter.IsValid())
	{
		CachedMainCharacter->Turn(Value);
	}
}

void AMainPlayerController::LookUp(float Value)
{
	if (CachedMainCharacter.IsValid())
	{
		CachedMainCharacter->LookUp(Value);
	}
}

void AMainPlayerController::Jump()
{
	if (CachedMainCharacter.IsValid())
	{
		CachedMainCharacter->Jump();
	}
}