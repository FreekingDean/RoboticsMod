// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInteractableMarker.h"
#include "Components/SceneComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/WidgetComponent.h"

AFGInteractableMarker::AFGInteractableMarker() : Super() {
	this->mDesiredScreenRadius = 10;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mIconWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Icon")); this->mIconWidget->SetupAttachment(this->RootComponent);
	this->mSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh")); this->mSplineMesh->SetupAttachment(this->RootComponent);
}
void AFGInteractableMarker::Tick(float dt){ }
void AFGInteractableMarker::SetTrackedActor( AActor* trackedActor){ }
void AFGInteractableMarker::BeginPlay(){ }
