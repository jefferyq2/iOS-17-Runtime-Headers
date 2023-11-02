
@interface AVTimebaseObserver : NSObject {
    double  _currentRate;
    bool  _invalid;
    bool  _isObservingTimebase;
    double  _lastRate;
    struct OpaqueCMTimebase { } * _timebase;
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSObject<OS_dispatch_source> * _timerSource;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) bool invalidated;
@property (readonly) struct OpaqueCMTimebase { }*timebase;
@property (getter=_weakReference, nonatomic, readonly) AVWeakReference *weakReference;

- (void)_attachTimerSourceToTimebase;
- (void)_effectiveRateChanged;
- (void)_finishInitializationWithTimerEventHandler:(id /* block */)arg1;
- (void)_handleTimeDiscontinuity;
- (void)_reallyInvalidate;
- (void)_removeTimebaseFromTimerSource;
- (void)_resetNextFireTime;
- (void)_startObservingTimebaseNotifications;
- (void)_stopObservingTimebaseNotifications;
- (id)_weakReference;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)invalidated;
- (struct OpaqueCMTimebase { }*)timebase;

@end