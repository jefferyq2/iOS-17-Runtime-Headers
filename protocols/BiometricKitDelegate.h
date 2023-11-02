
@protocol BiometricKitDelegate <NSObject>

@optional

- (void)enrollFeedback:(NSData *)arg1;
- (void)enrollProgress:(BiometricKitEnrollProgressInfo *)arg1;
- (void)enrollResult:(BiometricKitIdentity *)arg1;
- (void)enrollUpdate:(NSData *)arg1;
- (void)homeButtonPressed;
- (void)matchResult:(BiometricKitIdentity *)arg1;
- (void)matchResult:(BiometricKitIdentity *)arg1 withDetails:(NSDictionary *)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(BiometricKitIdentity *)arg1 withDetails:(NSDictionary *)arg2;
- (void)touchIDButtonPressed:(bool)arg1;

@end