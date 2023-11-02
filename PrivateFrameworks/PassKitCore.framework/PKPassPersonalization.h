
@interface PKPassPersonalization : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedDescription;
    unsigned long long  _requiredPersonalizationFields;
    NSString * _termsAndConditions;
}

@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) unsigned long long requiredPersonalizationFields;
@property (nonatomic, readonly) NSString *termsAndConditions;

+ (id)passPersonalizationWithPassBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)localizedDescription;
- (unsigned long long)requiredPersonalizationFields;
- (id)termsAndConditions;

@end