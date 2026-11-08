

#include "Item.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

