// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IInteractable.h"
#include "GameFramework/Actor.h"
#include "InterfacedPawn.generated.h"

UCLASS()
class INTERFACESEXAMPLE_API AInterfacedPawn : public AActor, public IIInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInterfacedPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool CanInteract(APawn* InteractingInstigator) override {return true;};
	virtual void Interact(APawn* InteractingInstigator) override;

	void ProcessInteraction(FHitResult& HitResult);

};
