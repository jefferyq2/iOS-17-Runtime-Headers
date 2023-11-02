
@interface PKMiniDiscoveryCard : PKDiscoveryCard {
    long long  _miniCardTemplateType;
}

@property (nonatomic, readonly) long long miniCardTemplateType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)miniCardTemplateType;

@end