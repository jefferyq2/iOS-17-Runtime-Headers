
@interface SBDashBoardCameraPageViewController : CSPageViewController <CSApplicationHosting, SBDashBoardHostedAppViewControllerDelegate, SBFZStackParticipantDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGrabberPointerClickDelegate, SBPhysicalButtonZStackPolicyAssistantDelegate, SBSceneHandleObserver, SBSystemApertureZStackPolicyAssistantDelegate, SBSystemGestureRecognizerDelegate> {
    UIViewFloatAnimatableProperty * _alphaProperty;
    SBFFluidBehaviorSettings * _alphaSettings;
    SBDashBoardHostedAppViewController * _appViewController;
    UIViewController * _appViewControllerContainerVC;
    long long  _cameraPresentLargestPercent;
    bool  _cameraPrewarmSucceeded;
    bool  _hasWarmedCameraForThisPresentation;
    SBHomeGestureInteraction * _homeGestureInteraction;
    bool  _interactiveDismissalInProgress;
    SBLockScreenDefaults * _lockScreenDefaults;
    UIView * _maskView;
    SBTraitsOrientedContentViewController * _orientedContentViewController;
    SBPhysicalButtonZStackPolicyAssistant * _physicalButtonZStackPolicyAssistant;
    NSTimer * _prewarmCancelTimer;
    NSTimer * _prewarmDebounceTimer;
    CSLockScreenSettings * _prototypeSettings;
    UIViewFloatAnimatableProperty * _scaleProperty;
    SBFFluidBehaviorSettings * _scaleSettings;
    SBSystemApertureZStackPolicyAssistant * _systemApertureZStackPolicyAssistant;
    UIView * _tintView;
    TRAParticipant * _traitsParticipant;
    SBTraitsSceneParticipantDelegate * _traitsParticipantDelegate;
    bool  _wantsHomeGestureOwnership;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, retain) NSSet *actionsToDeliver;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *alphaProperty;
@property (nonatomic, retain) SBFFluidBehaviorSettings *alphaSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureInteraction *homeGestureInteraction;
@property (nonatomic, retain) SBPhysicalButtonZStackPolicyAssistant *physicalButtonZStackPolicyAssistant;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *scaleProperty;
@property (nonatomic, retain) SBFFluidBehaviorSettings *scaleSettings;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBSystemApertureZStackPolicyAssistant *systemApertureZStackPolicyAssistant;
@property (nonatomic) bool wantsHomeGestureOwnership;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

+ (bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;

- (void).cxx_destruct;
- (void)_acquireTraitsParticipantIfNeeded;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_bailIfFaceTimeCallComesIn;
- (struct CGPoint { double x1; double x2; })_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_coolCameraIfNecessary;
- (void)_createProperties;
- (void)_endPrewarmBackoffPeriod;
- (void)_invalidateCameraTraitsParticipant;
- (void)_makeApplicationStatic;
- (void)_noteUserLaunchEventTime;
- (double)_prelaunchThreshold;
- (void)_prepareForInteractiveGestureToCameraVisible:(bool)arg1;
- (void)_prewarmCamera;
- (double)_prewarmThreshold;
- (void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (void)_resetAfterInteractiveGestureToCameraVisible:(bool)arg1;
- (void)_setSceneGrabberHidden:(bool)arg1;
- (bool)_shouldCancelInteractiveDismissGesture;
- (bool)_shouldPrelaunchOnSwipe;
- (bool)_shouldPrewarmOnSwipe;
- (void)_takeHiddenAssertionForHomeGrabber:(id)arg1;
- (id)_traitsArbiter;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(bool)arg3;
- (void)_updateCameraScale:(double)arg1 interactive:(bool)arg2;
- (void)_updateDimmingAlpha:(double)arg1 interactive:(bool)arg2;
- (void)_updateForPropertyChangedForPresentation:(bool)arg1;
- (void)_updateZStackPolicyAssistants;
- (id)actionsToDeliver;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)alphaProperty;
- (id)alphaSettings;
- (bool)canHostAnApp;
- (void)conformsToCSApplicationHosting;
- (void)conformsToSBApplicationHosting;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
- (bool)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (void)dashBoardHostedAppViewControllerDidFailToActivateApplication:(id)arg1;
- (void)didTransitionToVisible:(bool)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)handlesRotationIndependentOfCoverSheet;
- (id)homeGestureInteraction;
- (bool)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2;
- (bool)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)homeGestureInteractionBegan:(id)arg1;
- (void)homeGestureInteractionCancelled:(id)arg1;
- (void)homeGestureInteractionChanged:(id)arg1;
- (void)homeGestureInteractionEnded:(id)arg1;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (bool)isHostingAnApp;
- (void)loadView;
- (id)pageRole;
- (id)physicalButtonZStackPolicyAssistant;
- (void)physicalButtonZStackPolicyAssistantDidChange:(id)arg1;
- (long long)presentationAltitude;
- (id)requestedDismissalSettings;
- (long long)requestedDismissalType;
- (id)scaleProperty;
- (id)scaleSettings;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)setActionsToDeliver:(id)arg1;
- (void)setAlphaProperty:(id)arg1;
- (void)setAlphaSettings:(id)arg1;
- (void)setHomeGestureInteraction:(id)arg1;
- (void)setPhysicalButtonZStackPolicyAssistant:(id)arg1;
- (void)setScaleProperty:(id)arg1;
- (void)setScaleSettings:(id)arg1;
- (void)setSystemApertureZStackPolicyAssistant:(id)arg1;
- (void)setWantsHomeGestureOwnership:(bool)arg1;
- (void)setZStackParticipant:(id)arg1;
- (id)systemApertureZStackPolicyAssistant;
- (void)systemApertureZStackPolicyAssistantDidChange:(id)arg1;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;
- (void)updateTransitionToVisible:(bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (bool)wantsHomeGestureOwnership;
- (void)willTransitionToVisible:(bool)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end