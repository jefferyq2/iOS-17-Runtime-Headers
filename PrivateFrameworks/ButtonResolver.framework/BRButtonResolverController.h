
@interface BRButtonResolverController : NSObject {
    NSSet * _interfaces;
}

@property (nonatomic, readonly) bool isReady;
@property (nonatomic, readonly) unsigned long long maxAssetSlots;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) unsigned long long unusedAssetSlots;

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (bool)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3;
- (id)propertyList;
- (void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (unsigned long long)unusedAssetSlots;

@end