
@interface APPCNewsSupplementalContext : NSObject <APPCPromotableNewsSupplementalContext> {
    void advertisementType;
    void anfComponentMetadataInternal;
    void contentEnvironment;
    void creativeType;
    void currentArticleArticleId;
    void currentArticleIsSponsored;
    void currentArticlePublicationMetadata;
    void currentArticleRating;
    void currentArticleSourceChannel;
    void currentArticleSourceChannelRating;
    void currentArticleSourceContentProviderId;
    void currentArticleSourceSections;
    void currentIssueId;
    void currentIssueIsCurrentInternal;
    void currentIssueIsDraftInternal;
    void feedMetadataCategories;
    void feedMetadataChannelId;
    void feedMetadataContentProviderID;
    void feedMetadataKeywords;
    void feedMetadataLanguages;
    void feedMetadataRating;
    void feedMetadataSectionId;
    void feedMetadataTagId;
    void groupContextAboveCategories;
    void groupContextAboveChannelId;
    void groupContextAboveContentProviderId;
    void groupContextAboveId;
    void groupContextAboveKeywords;
    void groupContextAboveLanguages;
    void groupContextAboveTagId;
    void groupContextAboveType;
    void groupContextBelowCategories;
    void groupContextBelowChannelId;
    void groupContextBelowContentProviderId;
    void groupContextBelowId;
    void groupContextBelowKeywords;
    void groupContextBelowLanguages;
    void groupContextBelowTagId;
    void groupContextBelowType;
    void groupContextCategories;
    void groupContextContentProviderId;
    void groupContextId;
    void groupContextKeywords;
    void groupContextLanguages;
    void groupContextType;
    void isDraft;
    void nextArticleArticleId;
    void nextArticleIsSponsored;
    void nextArticlePublicationMetadata;
    void nextArticleRating;
    void nextArticleSourceChannel;
    void nextArticleSourceChannelRating;
    void nextArticleSourceContentProviderId;
    void nextArticleSourceSections;
    void numOfArticlesSeenSinceLastInterstitial;
    void placement;
    void playerAspectRatio;
    void referralCampaignId;
    void referralLocation;
    void referralPublisherInventory;
    void requestedAdTypeInternal;
    void subscriptionType;
    void superFeedMetadata;
}

@property (nonatomic, copy) NSString *advertisementType;
@property (nonatomic, copy) NSDictionary *anfComponentMetadata;
@property (nonatomic, copy) NSString *contentEnvironment;
@property (nonatomic, copy) NSString *creativeType;
@property (nonatomic, copy) NSString *currentArticleArticleId;
@property (nonatomic, retain) NSNumber *currentArticleIsSponsored;
@property (nonatomic, copy) NSDictionary *currentArticlePublicationMetadata;
@property (nonatomic, copy) NSString *currentArticleRating;
@property (nonatomic, copy) NSString *currentArticleSourceChannel;
@property (nonatomic, copy) NSString *currentArticleSourceChannelRating;
@property (nonatomic, retain) NSNumber *currentArticleSourceContentProviderId;
@property (nonatomic, copy) NSArray *currentArticleSourceSections;
@property (nonatomic, copy) NSString *currentIssueId;
@property (nonatomic) long long currentIssueIsCurrent;
@property (nonatomic) long long currentIssueIsDraft;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *feedMetadataCategories;
@property (nonatomic, copy) NSString *feedMetadataChannelId;
@property (nonatomic, retain) NSNumber *feedMetadataContentProviderID;
@property (nonatomic, copy) NSArray *feedMetadataKeywords;
@property (nonatomic, copy) NSArray *feedMetadataLanguages;
@property (nonatomic, copy) NSString *feedMetadataRating;
@property (nonatomic, copy) NSString *feedMetadataSectionId;
@property (nonatomic, copy) NSString *feedMetadataTagId;
@property (nonatomic, copy) NSArray *groupContextAboveCategories;
@property (nonatomic, copy) NSString *groupContextAboveChannelId;
@property (nonatomic, retain) NSNumber *groupContextAboveContentProviderId;
@property (nonatomic, copy) NSString *groupContextAboveId;
@property (nonatomic, copy) NSArray *groupContextAboveKeywords;
@property (nonatomic, copy) NSArray *groupContextAboveLanguages;
@property (nonatomic, copy) NSString *groupContextAboveTagId;
@property (nonatomic, copy) NSString *groupContextAboveType;
@property (nonatomic, copy) NSArray *groupContextBelowCategories;
@property (nonatomic, copy) NSString *groupContextBelowChannelId;
@property (nonatomic, retain) NSNumber *groupContextBelowContentProviderId;
@property (nonatomic, copy) NSString *groupContextBelowId;
@property (nonatomic, copy) NSArray *groupContextBelowKeywords;
@property (nonatomic, copy) NSArray *groupContextBelowLanguages;
@property (nonatomic, copy) NSString *groupContextBelowTagId;
@property (nonatomic, copy) NSString *groupContextBelowType;
@property (nonatomic, copy) NSArray *groupContextCategories;
@property (nonatomic, retain) NSNumber *groupContextContentProviderId;
@property (nonatomic, copy) NSString *groupContextId;
@property (nonatomic, copy) NSArray *groupContextKeywords;
@property (nonatomic, copy) NSArray *groupContextLanguages;
@property (nonatomic, copy) NSString *groupContextType;
@property (nonatomic, retain) NSNumber *isDraft;
@property (nonatomic, copy) NSString *nextArticleArticleId;
@property (nonatomic, retain) NSNumber *nextArticleIsSponsored;
@property (nonatomic, copy) NSDictionary *nextArticlePublicationMetadata;
@property (nonatomic, copy) NSString *nextArticleRating;
@property (nonatomic, copy) NSString *nextArticleSourceChannel;
@property (nonatomic, copy) NSString *nextArticleSourceChannelRating;
@property (nonatomic, retain) NSNumber *nextArticleSourceContentProviderId;
@property (nonatomic, copy) NSArray *nextArticleSourceSections;
@property (nonatomic, retain) NSNumber *numOfArticlesSeenSinceLastInterstitial;
@property (nonatomic, retain) NSNumber *onboardStatus;
@property (nonatomic, copy) NSString *placement;
@property (nonatomic, retain) NSNumber *playerAspectRatio;
@property (nonatomic, copy) NSString *referralLocation;
@property (nonatomic, retain) NSNumber *referralPublisherInventory;
@property (nonatomic) long long requestedAdType;
@property (nonatomic, copy) NSString *subscriptionType;
@property (nonatomic, copy) NSArray *superFeedMetadata;

- (void).cxx_destruct;
- (id)advertisementType;
- (id)anfComponentMetadata;
- (id)contentEnvironment;
- (id)copyWithZone:(void*)arg1;
- (id)creativeType;
- (id)currentArticleArticleId;
- (id)currentArticleIsSponsored;
- (id)currentArticlePublicationMetadata;
- (id)currentArticleRating;
- (id)currentArticleSourceChannel;
- (id)currentArticleSourceChannelRating;
- (id)currentArticleSourceContentProviderId;
- (id)currentArticleSourceSections;
- (id)currentIssueId;
- (long long)currentIssueIsCurrent;
- (long long)currentIssueIsDraft;
- (id)dictionaryRepresentation;
- (id)feedMetadataCategories;
- (id)feedMetadataChannelId;
- (id)feedMetadataContentProviderID;
- (id)feedMetadataKeywords;
- (id)feedMetadataLanguages;
- (id)feedMetadataRating;
- (id)feedMetadataSectionId;
- (id)feedMetadataTagId;
- (id)groupContextAboveCategories;
- (id)groupContextAboveChannelId;
- (id)groupContextAboveContentProviderId;
- (id)groupContextAboveId;
- (id)groupContextAboveKeywords;
- (id)groupContextAboveLanguages;
- (id)groupContextAboveTagId;
- (id)groupContextAboveType;
- (id)groupContextBelowCategories;
- (id)groupContextBelowChannelId;
- (id)groupContextBelowContentProviderId;
- (id)groupContextBelowId;
- (id)groupContextBelowKeywords;
- (id)groupContextBelowLanguages;
- (id)groupContextBelowTagId;
- (id)groupContextBelowType;
- (id)groupContextCategories;
- (id)groupContextContentProviderId;
- (id)groupContextId;
- (id)groupContextKeywords;
- (id)groupContextLanguages;
- (id)groupContextType;
- (id)init;
- (id)isDraft;
- (id)nextArticleArticleId;
- (id)nextArticleIsSponsored;
- (id)nextArticlePublicationMetadata;
- (id)nextArticleRating;
- (id)nextArticleSourceChannel;
- (id)nextArticleSourceChannelRating;
- (id)nextArticleSourceContentProviderId;
- (id)nextArticleSourceSections;
- (id)numOfArticlesSeenSinceLastInterstitial;
- (id)onboardStatus;
- (id)placement;
- (id)playerAspectRatio;
- (id)referralLocation;
- (id)referralPublisherInventory;
- (long long)requestedAdType;
- (void)setAdvertisementType:(id)arg1;
- (void)setAnfComponentMetadata:(id)arg1;
- (void)setContentEnvironment:(id)arg1;
- (void)setCreativeType:(id)arg1;
- (void)setCurrentArticleArticleId:(id)arg1;
- (void)setCurrentArticleIsSponsored:(id)arg1;
- (void)setCurrentArticlePublicationMetadata:(id)arg1;
- (void)setCurrentArticleRating:(id)arg1;
- (void)setCurrentArticleSourceChannel:(id)arg1;
- (void)setCurrentArticleSourceChannelRating:(id)arg1;
- (void)setCurrentArticleSourceContentProviderId:(id)arg1;
- (void)setCurrentArticleSourceSections:(id)arg1;
- (void)setCurrentIssueId:(id)arg1;
- (void)setCurrentIssueIsCurrent:(long long)arg1;
- (void)setCurrentIssueIsDraft:(long long)arg1;
- (void)setFeedMetadataCategories:(id)arg1;
- (void)setFeedMetadataChannelId:(id)arg1;
- (void)setFeedMetadataContentProviderID:(id)arg1;
- (void)setFeedMetadataKeywords:(id)arg1;
- (void)setFeedMetadataLanguages:(id)arg1;
- (void)setFeedMetadataRating:(id)arg1;
- (void)setFeedMetadataSectionId:(id)arg1;
- (void)setFeedMetadataTagId:(id)arg1;
- (void)setGroupContextAboveCategories:(id)arg1;
- (void)setGroupContextAboveChannelId:(id)arg1;
- (void)setGroupContextAboveContentProviderId:(id)arg1;
- (void)setGroupContextAboveId:(id)arg1;
- (void)setGroupContextAboveKeywords:(id)arg1;
- (void)setGroupContextAboveLanguages:(id)arg1;
- (void)setGroupContextAboveTagId:(id)arg1;
- (void)setGroupContextAboveType:(id)arg1;
- (void)setGroupContextBelowCategories:(id)arg1;
- (void)setGroupContextBelowChannelId:(id)arg1;
- (void)setGroupContextBelowContentProviderId:(id)arg1;
- (void)setGroupContextBelowId:(id)arg1;
- (void)setGroupContextBelowKeywords:(id)arg1;
- (void)setGroupContextBelowLanguages:(id)arg1;
- (void)setGroupContextBelowTagId:(id)arg1;
- (void)setGroupContextBelowType:(id)arg1;
- (void)setGroupContextCategories:(id)arg1;
- (void)setGroupContextContentProviderId:(id)arg1;
- (void)setGroupContextId:(id)arg1;
- (void)setGroupContextKeywords:(id)arg1;
- (void)setGroupContextLanguages:(id)arg1;
- (void)setGroupContextType:(id)arg1;
- (void)setIsDraft:(id)arg1;
- (void)setNextArticleArticleId:(id)arg1;
- (void)setNextArticleIsSponsored:(id)arg1;
- (void)setNextArticlePublicationMetadata:(id)arg1;
- (void)setNextArticleRating:(id)arg1;
- (void)setNextArticleSourceChannel:(id)arg1;
- (void)setNextArticleSourceChannelRating:(id)arg1;
- (void)setNextArticleSourceContentProviderId:(id)arg1;
- (void)setNextArticleSourceSections:(id)arg1;
- (void)setNumOfArticlesSeenSinceLastInterstitial:(id)arg1;
- (void)setOnboardStatus:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setPlayerAspectRatio:(id)arg1;
- (void)setReferralLocation:(id)arg1;
- (void)setReferralPublisherInventory:(id)arg1;
- (void)setRequestedAdType:(long long)arg1;
- (void)setSubscriptionType:(id)arg1;
- (void)setSuperFeedMetadata:(id)arg1;
- (id)subscriptionType;
- (id)superFeedMetadata;

@end