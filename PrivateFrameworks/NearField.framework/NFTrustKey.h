
@interface NFTrustKey : NFTrustObject {
    NSNumber * _counterLimit;
    NSNumber * _counterValue;
    NSString * _identifier;
    NSString * _keyAttestation;
    NSString * _keyAttestationAuthority;
    NSArray * _localValidations;
    NSData * _publicKey;
}

@property (nonatomic, retain) NSNumber *counterLimit;
@property (nonatomic, retain) NSNumber *counterValue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *keyAttestation;
@property (nonatomic, retain) NSString *keyAttestationAuthority;
@property (nonatomic, retain) NSArray *localValidations;
@property (nonatomic, retain) NSData *publicKey;

+ (id)keyWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)counterLimit;
- (id)counterValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)keyAttestation;
- (id)keyAttestationAuthority;
- (id)localValidations;
- (id)publicKey;
- (void)setCounterLimit:(id)arg1;
- (void)setCounterValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyAttestation:(id)arg1;
- (void)setKeyAttestationAuthority:(id)arg1;
- (void)setLocalValidations:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end