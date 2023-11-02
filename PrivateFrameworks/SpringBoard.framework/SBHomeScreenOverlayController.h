
@interface SBHomeScreenOverlayController : NSObject <BSDescriptionProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBFIdleTimerBehaviorProviding, SBFOverlayControlling, SBFOverlayDismissalDelegate, SBHVisibleContentPresenter, SBHomeScreenOverlayViewControllerDelegate, UIGestureRecognizerDelegate> {
    bool  _animatingPresentationProgress;
    <SBHomeScreenOverlayControllerDelegate> * _delegate;
    UIPanGestureRecognizer * _dismissPanGestureRecognizer;
    UITapGestureRecognizer * _dismissTapGestureRecognizer;
    <SBFOverlayDismissalDelegate> * _dismissalDelegate;
    bool  _dismissing;
    <BSInvalidatable> * _displayLayoutAssertion;
    UIViewController * _existingAvocadoVC;
    SBFFrameRateAssertion * _frameRateAssertion;
    SBBarSwipeAffordanceViewController * _homeAffordanceViewController;
    unsigned long long  _indirectScreenEdgeSystemGestureType;
    double  _initialPresentationProgress;
    NSHashTable * _observers;
    bool  _overlayAppearing;
    SBHomeScreenOverlayViewController * _overlayViewController;
    NSCountedSet * _reasonsToDisablePanGestureRecognizer;
    unsigned long long  _screenEdgeSystemGestureType;
    unsigned long long  _scrunchSystemGestureType;
    SBFWindow * _window;
}

@property (nonatomic, readonly) UIViewController *activeSidebarViewController;
@property (getter=isAnimatingPresentationProgress, nonatomic) bool animatingPresentationProgress;
@property (nonatomic) unsigned long long contentVisibility;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeScreenOverlayControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *dismissTapGestureRecognizer;
@property (nonatomic) <SBFOverlayDismissalDelegate> *dismissalDelegate;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (nonatomic, retain) <BSInvalidatable> *displayLayoutAssertion;
@property (nonatomic) UIViewController *existingAvocadoVC;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBBarSwipeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) unsigned long long indirectScreenEdgeSystemGestureType;
@property (nonatomic) double initialPresentationProgress;
@property (nonatomic, retain) UIViewController<SBHVisibleContentPresenter> *leadingSidebarViewController;
@property (nonatomic, readonly) long long notificationBehavior;
@property (getter=isOverlayAppearing, nonatomic) bool overlayAppearing;
@property (nonatomic, readonly) SBHomeScreenOverlayViewController *overlayViewController;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic) double presentationProgress;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) unsigned long long screenEdgeSystemGestureType;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) unsigned long long scrunchSystemGestureType;
@property (nonatomic) bool shouldUseReducedMotionAnimation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<SBHVisibleContentPresenter> *trailingSidebarViewController;
@property (nonatomic, readonly) UIViewController<SBHLibraryViewControllerPresenter><SBHWidgetSheetViewControllerPresenter> *viewController;
@property (nonatomic, readonly) SBFWindow *window;

- (void).cxx_destruct;
- (void)_addSystemGestureRecognizer;
- (void)_configureDismissGestureRecognizer;
- (double)_directionCoefficient;
- (void)_dismissLevelAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_dismissScrollGestureBegan:(id)arg1;
- (void)_dismissScrollGestureChanged:(id)arg1;
- (void)_dismissScrollGestureEndedOrCancelled:(id)arg1;
- (void)_enumerateHomeScreenOverlayObserversUsingBlock:(id /* block */)arg1;
- (void)_removeSystemGestureRecognizer;
- (id)_rootViewController;
- (void)_setDisplayLayoutElementActive:(bool)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setHitTestingDisabled:(bool)arg1;
- (id)activeSidebarViewController;
- (void)addHomeScreenOverlayObserver:(id)arg1;
- (void)addReasonToDisableDismissGestureRecognizer:(id)arg1;
- (void)animatePresentationProgress:(double)arg1 withGestureLiftOffVelocity:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)backgroundViewForEditingDoneButtonForHomeScreenOverlayViewController:(id)arg1;
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)cleanUpAfterSettingPresentationProgress:(double)arg1;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSEventHandling;
- (void)conformsToCSExternalBehaviorProviding;
- (unsigned long long)contentVisibility;
- (double)contentWidth;
- (id)coverSheetIdentifier;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)dismissPanGestureRecognizer;
- (void)dismissScrollGestureUpdated:(id)arg1;
- (id)dismissTapGestureRecognizer;
- (void)dismissTapGestureUpdated:(id)arg1;
- (void)dismissUsingViewControllerTransitionCoordinator:(id)arg1;
- (id)dismissalDelegate;
- (id)displayLayoutAssertion;
- (id)existingAvocadoVC;
- (double)finalPresentationProgressForTranslation:(double)arg1 velocity:(double)arg2 initialPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)homeAffordanceViewController;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)homeScreenOverlayViewController:(id)arg1 setSuppressesEditingStateForListView:(bool)arg2;
- (void)homeScreenOverlayViewControllerRequestsDismissal:(id)arg1;
- (void)homeScreenOverlayViewWantsToEndEditing:(id)arg1;
- (void)homeScreenOverlayViewWantsWidgetEditingViewControllerPresented:(id)arg1;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (unsigned long long)indirectScreenEdgeSystemGestureType;
- (id)initWithListLayoutProvider:(id)arg1;
- (id)initWithListLayoutProvider:(id)arg1 windowLevel:(double)arg2 windowScene:(id)arg3 traitsRole:(id)arg4 zStackParticipantIdentifier:(long long)arg5 screenEdgeSystemGestureType:(unsigned long long)arg6 indirectScreenEdgeSystemGestureType:(unsigned long long)arg7 scrunchSystemGestureType:(unsigned long long)arg8 secure:(bool)arg9;
- (double)initialPresentationProgress;
- (bool)interceptDismissalGestureForOverlayController:(id)arg1;
- (bool)isAnimatingPresentationProgress;
- (bool)isDismissing;
- (bool)isEditingForHomeScreenOverlayViewController:(id)arg1;
- (bool)isOverlayAppearing;
- (bool)isPresented;
- (double)layerPresentationProgress;
- (id)leadingSidebarViewController;
- (long long)notificationBehavior;
- (void)overlayControllerRequestsDismissal:(id)arg1;
- (id)overlayViewController;
- (long long)participantState;
- (void)prepareToSetPresentationProgress:(double)arg1 fromPresentationProgress:(double)arg2;
- (void)presentAnimated:(bool)arg1;
- (void)presentAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)presentAnimated:(bool)arg1 fromLeading:(bool)arg2;
- (void)presentAnimated:(bool)arg1 fromLeading:(bool)arg2 completionHandler:(id /* block */)arg3;
- (double)presentationProgress;
- (double)presentationProgressForTranslation:(double)arg1 initialPresentationProgress:(double)arg2 fromLeading:(bool)arg3;
- (long long)proximityDetectionMode;
- (void)removeHomeScreenOverlayObserver:(id)arg1;
- (void)removeReasonToDisableDismissGestureRecognizer:(id)arg1;
- (unsigned long long)restrictedCapabilities;
- (unsigned long long)screenEdgeSystemGestureType;
- (long long)scrollingStrategy;
- (unsigned long long)scrunchSystemGestureType;
- (void)setAnimatingPresentationProgress:(bool)arg1;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissPanGestureRecognizer:(id)arg1;
- (void)setDismissalDelegate:(id)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setDisplayLayoutAssertion:(id)arg1;
- (void)setExistingAvocadoVC:(id)arg1;
- (void)setInitialPresentationProgress:(double)arg1;
- (void)setLeadingSidebarViewController:(id)arg1;
- (void)setOverlayAppearing:(bool)arg1;
- (void)setPresentationProgress:(double)arg1;
- (void)setPresentationProgress:(double)arg1 fromLeading:(bool)arg2;
- (void)setPresentationProgress:(double)arg1 fromLeading:(bool)arg2 interactive:(bool)arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)setPresentationProgress:(double)arg1 interactive:(bool)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setShouldUseReducedMotionAnimation:(bool)arg1;
- (void)setTrailingSidebarViewController:(id)arg1;
- (bool)shouldUseReducedMotionAnimation;
- (bool)showsAddWidgetButtonWhileEditingForHomeScreenOverlayViewController:(id)arg1;
- (bool)showsDoneButtonWhileEditingForHomeScreenOverlayViewController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)testScrollView;
- (id)trailingSidebarViewController;
- (void)updateExtraButtonVisibilityAnimated:(bool)arg1;
- (id)viewController;
- (id)window;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end