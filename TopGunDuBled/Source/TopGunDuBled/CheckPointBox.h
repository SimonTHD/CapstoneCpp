// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CheckPointBox.generated.h"

UCLASS()
class TOPGUNDUBLED_API ACheckPointBox : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	UPROPERTY(Category = Race, EditAnywhere, BlueprintReadOnly)
		bool lastCheckpoint;
public:
	ACheckPointBox();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
