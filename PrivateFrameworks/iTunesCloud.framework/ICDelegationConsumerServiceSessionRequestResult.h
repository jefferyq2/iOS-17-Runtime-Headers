
@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {
    ICDelegateToken * _delegateToken;
    NSError * _resultError;
    NSString * _storefrontIdentifier;
}

@property (nonatomic, readonly, copy) ICDelegateToken *delegateToken;
@property (nonatomic, readonly, copy) NSError *resultError;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;

- (void).cxx_destruct;
- (id)delegateToken;
- (id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3;
- (id)resultError;
- (id)storefrontIdentifier;

@end