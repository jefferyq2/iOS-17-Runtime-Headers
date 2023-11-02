
@interface PKTransitPartner : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _localizedDisplayName;
    long long  _maxNotificationCount;
    NSURL * _purchaseURL;
    NSSet * _supportedTransitNetworkIdentifiers;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic) long long maxNotificationCount;
@property (nonatomic, readonly, copy) NSURL *purchaseURL;
@property (nonatomic, readonly, copy) NSSet *supportedTransitNetworkIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2;
- (id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 purchaseURL:(id)arg3 supportedTransitNetworkIdentifiers:(id)arg4;
- (id)localizedDisplayName;
- (long long)maxNotificationCount;
- (id)purchaseURL;
- (void)setMaxNotificationCount:(long long)arg1;
- (id)supportedTransitNetworkIdentifiers;

@end