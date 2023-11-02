
@interface CDPStateHandlerResult : NSObject {
    bool  _cloudDataProtectionEnabled;
    NSError * _error;
    unsigned long long  _peeriCloudKeychainState;
    bool  _shouldCompleteSignIn;
}

@property bool cloudDataProtectionEnabled;
@property (retain) NSError *error;
@property unsigned long long peeriCloudKeychainState;
@property bool shouldCompleteSignIn;

+ (id)resultWithCloudDataProtectionEnabled:(bool)arg1 shouldCompleteSignIn:(bool)arg2 error:(id)arg3;
+ (id)resultWithCloudDataProtectionEnabled:(bool)arg1 shouldCompleteSignIn:(bool)arg2 peeriCloudKeychainState:(unsigned long long)arg3 error:(id)arg4;
+ (id)resultWithError:(id)arg1;
+ (id)successResult;

- (void).cxx_destruct;
- (bool)cloudDataProtectionEnabled;
- (id)error;
- (unsigned long long)peeriCloudKeychainState;
- (void)setCloudDataProtectionEnabled:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setPeeriCloudKeychainState:(unsigned long long)arg1;
- (void)setShouldCompleteSignIn:(bool)arg1;
- (bool)shouldCompleteSignIn;

@end