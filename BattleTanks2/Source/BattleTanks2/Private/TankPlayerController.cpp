// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!GetControlledTank())
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank is not controlled by the player"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlling: %s"), *(ControlledTank->GetName()));
	}

}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//AimTowardsCrosshair();

}




ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());

}


void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank())
		return;
	//Get world location through crosshair
	//if it hits somethething
		//controlled tank should aim at this point

}