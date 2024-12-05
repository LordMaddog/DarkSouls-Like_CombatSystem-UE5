#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ConversationTypes.h"
#include "FGConversationWidget.generated.h"


class UFGConversationParticipantComponent;

UCLASS(Abstract, Blueprintable)
class FGCONVERSATIONS_API UFGConversationWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UFGConversationWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;
	
	UPROPERTY(Transient, BlueprintReadOnly, meta = ( BindWidgetAnim ) )
	UWidgetAnimation* RevealWindow;

	UPROPERTY(Transient, BlueprintReadOnly, meta = ( BindWidgetAnim ) )
	UWidgetAnimation* HideWindow;
	
	FWidgetAnimationDynamicEvent OnWindowRevealedDelegate;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnConversationUpdated(const FClientConversationMessagePayload& MessagePayload);

	UFUNCTION(BlueprintImplementableEvent)
	void OnConversationEnded();

	void OnConversationStatusChanged(bool bNewStatus);
	
protected:
	UFUNCTION()
	void OnWindowRevealed();
	
	UPROPERTY(BlueprintReadOnly)
	UFGConversationParticipantComponent* MyConversationComponent;
};