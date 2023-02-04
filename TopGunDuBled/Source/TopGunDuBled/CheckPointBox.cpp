// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPointBox.h"
#include "Maverick.h"
#include "DrawDebugHelpers.h"

ACheckPointBox::ACheckPointBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ACheckPointBox::OnOverlapBegin);
	OnActorBeginOverlap.AddDynamic(this, &ACheckPointBox::OnOverlapEnd);
}

void ACheckPointBox::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void ACheckPointBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (AMaverick* Vehicle = Cast<AMaverick>(OtherActor))
	{
		if (lastCheckpoint)
		{
			Vehicle->increaseLap();
			// printf("currentLap = %d", Vehicle->getCurrentLap());
		}
		// printf("Overlapped Actor = %s", *OtherActor->GetName());
		Vehicle->setRespawnLocation(this->GetActorLocation());
	}
}

void ACheckPointBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{

}
