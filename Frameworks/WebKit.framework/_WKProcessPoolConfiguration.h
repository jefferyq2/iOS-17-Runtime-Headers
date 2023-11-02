
@interface _WKProcessPoolConfiguration : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { 
        struct type { 
            unsigned char __lx[144]; 
        } data; 
    }  _processPoolConfiguration;
    bool  _shouldCaptureAudioInUIProcess;
}

@property (getter=isJITEnabled, nonatomic) bool JITEnabled;
@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, copy) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) bool alwaysKeepAndReuseSwappedProcesses;
@property (nonatomic, copy) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) bool alwaysRunsAtBackgroundPriority;
@property (nonatomic) bool attrStyleEnabled;
@property (nonatomic, copy) NSArray *cachePartitionedURLSchemes;
@property (nonatomic) bool configureJSCForTesting;
@property (nonatomic, copy) NSSet *customClassesForParameterCoder;
@property (nonatomic, copy) NSString *customWebContentServiceBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long diskCacheSizeOverride;
@property (nonatomic) bool diskCacheSpeculativeValidationEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic, copy) NSURL *injectedBundleURL;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) bool pageCacheEnabled;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) struct { unsigned int x1[8]; } presentingApplicationProcessToken;
@property (nonatomic) bool prewarmsProcessesAutomatically;
@property (nonatomic) bool processSwapsOnNavigation;
@property (nonatomic) bool processSwapsOnNavigationWithinSameNonHTTPFamilyProtocol;
@property (nonatomic) bool shouldCaptureAudioInUIProcess;
@property (nonatomic) bool shouldTakeUIBackgroundAssertion;
@property (nonatomic) bool shouldThrowExceptionForGlobalConstantRedeclaration;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, copy) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timeZoneOverride;
@property (nonatomic) bool usesSingleWebProcess;
@property (nonatomic) bool usesWebProcessCache;
@property (nonatomic) unsigned long long wirelessContextIdentifier;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)additionalReadAccessAllowedURLs;
- (bool)alwaysKeepAndReuseSwappedProcesses;
- (id)alwaysRevalidatedURLSchemes;
- (bool)alwaysRunsAtBackgroundPriority;
- (bool)attrStyleEnabled;
- (id)cachePartitionedURLSchemes;
- (bool)configureJSCForTesting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customClassesForParameterCoder;
- (id)customWebContentServiceBundleIdentifier;
- (void)dealloc;
- (id)description;
- (long long)diskCacheSizeOverride;
- (bool)diskCacheSpeculativeValidationEnabled;
- (bool)ignoreSynchronousMessagingTimeoutsForTesting;
- (id)init;
- (id)injectedBundleURL;
- (bool)isJITEnabled;
- (unsigned long long)maximumProcessCount;
- (bool)pageCacheEnabled;
- (int)presentingApplicationPID;
- (struct { unsigned int x1[8]; })presentingApplicationProcessToken;
- (bool)prewarmsProcessesAutomatically;
- (bool)processSwapsOnNavigation;
- (bool)processSwapsOnNavigationWithinSameNonHTTPFamilyProtocol;
- (void)setAdditionalReadAccessAllowedURLs:(id)arg1;
- (void)setAlwaysKeepAndReuseSwappedProcesses:(bool)arg1;
- (void)setAlwaysRevalidatedURLSchemes:(id)arg1;
- (void)setAlwaysRunsAtBackgroundPriority:(bool)arg1;
- (void)setAttrStyleEnabled:(bool)arg1;
- (void)setCachePartitionedURLSchemes:(id)arg1;
- (void)setConfigureJSCForTesting:(bool)arg1;
- (void)setCustomClassesForParameterCoder:(id)arg1;
- (void)setCustomWebContentServiceBundleIdentifier:(id)arg1;
- (void)setDiskCacheSizeOverride:(long long)arg1;
- (void)setDiskCacheSpeculativeValidationEnabled:(bool)arg1;
- (void)setIgnoreSynchronousMessagingTimeoutsForTesting:(bool)arg1;
- (void)setInjectedBundleURL:(id)arg1;
- (void)setJITEnabled:(bool)arg1;
- (void)setMaximumProcessCount:(unsigned long long)arg1;
- (void)setPageCacheEnabled:(bool)arg1;
- (void)setPresentingApplicationPID:(int)arg1;
- (void)setPresentingApplicationProcessToken:(struct { unsigned int x1[8]; })arg1;
- (void)setPrewarmsProcessesAutomatically:(bool)arg1;
- (void)setProcessSwapsOnNavigation:(bool)arg1;
- (void)setProcessSwapsOnNavigationWithinSameNonHTTPFamilyProtocol:(bool)arg1;
- (void)setShouldCaptureAudioInUIProcess:(bool)arg1;
- (void)setShouldTakeUIBackgroundAssertion:(bool)arg1;
- (void)setShouldThrowExceptionForGlobalConstantRedeclaration:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeZoneOverride:(id)arg1;
- (void)setUsesSingleWebProcess:(bool)arg1;
- (void)setUsesWebProcessCache:(bool)arg1;
- (void)setWirelessContextIdentifier:(unsigned long long)arg1;
- (bool)shouldCaptureAudioInUIProcess;
- (bool)shouldTakeUIBackgroundAssertion;
- (bool)shouldThrowExceptionForGlobalConstantRedeclaration;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)timeZoneOverride;
- (bool)usesSingleWebProcess;
- (bool)usesWebProcessCache;
- (unsigned long long)wirelessContextIdentifier;

@end