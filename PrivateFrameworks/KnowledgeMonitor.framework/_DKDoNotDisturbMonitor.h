
@interface _DKDoNotDisturbMonitor : _DKMonitor <DNDStateUpdateListener> {
    DNDStateService * _dndStateService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DNDStateService *dndStateService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventWithState:(bool)arg1;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)dndStateService;
- (void)setDndStateService:(id)arg1;
- (void)start;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)stop;

@end