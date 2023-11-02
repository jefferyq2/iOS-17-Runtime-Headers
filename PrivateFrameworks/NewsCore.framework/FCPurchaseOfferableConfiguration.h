
@interface FCPurchaseOfferableConfiguration : NSObject {
    bool  _allowsPublisherPadApp;
    bool  _allowsPublisherPhoneApp;
    bool  _allowsPublisherWebsite;
    bool  _preferredOffer;
    NSString * _purchaseID;
}

@property (nonatomic) bool allowsPublisherPadApp;
@property (nonatomic) bool allowsPublisherPhoneApp;
@property (nonatomic) bool allowsPublisherWebsite;
@property (nonatomic) bool preferredOffer;
@property (nonatomic, copy) NSString *purchaseID;

- (void).cxx_destruct;
- (bool)allowsPublisherPadApp;
- (bool)allowsPublisherPhoneApp;
- (bool)allowsPublisherWebsite;
- (id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(bool)arg2 allowsPublisherPadApp:(bool)arg3 allowsPublisherWebsite:(bool)arg4 preferredOffer:(bool)arg5;
- (bool)preferredOffer;
- (id)purchaseID;
- (void)setAllowsPublisherPadApp:(bool)arg1;
- (void)setAllowsPublisherPhoneApp:(bool)arg1;
- (void)setAllowsPublisherWebsite:(bool)arg1;
- (void)setPreferredOffer:(bool)arg1;
- (void)setPurchaseID:(id)arg1;

@end