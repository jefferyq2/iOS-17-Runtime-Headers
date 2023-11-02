
@protocol TSKAccessControllerDelegate <NSObject>

@optional

- (void)didAcquireReadLock;
- (void)willRelinquishReadLock;

@end