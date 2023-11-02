
@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)arg1;
+ (id)_titleForProtectionSpace:(id)arg1;

- (void)cancelAuthentication;
- (long long)failureCount;
- (bool)hasPassword;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (id)password;
- (id)sender;
- (void)useCredential:(id)arg1;
- (id)user;

@end