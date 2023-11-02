
@interface SKUIDonationConfiguration : NSObject {
    NSArray * _charities;
    NSMutableDictionary * _charityImages;
    SKUIClientContext * _clientContext;
    NSURL * _donationPurchaseURL;
    NSURL * _donationValidationURL;
    NSHashTable * _observers;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) NSArray *allCharities;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSURL *donationPurchaseURL;
@property (nonatomic, readonly) NSURL *donationValidationURL;

- (void).cxx_destruct;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(id /* block */)arg3;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)allCharities;
- (id)charityForIdentifier:(id)arg1;
- (id)clientContext;
- (id)donationPurchaseURL;
- (id)donationValidationURL;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (void)loadConfigurationWithCompletionBlock:(id /* block */)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (id)logoImageForCharity:(id)arg1;
- (void)removeObserver:(id)arg1;

@end