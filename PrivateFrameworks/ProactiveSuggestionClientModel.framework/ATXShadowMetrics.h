
@interface ATXShadowMetrics : NSObject {
    unsigned long long  _numberOfCachedHighConfidencePredictions;
    unsigned long long  _numberOfCachedLowConfidencePredictions;
    unsigned long long  _numberOfCachedMediumConfidencePredictions;
    unsigned long long  _numberOfCachedPredictions;
    unsigned long long  _numberOfCorrectCachedPredictions;
    unsigned long long  _numberOfCorrectHighConfidenceCachedPredictions;
    unsigned long long  _numberOfCorrectLowConfidenceCachedPredictions;
    unsigned long long  _numberOfCorrectMediumConfidenceCachedPredictions;
    unsigned long long  _numberOfCorrectTop1CachedPrediction;
    unsigned long long  _numberOfCorrectTop2CachedPredictions;
    unsigned long long  _numberOfCorrectTop4CachedPredictions;
    unsigned long long  _numberOfCorrectTop8CachedPredictions;
    unsigned long long  _numberOfPredictionCacheRefreshes;
    unsigned long long  _numberOfShadowEventCacheHits;
    unsigned long long  _numberOfShadowEventHighConfidenceCacheHits;
    unsigned long long  _numberOfShadowEventLowConfidenceCacheHits;
    unsigned long long  _numberOfShadowEventMediumConfidenceCacheHits;
    unsigned long long  _numberOfShadowEventTop1CacheHits;
    unsigned long long  _numberOfShadowEventTop2CacheHits;
    unsigned long long  _numberOfShadowEventTop4CacheHits;
    unsigned long long  _numberOfShadowEventTop8CacheHits;
    unsigned long long  _numberOfShadowEvents;
    double  _sumOfShadowEventCacheHitReciprocalRanks;
}

@property (nonatomic, readonly) double meanReciprocalRank;
@property (nonatomic) unsigned long long numberOfCachedHighConfidencePredictions;
@property (nonatomic) unsigned long long numberOfCachedLowConfidencePredictions;
@property (nonatomic) unsigned long long numberOfCachedMediumConfidencePredictions;
@property (nonatomic) unsigned long long numberOfCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectHighConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectLowConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectMediumConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectTop1CachedPrediction;
@property (nonatomic) unsigned long long numberOfCorrectTop2CachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectTop4CachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectTop8CachedPredictions;
@property (nonatomic) unsigned long long numberOfPredictionCacheRefreshes;
@property (nonatomic) unsigned long long numberOfShadowEventCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventHighConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventLowConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventMediumConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop1CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop2CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop4CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop8CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEvents;
@property (nonatomic, readonly) double precisionAllCachedPredictions;
@property (nonatomic, readonly) double precisionAtTop1CachedPrediction;
@property (nonatomic, readonly) double precisionAtTop2CachedPredictions;
@property (nonatomic, readonly) double precisionAtTop4CachedPredictions;
@property (nonatomic, readonly) double precisionAtTop8CachedPredictions;
@property (nonatomic, readonly) double precisionOfHighConfidenceCachedPredictions;
@property (nonatomic, readonly) double precisionOfLowConfidenceCachedPredictions;
@property (nonatomic, readonly) double precisionOfMediumConfidenceCachedPredictions;
@property (nonatomic, readonly) double recallAllCachedPredictions;
@property (nonatomic, readonly) double recallAtTop1CachedPrediction;
@property (nonatomic, readonly) double recallAtTop2CachedPredictions;
@property (nonatomic, readonly) double recallAtTop4CachedPredictions;
@property (nonatomic, readonly) double recallAtTop8CachedPredictions;
@property (nonatomic, readonly) double recallOfHighConfidenceCachedPredictions;
@property (nonatomic, readonly) double recallOfLowConfidenceCachedPredictions;
@property (nonatomic, readonly) double recallOfMediumConfidenceCachedPredictions;
@property (nonatomic) double sumOfShadowEventCacheHitReciprocalRanks;

- (id)asCoreAnalyticsMessageWithModelId:(id)arg1 executableType:(long long)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXShadowMetrics:(id)arg1;
- (double)meanReciprocalRank;
- (unsigned long long)numberOfCachedHighConfidencePredictions;
- (unsigned long long)numberOfCachedLowConfidencePredictions;
- (unsigned long long)numberOfCachedMediumConfidencePredictions;
- (unsigned long long)numberOfCachedPredictions;
- (unsigned long long)numberOfCorrectCachedPredictions;
- (unsigned long long)numberOfCorrectHighConfidenceCachedPredictions;
- (unsigned long long)numberOfCorrectLowConfidenceCachedPredictions;
- (unsigned long long)numberOfCorrectMediumConfidenceCachedPredictions;
- (unsigned long long)numberOfCorrectTop1CachedPrediction;
- (unsigned long long)numberOfCorrectTop2CachedPredictions;
- (unsigned long long)numberOfCorrectTop4CachedPredictions;
- (unsigned long long)numberOfCorrectTop8CachedPredictions;
- (unsigned long long)numberOfPredictionCacheRefreshes;
- (unsigned long long)numberOfShadowEventCacheHits;
- (unsigned long long)numberOfShadowEventHighConfidenceCacheHits;
- (unsigned long long)numberOfShadowEventLowConfidenceCacheHits;
- (unsigned long long)numberOfShadowEventMediumConfidenceCacheHits;
- (unsigned long long)numberOfShadowEventTop1CacheHits;
- (unsigned long long)numberOfShadowEventTop2CacheHits;
- (unsigned long long)numberOfShadowEventTop4CacheHits;
- (unsigned long long)numberOfShadowEventTop8CacheHits;
- (unsigned long long)numberOfShadowEvents;
- (double)precisionAllCachedPredictions;
- (double)precisionAtTop1CachedPrediction;
- (double)precisionAtTop2CachedPredictions;
- (double)precisionAtTop4CachedPredictions;
- (double)precisionAtTop8CachedPredictions;
- (double)precisionOfHighConfidenceCachedPredictions;
- (double)precisionOfLowConfidenceCachedPredictions;
- (double)precisionOfMediumConfidenceCachedPredictions;
- (double)recallAllCachedPredictions;
- (double)recallAtTop1CachedPrediction;
- (double)recallAtTop2CachedPredictions;
- (double)recallAtTop4CachedPredictions;
- (double)recallAtTop8CachedPredictions;
- (double)recallOfHighConfidenceCachedPredictions;
- (double)recallOfLowConfidenceCachedPredictions;
- (double)recallOfMediumConfidenceCachedPredictions;
- (void)setNumberOfCachedHighConfidencePredictions:(unsigned long long)arg1;
- (void)setNumberOfCachedLowConfidencePredictions:(unsigned long long)arg1;
- (void)setNumberOfCachedMediumConfidencePredictions:(unsigned long long)arg1;
- (void)setNumberOfCachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectCachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectHighConfidenceCachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectLowConfidenceCachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectMediumConfidenceCachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectTop1CachedPrediction:(unsigned long long)arg1;
- (void)setNumberOfCorrectTop2CachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectTop4CachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfCorrectTop8CachedPredictions:(unsigned long long)arg1;
- (void)setNumberOfPredictionCacheRefreshes:(unsigned long long)arg1;
- (void)setNumberOfShadowEventCacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventHighConfidenceCacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventLowConfidenceCacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventMediumConfidenceCacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventTop1CacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventTop2CacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventTop4CacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEventTop8CacheHits:(unsigned long long)arg1;
- (void)setNumberOfShadowEvents:(unsigned long long)arg1;
- (void)setSumOfShadowEventCacheHitReciprocalRanks:(double)arg1;
- (double)sumOfShadowEventCacheHitReciprocalRanks;

@end