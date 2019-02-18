#include "MALibraryArtifact.h"

// Sets default values
AMALibraryArtifact::AMALibraryArtifact()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMALibraryArtifact::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMALibraryArtifact::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMALibraryArtifact::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

