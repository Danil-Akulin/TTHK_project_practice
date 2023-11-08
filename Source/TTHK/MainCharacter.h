
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS(Abstract, NotBlueprintable)
class TTHK_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	virtual void MoveForward(float Value) {};
	virtual void MoveRight(float Value) {};
	virtual void Turn(float Value) {};
	virtual void LookUp(float Value) {};
};
