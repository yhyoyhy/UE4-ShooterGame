// Fill out your copyright notice in the Description page of Project Settings.


#include "SComponents/CharacterAttributeComponent.h"
#include "GameFramework/Character.h"

// Sets default values for this component's properties
UCharacterAttributeComponent::UCharacterAttributeComponent()
{


}

void UCharacterAttributeComponent::BeginPlay()
{

	Super::BeginPlay();

	AActor* Owner = GetOwner();

	if (Owner && Owner->IsA(ACharacter::StaticClass()))
	{
		ACharacter* Character = Cast<ACharacter>(Owner);

		if (Character)
		{

			

		}

	}

}
