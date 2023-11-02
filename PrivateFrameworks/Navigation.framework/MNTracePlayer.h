
@interface MNTracePlayer : NSObject <MNTimeProvider, MNTracePlayerSchedulerDelegate> {
    double  _duration;
    MNTracePlayerETAUpdater * _etaUpdater;
    MNTracePlayerTimelineStream * _etaUpdatesStream;
    bool  _isPaused;
    bool  _isPlaying;
    MNLocation * _lastReportedLocation;
    MNTracePlayerTimelineStream * _locationStream;
    MNTracePlayerTimelineStream * _networkEventsStream;
    GEOObserverHashTable * _observers;
    NSMutableArray * _processedWaypointEvents;
    MNTracePlayerScheduler * _scheduler;
    bool  _shouldPlayETARequests;
    bool  _shouldPlayNetworkEvents;
    bool  _shouldUpdateRouteWhenJumping;
    double  _speedMultiplier;
    MNTrace * _trace;
    double  _traceStartTimestamp;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) double position;
@property (nonatomic, readonly) MNSessionUpdateManager *sessionUpdater;
@property (nonatomic) bool shouldPlayETARequests;
@property (nonatomic) bool shouldPlayNetworkEvents;
@property (nonatomic) bool shouldUpdateRouteWhenJumping;
@property (nonatomic) double speedMultiplier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNTrace *trace;

- (void).cxx_destruct;
- (id)_changeRouteRowForTimestamp:(double)arg1;
- (void)_createTimelineStreams;
- (id)_directionsRowForChangeRouteRow:(id)arg1;
- (unsigned long long)_directionsRowIndexBeforeTimestamp:(double)arg1;
- (id)_etauRowForChangeRouteRow:(id)arg1;
- (id)_locationRowBeforeTimestamp:(double)arg1;
- (id)_locationWithCurrentDate:(id)arg1;
- (id)_routeForRouteChangeRow:(id)arg1;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (id)guidanceEventNearTimestamp:(double)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id*)arg2;
- (id)initWithTrace:(id)arg1;
- (bool)isPaused;
- (bool)isPlaying;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (void)pause;
- (double)position;
- (void)registerObserver:(id)arg1;
- (bool)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id /* block */)arg2;
- (void)resume;
- (id)sessionUpdater;
- (void)setShouldPlayETARequests:(bool)arg1;
- (void)setShouldPlayNetworkEvents:(bool)arg1;
- (void)setShouldUpdateRouteWhenJumping:(bool)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (bool)shouldPlayETARequests;
- (bool)shouldPlayNetworkEvents;
- (bool)shouldUpdateRouteWhenJumping;
- (void)skipByTimeInterval:(double)arg1;
- (double)speedMultiplier;
- (void)start;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (void)stop;
- (id)trace;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;
- (void)unregisterObserver:(id)arg1;

@end