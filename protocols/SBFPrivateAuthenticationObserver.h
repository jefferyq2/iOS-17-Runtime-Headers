
@protocol SBFPrivateAuthenticationObserver <NSObject>

@optional

- (void)extendedKeybagLockStateChanged:(bool)arg1;
- (void)temporaryBlockStatusChanged;

@end