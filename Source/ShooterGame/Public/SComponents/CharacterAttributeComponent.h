// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterAttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTERGAME_API UCharacterAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterAttributeComponent();

	void BeginPlay() override;

public:	


private:

	UPROPERTY(VisibleDefaultsOnly, Category = Attribute)
	int32 MaxHealth = 100.f;

	UPROPERTY(VisibleDefaultsOnly, Category = Attribute)
	int32 Health = 100.f;

};
