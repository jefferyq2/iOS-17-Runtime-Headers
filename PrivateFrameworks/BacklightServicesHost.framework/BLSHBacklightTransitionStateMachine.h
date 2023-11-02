
@interface BLSHBacklightTransitionStateMachine : NSObject <BLSFlipbookDiagnosticsProviding, BLSHAlwaysOnPresentationEngineDelegate, BLSHBacklightDisplayStateMachineDelegate, BLSHBacklightEnvironmentStateMachineDelegate, BLSHBacklightInactiveEnvironmentSessionUpdating, BLSHBacklightSceneHostEnvironmentObserver, BLSHBacklightStateMachineEventPerforming, BLSHDisableFlipbookProvider, BLSHHostEnvironmentAmendSceneSettingsDelegate, BLSHWatchdogDelegate> {
    BLSHAlwaysOnPresentationEngine * _alwaysOnPresentationEngine;
    long long  _backlightState;
    unsigned long long  _backlightStateChangeTimestamp;
    BLSHBacklightAggregateState * _currentState;
    BLSHBacklightDisplayStateMachine * _displayStateMachine;
    BLSHBacklightEnvironmentStateMachine * _environmentStateMachine;
    bool  _flipbookDisabled;
    <BLSHInactiveBudgetPolicing_Private> * _inactiveBudgetPolicy;
    long long  _lastSteadyStateFlipbookState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_abortedEvents;
    bool  _lock_animating;
    BLSHEnsureFlipbookCurrentOperation * _lock_ensureFlipbookCurrentOperation;
    bool  _lock_forcedUnanimated;
    BLSHPendingEnvironmentUpdateOperation * _lock_pendingEnvironmentUpdate;
    BLSHPendingUpdateDisplayMode * _lock_pendingUpdateDisplayMode;
    BLSHPendingUpdatePresentation * _lock_pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier * _lock_pendingUpdateToSpecifier;
    NSMutableArray * _lock_performingEvents;
    NSMutableArray * _lock_queuedEventsToPerform;
    bool  _lock_safeToUnblank;
    BLSHPresentationDateSpecifier * _lock_stopEngineOnScreenSpecifier;
    BLSHBacklightMutableTargetState * _lock_targetState;
    NSHashTable * _observers;
    <BLSHWatchdogInvalidatable> * _onMain_watchdogTimer;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
    BLSBacklightChangeEvent * _pendingPrewarmedEvent;
    <BLSHBacklightStateMachineEventPerformerDelegate> * _performerDelegate;
    <BLSHBacklightPlatformProvider> * _platformProvider;
    BLSHBacklightInactiveEnvironmentSession * _session;
    unsigned long long  _stateHandler;
    BLSAssertion * _touchLockAssertion;
    <BLSHSystemActivityAsserting> * _transitionAPAwakeAssertion;
}

@property (getter=isAlwaysOnEnabled, nonatomic, readonly) bool alwaysOnEnabled;
@property (nonatomic, readonly) long long backlightState;
@property (nonatomic, readonly) unsigned long long backlightStateChangeTimestamp;
@property (nonatomic, readonly, copy) NSString *backlightStateDescription;
@property (nonatomic) double completionDelayForTesting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceSupportsAlwaysOn;
@property (nonatomic, readonly) BLSHBacklightDisplayStateMachine *displayStateMachine;
@property (getter=isFlipbookDisabled, nonatomic) bool flipbookDisabled;
@property (nonatomic, readonly) long long flipbookState;
@property (readonly) unsigned long long hash;
@property (nonatomic) <BLSHBacklightStateMachineEventPerformerDelegate> *performerDelegate;
@property (nonatomic, readonly) <BLSHBacklightPlatformProvider> *platformProvider;
@property (nonatomic) bool safeToUnblank;
@property (nonatomic, readonly) BLSHBacklightInactiveEnvironmentSession *session;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (id)abortContext;
- (void)addObserver:(id)arg1;
- (id)allFlipbookFrames;
- (long long)backlightState;
- (unsigned long long)backlightStateChangeTimestamp;
- (id)backlightStateDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)deviceSupportsAlwaysOn;
- (void)displayState:(id)arg1 didUpdateToBrightnessCurve:(long long)arg2;
- (void)displayState:(id)arg1 didUpdateToMode:(long long)arg2;
- (id)displayStateMachine;
- (void)environmentStateMachine:(id)arg1 didBeginUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(id)arg1 didCompleteUpdateToState:(long long)arg2;
- (void)environmentStateMachine:(id)arg1 didUpdateToPresentation:(id)arg2;
- (void)environmentStateMachine:(id)arg1 didUpdateToSpecifier:(id)arg2;
- (long long)flipbookState;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (id)frameWithUUID:(id)arg1;
- (bool)hasEnsureFlipbookCurrent;
- (bool)hostEnvironment:(id)arg1 didAmendSceneSettings:(id)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetAlwaysOnEnabledForEnvironment:(bool)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetLiveUpdating:(bool)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetUnrestrictedFramerateUpdates:(bool)arg2;
- (id)identifier;
- (void)inactiveEnvironmentSession:(id)arg1 updateToPresentation:(id)arg2;
- (id)initWithPlatformProvider:(id)arg1 osInterfaceProvider:(id)arg2 inactiveBudgetPolicy:(id)arg3;
- (bool)isAlwaysOnEnabled;
- (bool)isFlipbookDisabled;
- (bool)isTransitioning;
- (id)osInterfaceProvider;
- (void)performEvent:(id)arg1;
- (id)performerDelegate;
- (id)platformProvider;
- (void)presentationEngine:(id)arg1 didUpdateToCurrentWithSpecifier:(id)arg2;
- (void)prewarmEvent:(id)arg1;
- (void)registerHandlersForService:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)safeToUnblank;
- (id)session;
- (void)setFlipbookDisabled:(bool)arg1;
- (void)setPerformerDelegate:(id)arg1;
- (void)setSafeToUnblank:(bool)arg1;

@end