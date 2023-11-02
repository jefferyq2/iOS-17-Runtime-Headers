
@interface SKPaymentDiscount : NSObject {
    id  _internal;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *keyIdentifier;
@property (nonatomic, readonly, copy) NSUUID *nonce;
@property (nonatomic, readonly, copy) NSString *signature;
@property (nonatomic, readonly, copy) NSNumber *timestamp;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5;
- (id)keyIdentifier;
- (id)nonce;
- (id)signature;
- (id)timestamp;

@end