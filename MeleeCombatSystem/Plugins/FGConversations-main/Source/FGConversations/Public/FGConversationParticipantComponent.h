#pragma once

#include "CoreMinimal.h"
#include "ConversationParticipantComponent.h"
#include "GameplayTagContainer.h"

#include "FGConversationParticipantComponent.generated.h"


/** Describes a participant in a conversation */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "FG Conversation Participant Data", ShortTooltip = "Data asset used to define a Conversation Participant."))
class FGCONVERSATIONS_API UFGConversationParticipantData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	
	/** If not set, the owning Actor's name will be used instead. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UTexture2D> AvatarImage;

	/** An ID that will be used by the Conversation system to link to the
	 * owning Actor.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag ParticipantTag;
};



UCLASS(BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class FGCONVERSATIONS_API UFGConversationParticipantComponent : public UConversationParticipantComponent
{
	GENERATED_BODY()

public:
	UFGConversationParticipantComponent();

	// Returns the conversation component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "FG|Conversation")
	static UFGConversationParticipantComponent* FindConversationComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UFGConversationParticipantComponent>() : nullptr); }

	UFUNCTION(BlueprintCallable)
	virtual const UFGConversationParticipantData* GetParticipantData();

	UFUNCTION(BlueprintCallable, Category = "FG|Conversation")
	AActor* K2_GetParticipant(const FGameplayTag& ParticipantTag) const;

	UFUNCTION(BlueprintCallable, Category = "FG|Conversation")
	FGameplayTag GetCurrentEntryPoint() const;

	UFUNCTION(BlueprintCallable, Category = "FG|Conversation")
	void SetCurrentEntryPoint(FGameplayTag NewEntryPointTag);
	
protected:
	UPROPERTY(EditAnywhere, Category = "FG|Conversation")
	TObjectPtr<const UFGConversationParticipantData> ConversationParticipantData;
	
	UPROPERTY(EditAnywhere, Category = "FG|Conversation")
	FGameplayTag DefaultConversationEntryPoint;

private:
	FGameplayTag CurrentEntryPoint;
};


