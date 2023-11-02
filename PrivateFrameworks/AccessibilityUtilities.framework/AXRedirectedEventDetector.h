
@interface AXRedirectedEventDetector : NSObject {
    AXDispatchTimer * _flushEventsTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recentEvents;
}

@property (nonatomic, retain) AXDispatchTimer *flushEventsTimer;
@property (nonatomic, retain) NSMutableArray *recentEvents;

+ (void)flushEvents;
+ (void)setFlushEventsTimerDelay:(double)arg1;

- (void).cxx_destruct;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_flushEventsIfNecessary;
- (void)addEvent:(id)arg1;
- (id)flushEventsTimer;
- (id)init;
- (bool)isRedirectedEvent:(id)arg1;
- (id)recentEvents;
- (void)setFlushEventsTimer:(id)arg1;
- (void)setRecentEvents:(id)arg1;

@end