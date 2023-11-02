
@interface SFDeviceAssetTask : NSObject {
    NSBundle * _cachedBundle;
    SFDeviceAssetRequestConfiguration * _configuration;
    SFDeviceAssetQuery * _deviceAssetQuery;
    NSMutableArray * _deviceQueryParameters;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _downloadCompletionCalled;
    NSError * _error;
    NSBundle * _fallbackBundle;
    NSBundle * _imperfectMatchBundle;
    NSBundle * _matchBundle;
    bool  _queryResultCalled;
    NSObject<OS_dispatch_source> * _timer;
    bool  _useProcessLocalCache;
}

@property (nonatomic, readonly) NSBundle *cachedBundle;
@property (nonatomic, readonly) SFDeviceAssetRequestConfiguration *configuration;
@property (nonatomic, readonly) SFDeviceAssetQuery *deviceAssetQuery;
@property (nonatomic, readonly) NSMutableArray *deviceQueryParameters;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool downloadCompletionCalled;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSBundle *fallbackBundle;
@property (nonatomic, readonly) NSBundle *imperfectMatchBundle;
@property (nonatomic, readonly) NSBundle *matchBundle;
@property (nonatomic) bool queryResultCalled;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) bool useProcessLocalCache;

- (void).cxx_destruct;
- (id)bundleAtURL:(id)arg1 error:(id*)arg2;
- (id)bundleURLFromAssetURL:(id)arg1;
- (id)cachedBundle;
- (void)cancelTimeout;
- (bool)completeIfPossible;
- (void)completeWithBundle:(id)arg1 isFallback:(bool)arg2 isCached:(bool)arg3;
- (id)configuration;
- (void)createQueryParameters;
- (id)deviceAssetQuery;
- (id)deviceQueryParameters;
- (id)dispatchQueue;
- (bool)downloadCompletionCalled;
- (id)error;
- (id)fallbackBundle;
- (id)imperfectMatchBundle;
- (id)initWithDeviceQuery:(id)arg1 requestConfiguration:(id)arg2 dispatchQueue:(id)arg3 useProcessLocalCache:(bool)arg4;
- (id)matchBundle;
- (bool)queryResultCalled;
- (void)setDownloadCompletionCalled:(bool)arg1;
- (void)setQueryResultCalled:(bool)arg1;
- (id)timer;
- (bool)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isImperfectMatch:(bool)arg4 isCached:(bool)arg5;
- (bool)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isImperfectMatch:(bool)arg4 isCached:(bool)arg5;
- (bool)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(bool)arg3 isImperfectMatch:(bool)arg4 isCached:(bool)arg5;
- (bool)useProcessLocalCache;

@end