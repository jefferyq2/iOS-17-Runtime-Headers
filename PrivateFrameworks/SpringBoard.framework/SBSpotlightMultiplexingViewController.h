
@interface SBSpotlightMultiplexingViewController : UIViewController <FBSceneManagerObserver, FBSceneObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBMainDisplaySceneManagerObserver, SBMedusaHostedKeyboardWindowControllerObserver, SBMultiplexedSpotlightDelegate, SBScenePresenting, SBScrollToTopSceneProxyViewDelegate> {
    bool  _activeDelegate;
    <SBSpotlightMultiplexingViewControllerDelegate> * _delegate;
    UIView * _externalKeyboardView;
    SBWindowSceneStatusBarSettingsAssertion * _hideStatusBarAssertion;
    UIView * _hostedInputUIView;
    <BSInvalidatable> * _inputUIPresenterAssertion;
    <SBScenePresentingDelegate> * _inputUIPresentingDelegate;
    UIView * _inputUIView;
    bool  _invalidated;
    UIView * _keyboardHostView;
    <UIScenePresenter> * _keyboardPresenter;
    _UILegibilitySettings * _legibilitySettings;
    SBMedusaHostedKeyboardWindowLevelAssertion * _medusaHostedKeyboardWindowLevelAssertion;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SBScrollToTopSceneProxyView * _scrollToTopView;
    bool  _searchContentAvailable;
    <SPUIRemoteSearchViewDelegate> * _spotlightDelegate;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarStyleAssertion;
    FBSDisplayConfiguration * _targetDisplayConfiguration;
    bool  _wantsExternalKeyboardView;
}

@property (getter=isActiveDelegate, nonatomic) bool activeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSpotlightMultiplexingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *externalKeyboardView;
@property (nonatomic, readonly) bool externalKeyboardViewContainsKeyboard;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *hostedInputUIView;
@property (nonatomic, retain) UIView *inputUIView;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, retain) UIView *keyboardHostView;
@property (nonatomic, retain) <UIScenePresenter> *keyboardPresenter;
@property (nonatomic, copy) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, retain) SBMedusaHostedKeyboardWindowLevelAssertion *medusaHostedKeyboardWindowLevelAssertion;
@property (getter=isSearchContentAvailable, nonatomic) bool searchContentAvailable;
@property (nonatomic) <SPUIRemoteSearchViewDelegate> *spotlightDelegate;
@property (nonatomic, readonly) struct SBSpotlightHostedContentMetrics { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; } spotlightHostedContentMetrics;
@property (readonly) Class superclass;
@property (nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (nonatomic) bool wantsExternalKeyboardView;

+ (struct SBSpotlightHostedContentMetrics { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; })_class_spotlightHostedContentMetrics;
+ (double)effectiveSpotlightSearchFieldAvoidanceHeight;
+ (bool)isShownWithinWindow:(id)arg1;
+ (bool)isShownWithinWindowScene:(id)arg1;
+ (id)sharedRemoteSearchViewController;
+ (id)sharedRemoteSearchViewControllerIfExists;
+ (id)spotlightSceneIdentityTokenIfActiveForeground;

- (void).cxx_destruct;
- (void)_acquireInputUIPresentingAssertionIfNecessary;
- (unsigned long long)_appStatusBarSettingsLevelForSpotlightMultiplexingLevel:(unsigned long long)arg1;
- (void)_clearStatusBarHiddenAssertion;
- (void)_clearStatusBarStyleAssertionAnimated:(bool)arg1;
- (void)_configureExternalKeyboardView;
- (void)_configureExternalKeyboardView:(bool)arg1;
- (void)_configureSceneObservation:(bool)arg1 forScene:(id)arg2;
- (void)_configureStatusBarScrollToTopView;
- (id)_effectiveKeyboardContentView;
- (void)_evaluateSearchContentAvailabilityForScene:(id)arg1;
- (void)_invalidateInputUIPresentingAssertion;
- (bool)_isStatusBarEffectivelyHidden;
- (void)_notifyExternalKeyboardViewContainsKeyboard:(bool)arg1;
- (void)_registerStatusBarScrollToTopView;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1;
- (bool)_remoteSearchViewControllerHasKeyboardPresented;
- (void)_returnKeyboardToSpotlightIfNecessary;
- (id)_spotlightSceneIdentifier;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1;
- (void)_updateStatusBarHiddenAssertion;
- (void)_updateStatusBarStyleAssertion;
- (void)_updateStatusBarStyleAssertionToStyle:(long long)arg1 animated:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate:(bool)arg1;
- (id)dismissScene:(id)arg1;
- (void)dismissSearchView;
- (id)externalKeyboardView;
- (bool)externalKeyboardViewContainsKeyboard;
- (id)hostedInputUIView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputUIView;
- (void)invalidate;
- (bool)isActiveDelegate;
- (bool)isInvalidated;
- (bool)isSearchContentAvailable;
- (bool)isVisibleOnScreen;
- (id)keyboardHostView;
- (void)keyboardLayersDidChange:(id)arg1;
- (id)keyboardPresenter;
- (id)legibilitySettings;
- (unsigned long long)level;
- (id)medusaHostedKeyboardWindowLevelAssertion;
- (id)parentSceneIdentityToken;
- (id)presentScene:(id)arg1 viewControllerBuilderBlock:(id /* block */)arg2;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)sceneContentStateDidChange:(id)arg1;
- (id)sceneHandle;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (void)searchViewContentAvailabilityDidChange;
- (void)searchViewKeyboardPresentationStateDidChange;
- (void)setActiveDelegate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalKeyboardView:(id)arg1;
- (void)setHostedInputUIView:(id)arg1;
- (void)setInputUIView:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setKeyboardHostView:(id)arg1;
- (void)setKeyboardPresenter:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMedusaHostedKeyboardWindowLevelAssertion:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setSearchContentAvailable:(bool)arg1;
- (void)setSpotlightDelegate:(id)arg1;
- (void)setTargetDisplayConfiguration:(id)arg1;
- (void)setWantsExternalKeyboardView:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)spotlightDelegate;
- (struct SBSpotlightHostedContentMetrics { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; double x5; })spotlightHostedContentMetrics;
- (id)targetDisplayConfiguration;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsExternalKeyboardView;

@end