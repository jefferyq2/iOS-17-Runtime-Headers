
@protocol MSStorageProtocol <NSObject>

@required

- (void)deactivate;
- (void)deactivateRemoveAllFiles:(bool)arg1;
- (void)didFinishUsingAssets:(NSArray *)arg1;

@end