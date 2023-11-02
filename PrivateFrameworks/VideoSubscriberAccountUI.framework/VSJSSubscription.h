
@interface VSJSSubscription : IKJSObject <NSCopying, VSJSSubscription> {
    long long  _accessLevel;
    NSString * _billingIdentifier;
    NSString * _bundleId;
    NSDate * _expirationDate;
    NSArray * _tierIdentifiers;
}

@property (nonatomic) long long accessLevel;
@property (nonatomic, copy) NSString *billingIdentifier;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *tierIdentifiers;

+ (id)toVSSubscriptions:(id)arg1;

- (void).cxx_destruct;
- (long long)accessLevel;
- (id)billingIdentifier;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expirationDate;
- (id)init;
- (void)setAccessLevel:(long long)arg1;
- (void)setBillingIdentifier:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setTierIdentifiers:(id)arg1;
- (id)tierIdentifiers;
- (id)toVSSubscription;

@end