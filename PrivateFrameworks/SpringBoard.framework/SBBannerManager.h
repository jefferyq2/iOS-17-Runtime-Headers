
@interface SBBannerManager : NSObject <BNBannerSourceListenerDelegate, BNPosting, BNPostingPrivate, BNPresentingDelegate, SBAmbientPresentationObserver, SBAssistantObserver, SBBannerPanGestureSystemDragCancellingDelegate, SBButtonEventsHandler, SBFZStackParticipantDelegate, SBPhysicalButtonZStackPolicyAssistantDelegate, SBPlatterHomeGestureManagerDelegate, SBPresentableSystemDragCancellationHandler, SBWindowLevelAssertionManagerDelegate, SBWindowLevelAssertionProviding> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalEdgeInsets;
    <BSInvalidatable> * _appsStatusBarAssertion;
    SBBannerAuthority * _bannerAuthority;
    BNBannerSourceListener * _bannerSourceListener;
    NSMutableSet * _clientSuppressionAssertions;
    NSMutableArray * _gesturePriorityAssertions;
    NSMapTable * _gesturePriorityAssertionsToWindowScenes;
    SBPlatterHomeGestureManager * _platterHomeGestureManager;
    NSMapTable * _presentableHomeGestureParticipantsToGesturePriorityAssertions;
    <SBPresentableIntercepting> * _presentableInterceptor;
    NSMapTable * _presentablesToGesturePriorityAssertions;
    NSMutableSet * _statusBarAssertionReasons;
    NSHashTable * _suppressionAssertions;
    <BSInvalidatable> * _systemStatusBarAssertion;
    NSHashTable * _transitionObservers;
    SBWindowLevelAssertionManager * _windowLevelAssertionManager;
    NSMapTable * _windowScenesToBannerControllers;
    NSMapTable * _windowScenesToBannerWindows;
    NSMapTable * _windowScenesToPanGestures;
    NSMapTable * _windowScenesToPhysicalButtonAssistants;
    NSMapTable * _windowScenesToPresenterVisibilityGesturePriorityAssertions;
    NSMapTable * _windowScenesToZStackParticipants;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingBannerInAnyWindowScene, nonatomic, readonly) bool displayingBannerInAnyWindowScene;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBPresentableIntercepting> *presentableInterceptor;
@property (readonly) Class superclass;

+ (id)_defaultAuthorizedBundleIDs;

- (void).cxx_destruct;
- (id)_acquireGestureRecognizerPriorityAssertionWithPriority:(long long)arg1 windowScene:(id)arg2 reason:(id)arg3;
- (void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)arg1;
- (id)_bannerControllerForWindowScene:(id)arg1;
- (id)_bannerWindowForWindowScene:(id)arg1;
- (id)_bannerWindowForWindowScene:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_contentViewControllerForWindowScene:(id)arg1;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (bool)_handleButtonEventWithTest:(id /* block */)arg1 handler:(id /* block */)arg2;
- (void)_hideStatusBarIfNecessaryForPresentable:(id)arg1;
- (id)_homeGestureContextForPresentable:(id)arg1 windowScene:(id)arg2;
- (void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)arg1;
- (bool)_isPresentableHUD:(id)arg1;
- (bool)_isPresentableNotice:(id)arg1;
- (id)_layoutDescriptionWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inWindowScene:(id)arg2;
- (id)_panGestureInWindowScene:(id)arg1;
- (id)_panGestureInWindowScene:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_platterHomeGestureManager;
- (id)_presenterForPresentable:(id)arg1;
- (id)_presenterForWindowScene:(id)arg1;
- (void)_revealStatusBarIfNecessaryForPresentable:(id)arg1;
- (void)_setWindowScene:(id)arg1 forGestureRecognizerPriorityAssertion:(id)arg2;
- (bool)_shouldHideStatusBarForPresentable:(id)arg1;
- (id)_statusBarAssertionReasonForPresentable:(id)arg1;
- (void)_systemApertureInsetsDidChange:(id)arg1;
- (void)_unregisterHomeGestureContextForPresentable:(id)arg1;
- (void)_updateGesturePriorityForGestureRecognizerInWindowScene:(id)arg1;
- (void)_updatePolicyAssistantForWindowScene:(id)arg1;
- (void)_updateWindowLevelForScene:(id)arg1;
- (void)_updateZStackPolicyAssistantForWindowScene:(id)arg1 reasonSuffix:(id)arg2 transitionCoordinator:(id)arg3;
- (id)_windowForPresenter:(id)arg1;
- (id)_windowSceneForBannerController:(id)arg1;
- (id)_windowSceneForPresenter:(id)arg1;
- (id)_zStackParticipantForAssistant:(id)arg1;
- (id)_zStackParticipantForWindowScene:(id)arg1;
- (id)_zStackPolicyAssistantForParticipant:(id)arg1;
- (id)_zStackPolicyAssistantForWindowScene:(id)arg1;
- (id)acquireBannerSuppressionAssertionForReason:(id)arg1;
- (id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)arg1 priority:(long long)arg2 reason:(id)arg3;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 windowScene:(id)arg3 reason:(id)arg4;
- (void)addTransitionObserver:(id)arg1;
- (void)ambientPresentationController:(id)arg1 willUpdatePresented:(bool)arg2;
- (void)assistantWillAppear:(id)arg1 windowScene:(id)arg2;
- (bool)bannerPanGestureRecognizer:(id)arg1 shouldCancelSystemDragGestureWithTouches:(id)arg2 event:(id)arg3;
- (bool)bannerPanGestureRecognizer:(id)arg1 shouldDisableTouchCancellationForTouch:(id)arg2 event:(id)arg3;
- (void)bannerSourceListener:(id)arg1 didUpdateInitialSceneSettingsWithParameters:(id)arg2;
- (id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id*)arg2;
- (id)bannerSourceListener:(id)arg1 newBannerSourceListenerPresentableForBannerSpecification:(id)arg2 serviceDomain:(id)arg3 scene:(id)arg4 readyCompletion:(id /* block */)arg5;
- (void)bannerSourceListener:(id)arg1 presentationSize:(out struct CGSize { double x1; double x2; }*)arg2 containerSize:(out struct CGSize { double x1; double x2; }*)arg3 error:(id*)arg4;
- (bool)bannerSourceListener:(id)arg1 recommendsSuspending:(bool)arg2 forReason:(id)arg3 revokingCurrent:(bool)arg4 error:(id*)arg5;
- (bool)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id*)arg5;
- (id)bannerSourceListener:(id)arg1 requestsRevokingPresentablesWithIdentification:(id)arg2 reason:(id)arg3 animated:(bool)arg4 userInfo:(id)arg5 error:(id*)arg6;
- (id)bannerSourceListener:(id)arg1 sceneSpecificationForBannerSceneWithIdentifier:(id)arg2 forProcess:(id)arg3 userInfo:(id)arg4;
- (bool)bannerSourceListenerShouldEnablePresentableContextInterface:(id)arg1;
- (id)bannerWindowInWindowScene:(id)arg1;
- (void)cancelSystemDragForPresentable:(id)arg1;
- (void)dismissAllBannersInAllWindowScenesAnimated:(bool)arg1 reason:(id)arg2;
- (void)dismissAllBannersInWindowScene:(id)arg1 animated:(bool)arg2 reason:(id)arg3;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)init;
- (bool)isDisplayingBannerInAnyWindowScene;
- (bool)isDisplayingBannerInWindowScene:(id)arg1;
- (bool)isDisplayingFullScreenBannerInWindowScene:(id)arg1;
- (id)layoutManagerInWindowScene:(id)arg1;
- (id)newBannerControllerForWindowScene:(id)arg1;
- (id)panGestureRecognizerForPresenter:(id)arg1;
- (void)physicalButtonZStackPolicyAssistantDidChange:(id)arg1;
- (id)platterHomeGestureManager:(id)arg1 gestureRecognizerPriorityAssertionForParticipant:(id)arg2 reason:(id)arg3;
- (id)platterHomeGestureManager:(id)arg1 orderedParticipants:(id)arg2;
- (void)platterHomeGestureManager:(id)arg1 participantOwningHomeGestureDidChange:(id)arg2;
- (id)platterHomeGestureManager:(id)arg1 windowForParticipant:(id)arg2;
- (long long)platterHomeGestureManager:(id)arg1 zStackParticipantIdentifierForParticipant:(id)arg2;
- (bool)pointInsideBanner:(struct CGPoint { double x1; double x2; })arg1 inWindowScene:(id)arg2;
- (bool)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;
- (id)presentableInterceptor;
- (struct CGPoint { double x1; double x2; })presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForEvent:(id)arg3 inView:(id)arg4;
- (struct CGPoint { double x1; double x2; })presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4;
- (struct CGPoint { double x1; double x2; })presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3;
- (struct CGPoint { double x1; double x2; })presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3;
- (void)presenter:(id)arg1 presentable:(id)arg2 willTransitionToSize:(struct CGSize { double x1; double x2; })arg3 withTransitionCoordinator:(id)arg4;
- (void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
- (void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4;
- (void)presenter:(id)arg1 willTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (double)presenterMinimumPreferredTopEdgeInset:(id)arg1;
- (void)presenterRelinquishesVisibility:(id)arg1;
- (void)presenterRequestsVisibility:(id)arg1;
- (void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2;
- (void)removeTransitionObserver:(id)arg1;
- (id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(bool)arg4 userInfo:(id)arg5 error:(out id*)arg6;
- (id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (void)setPresentableInterceptor:(id)arg1;
- (void)setSuspended:(bool)arg1 forReason:(id)arg2;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2;
- (void)windowLevelAssertionManager:(id)arg1 didUpdateAssertionsForWindowScene:(id)arg2;
- (id)windowSceneForPresentable:(id)arg1;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end