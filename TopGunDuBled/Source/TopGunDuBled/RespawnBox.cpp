// Fill out your copyright notice in the Description page of Project Settings.


#include "RespawnBox.h"
#include "Maverick.h"

ARespawnBox::ARespawnBox()
{
	OnActorBeginOverlap.AddDynamic(this, &ARespawnBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ARespawnBox::OnOverlapEnd);
}

void ARespawnBox::BeginPlay()
{
	Super::BeginPlay();
}

void ARespawnBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (AMaverick* Vehicle = Cast<AMaverick>(OtherActor))
	{
		Vehicle->SetActorRotation(FRotator::ZeroRotator);
		Vehicle->SetActorLocation(Vehicle->getRespawnLocation(), false, (FHitResult*)nullptr, ETeleportType::TeleportPhysics);
	}
}

void ARespawnBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
}
