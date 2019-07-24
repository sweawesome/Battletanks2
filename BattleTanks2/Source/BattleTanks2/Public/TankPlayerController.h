// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS2_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATank* GetControlledTank() const;

	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void AimTowardsCrosshair(); // Start the tank moving the barrel so that a shot would hit where the crosshair itersects the world.
};
