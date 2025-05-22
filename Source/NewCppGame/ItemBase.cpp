// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "MyStruct.h"


// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
	SuperMesh = FindComponentByClass<UStaticMeshComponent>();
	SuperMesh->SetStaticMesh(ItemVariables.Mesh);
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBase::Interact_Implementation(ACharacter* InteractingCharacter) {

	if (SuperMesh) {
		SuperMesh->SetVisibility(false);
		SuperMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, TEXT("Picked Up"));
	}
}

