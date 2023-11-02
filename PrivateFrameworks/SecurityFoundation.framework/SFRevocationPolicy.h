
@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {
    id  _revocationPolicyInternal;
}

@property (nonatomic) long long networkLookup;
@property (nonatomic) unsigned long long revocationMethods;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2;
- (long long)networkLookup;
- (unsigned long long)revocationMethods;
- (void)setNetworkLookup:(long long)arg1;
- (void)setRevocationMethods:(unsigned long long)arg1;

@end