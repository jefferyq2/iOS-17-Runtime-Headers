
@interface SFLocationManager : NSObject {
    CLInUseAssertion * _assertion;
    NSCountedSet * _clients;
    NSMutableSet * _foregroundApplications;
    BKSApplicationStateMonitor * _stateMonitor;
}

+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_setApplication:(id)arg1 isForeground:(bool)arg2;
- (void)_updateApplicationsToMonitor;
- (void)_updateAssertion;
- (void)addClientForApplication:(id)arg1;
- (id)init;
- (void)removeClientForApplication:(id)arg1;

@end