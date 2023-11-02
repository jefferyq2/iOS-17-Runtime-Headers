
@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountProviderAuthenticationToken;
    NSArray * _applicationAccountProviders;
    NSArray * _attributeNames;
    NSString * _channelIdentifier;
    NSArray * _featuredAccountProviderIdentifiers;
    bool  _forceAuthentication;
    bool  _includeAccountProviderIdentifier;
    bool  _includeAuthenticationExpirationDate;
    bool  _interruptionAllowed;
    NSString * _localizedVideoTitle;
    NSArray * _supportedAccountProviderIdentifiers;
    NSArray * _supportedAuthenticationSchemes;
    NSString * _verificationToken;
}

@property (nonatomic, copy) NSString *accountProviderAuthenticationToken;
@property (nonatomic, copy) NSArray *applicationAccountProviders;
@property (nonatomic, copy) NSArray *attributeNames;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSArray *featuredAccountProviderIdentifiers;
@property (nonatomic) bool forceAuthentication;
@property (nonatomic) bool includeAccountProviderIdentifier;
@property (nonatomic) bool includeAuthenticationExpirationDate;
@property (getter=isInterruptionAllowed, nonatomic) bool interruptionAllowed;
@property (nonatomic, copy) NSString *localizedVideoTitle;
@property (nonatomic, copy) NSArray *supportedAccountProviderIdentifiers;
@property (nonatomic, copy) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, copy) NSString *verificationToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountProviderAuthenticationToken;
- (id)applicationAccountProviders;
- (id)attributeNames;
- (id)channelIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredAccountProviderIdentifiers;
- (bool)forceAuthentication;
- (unsigned long long)hash;
- (bool)includeAccountProviderIdentifier;
- (bool)includeAuthenticationExpirationDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInterruptionAllowed;
- (id)localizedVideoTitle;
- (void)setAccountProviderAuthenticationToken:(id)arg1;
- (void)setApplicationAccountProviders:(id)arg1;
- (void)setAttributeNames:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setFeaturedAccountProviderIdentifiers:(id)arg1;
- (void)setForceAuthentication:(bool)arg1;
- (void)setIncludeAccountProviderIdentifier:(bool)arg1;
- (void)setIncludeAuthenticationExpirationDate:(bool)arg1;
- (void)setInterruptionAllowed:(bool)arg1;
- (void)setLocalizedVideoTitle:(id)arg1;
- (void)setSupportedAccountProviderIdentifiers:(id)arg1;
- (void)setSupportedAuthenticationSchemes:(id)arg1;
- (void)setVerificationToken:(id)arg1;
- (id)supportedAccountProviderIdentifiers;
- (id)supportedAuthenticationSchemes;
- (id)verificationToken;

@end