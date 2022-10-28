// Fill out your copyright notice in the Description page of Project Settings.


#include "InterfacedPawn.h"

// Sets default values
AInterfacedPawn::AInterfacedPawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInterfacedPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInterfacedPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInterfacedPawn::Interact(APawn* InteractingInstigator)
{
	
}

void AInterfacedPawn::ProcessInteraction(FHitResult& HitResult)
{
	if(IIInteractable* InteractableInterface = Cast<IIInteractable>(HitResult.Actor))
	{
		APawn* pawnToInteract = nullptr;
		if(InteractableInterface->CanInteract(pawnToInteract))
		{
			InteractableInterface->Interact(pawnToInteract);
		}
	}
}
*/