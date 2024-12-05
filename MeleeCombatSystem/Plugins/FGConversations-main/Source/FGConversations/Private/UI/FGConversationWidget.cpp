#include "UI/FGConversationWidget.h"

#include "FGConversationParticipantComponent.h"


UFGConversationWidget::UFGConversationWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), RevealWindow(nullptr), HideWindow(nullptr), MyConversationComponent(nullptr)
{
}

void UFGConversationWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (MyConversationComponent == nullptr)
	{
		APawn* MyPawn = GetOwningPlayer()->GetPawn();
		check(MyPawn);

		UFGConversationParticipantComponent* ConversationComponent = UFGConversationParticipantComponent::FindConversationComponent(MyPawn);
		check(ConversationComponent);

		MyConversationComponent = ConversationComponent;

		MyConversationComponent->ConversationUpdated.AddUObject(this, &UFGConversationWidget::OnConversationUpdated);
		MyConversationComponent->ConversationStatusChanged.AddUObject(this, &UFGConversationWidget::OnConversationStatusChanged);
	}
}

void UFGConversationWidget::OnConversationStatusChanged(bool bNewStatus)
{
	if (bNewStatus == false)
	{
		OnConversationEnded();
	}
}

void UFGConversationWidget::OnWindowRevealed()
{
}
