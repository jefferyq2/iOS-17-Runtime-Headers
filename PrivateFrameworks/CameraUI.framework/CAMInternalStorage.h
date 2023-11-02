
@interface CAMInternalStorage : NSObject <CAMPurgeableStorageContainer> {
    NSByteCountFormatter * __byteFormatter;
    NSObject<OS_dispatch_queue> * __cacheDeleteQueryQueue;
    struct { 
        long long freeBytes; 
        long long fastPurgeableBytes; 
        long long slowPurgeableBytes; 
    }  __cachedEstimatedSpace;
    long long  __cachedLowDiskThreshold;
    long long  __fastPurgeThreshold;
    NSDate * __lastPurgeRequestUpdateTime;
    long long  __proResMinimumDiskUsageThreshold;
    bool  __purging;
    struct CacheDeleteToken { } * __queryQueue_currentToken;
    bool  __shouldCancelNextPurge;
    NSURL * __storageMountPoint;
    <CAMPurgeableStorageContainerDelegate> * _delegate;
    CAMCaptureGraphConfiguration * _graphConfiguration;
}

@property (nonatomic, readonly) NSByteCountFormatter *_byteFormatter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue;
@property (setter=_setCachedEstimatedSpace:, nonatomic) struct { long long x1; long long x2; long long x3; } _cachedEstimatedSpace;
@property (nonatomic) long long _cachedLowDiskThreshold;
@property (setter=_setFastPurgeThreshold:, nonatomic) long long _fastPurgeThreshold;
@property (nonatomic, retain) NSDate *_lastPurgeRequestUpdateTime;
@property (setter=_setProResMinimumDiskUsageThreshold:, nonatomic) long long _proResMinimumDiskUsageThreshold;
@property (setter=_setPurging:, nonatomic) bool _purging;
@property (nonatomic) struct CacheDeleteToken { }*_queryQueue_currentToken;
@property (setter=_setShouldCancelNextPurge:, nonatomic) bool _shouldCancelNextPurge;
@property (nonatomic, retain) NSURL *_storageMountPoint;
@property (nonatomic, readonly) long long _totalBytes;
@property (getter=isCancelingPurge, nonatomic, readonly) bool cancelingPurge;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMPurgeableStorageContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAMCaptureGraphConfiguration *graphConfiguration;
@property (getter=hasPurgeableResources, nonatomic, readonly) bool hasPurgeableResources;
@property (readonly) unsigned long long hash;
@property (getter=isPurging, nonatomic, readonly) bool purging;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalFreeBytes;

- (void).cxx_destruct;
- (long long)_absoluteMinimumBytesForMode:(long long)arg1;
- (double)_availableRecordingTimeInMinutesForFreeBytes:(long long)arg1 minimumDiskUsageThreshold:(long long)arg2 bytesPerMinute:(long long)arg3;
- (id)_byteFormatter;
- (id)_cacheDeleteQueryQueue;
- (id)_cacheDeleteVolume;
- (struct { long long x1; long long x2; long long x3; })_cachedEstimatedSpace;
- (long long)_cachedLowDiskThreshold;
- (void)_copyAndApplyByteStringFormattingFromDictionary:(id)arg1 toDictionary:(id)arg2 keys:(id)arg3;
- (void)_copyFromDictionary:(id)arg1 toDictionary:(id)arg2 keys:(id)arg3;
- (long long)_fastPurgeThreshold;
- (long long)_fastPurgeThresholdForRequestType:(long long)arg1;
- (id)_lastPurgeRequestUpdateTime;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (void)_loadFreeDiskThresholds;
- (void)_notifyDelegateOfPurgeCompletionAndUpdateContinuousPurgeWithForceStopWithReason:(id)arg1 analyticsEvent:(id)arg2;
- (long long)_preferredMinimumBytesForConfiguration:(id)arg1;
- (long long)_proResMinimumDiskUsageThreshold;
- (void)_purgeFastPurgeableSpaceWithThreshold:(long long)arg1 calledFromPurgeCompletion:(bool)arg2 forceStopReason:(id)arg3 analyticsEvent:(id)arg4;
- (bool)_purging;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg1;
- (void)_queryQueue_cancelCurrentPurge;
- (struct CacheDeleteToken { }*)_queryQueue_currentToken;
- (void)_queryQueue_purgeFastPurgeableResourcesWithThreshold:(long long)arg1 analyticsEvent:(id)arg2;
- (struct { long long x1; long long x2; long long x3; })_queryQueue_queryAvailableSpaceAndUpdateCachedEstimatesForBytesPerMinute:(long long)arg1 minimumDiskUsageThreshold:(long long)arg2;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)arg1 preferredFreeBytes:(long long)arg2;
- (long long)_requestTypeFromNonZeroFastPurgeThreshold:(long long)arg1;
- (void)_setCachedEstimatedSpace:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)_setFastPurgeThreshold:(long long)arg1;
- (void)_setProResMinimumDiskUsageThreshold:(long long)arg1;
- (void)_setPurging:(bool)arg1;
- (void)_setShouldCancelNextPurge:(bool)arg1;
- (bool)_shouldCancelNextPurge;
- (void)_statMountPoint:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1;
- (id)_storageMountPoint;
- (id)_stringFromAvailableSpace:(struct { long long x1; long long x2; long long x3; })arg1;
- (id)_stringFromByteCount:(long long)arg1;
- (long long)_totalBytes;
- (void)_updateAvailablePurgeableSpaceAsync;
- (void)_updatePurgeRequestStateForConfiguration:(id)arg1 totalFreeBytes:(long long)arg2;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)arg1;
- (void)cancelPurge;
- (id)delegate;
- (id)graphConfiguration;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2 verbose:(bool)arg3;
- (bool)hasPurgeableResources;
- (id)init;
- (bool)isCancelingPurge;
- (bool)isPurging;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)arg1;
- (void)purgeFastPurgeableSpaceWithRequestType:(long long)arg1;
- (void)reportLowDiskEventWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGraphConfiguration:(id)arg1;
- (void)set_cachedLowDiskThreshold:(long long)arg1;
- (void)set_lastPurgeRequestUpdateTime:(id)arg1;
- (void)set_queryQueue_currentToken:(struct CacheDeleteToken { }*)arg1;
- (void)set_storageMountPoint:(id)arg1;
- (long long)totalFreeBytes;

@end