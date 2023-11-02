
@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate> {
    unsigned long long  _animationState;
    bool  _authenticated;
    <SBUIBiometricResource> * _biometricResource;
    NSMutableDictionary * _cachedLegibilityLabels;
    bool  _controlCenterCoachingIsHidden;
    unsigned long long  _effectiveAnimationState;
    NSTimer * _fireOffAnimationTimer;
    UITapGestureRecognizer * _homeAffordanceClickGestureRecognizer;
    CSHomeAffordanceViewController * _homeAffordanceViewController;
    bool  _screenOn;
    bool  _updateTextLabelOnNextAnimation;
    <SBDashBoardHomeAffordanceAnimationViewProviding> * _viewProvider;
}

@property (nonatomic) unsigned long long animationState;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) <SBUIBiometricResource> *biometricResource;
@property (nonatomic, retain) NSMutableDictionary *cachedLegibilityLabels;
@property (nonatomic) bool controlCenterCoachingIsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long effectiveAnimationState;
@property (nonatomic, retain) NSTimer *fireOffAnimationTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *homeAffordanceClickGestureRecognizer;
@property (nonatomic, readonly) CSHomeAffordanceViewController *homeAffordanceViewController;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (nonatomic) bool updateTextLabelOnNextAnimation;
@property (nonatomic) <SBDashBoardHomeAffordanceAnimationViewProviding> *viewProvider;

+ (void)_addRepeatedAnimationWithProvider:(id /* block */)arg1 toLayer:(id)arg2;
+ (id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(bool)arg3;

- (void).cxx_destruct;
- (void)_addControlCenterGlyphAnimation;
- (void)_addControlCenterGlyphResetAnimation;
- (void)_addControlCenterGrabberAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (void)_addHomeAffordanceAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addTextAnimation;
- (void)_addTextResetAnimation;
- (void)_cancelTimerAndResetAnimation;
- (void)_contentSizeCategoryChanged;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_homeAffordanceClickRecognized:(id)arg1;
- (id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_moveUpTimerForFiringAfterDelay:(double)arg1;
- (void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_setControlCenterTutorsHidden:(bool)arg1;
- (void)_setupTimer;
- (void)_setupTimerWithDelay:(double)arg1;
- (bool)_shouldTeachAboutControlCenter;
- (id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2;
- (void)_updateEffectiveAnimationState;
- (void)_updateLegibilitySettings;
- (void)_updateText:(id)arg1;
- (void)_updateTextLabel;
- (void)_updateTextLabelIfNeeded;
- (void)aggregateAppearance:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (unsigned long long)animationState;
- (bool)authenticated;
- (id)biometricResource;
- (id)cachedLegibilityLabels;
- (bool)controlCenterCoachingIsHidden;
- (unsigned long long)currentState;
- (void)dealloc;
- (unsigned long long)effectiveAnimationState;
- (id)fireOffAnimationTimer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)handleEvent:(id)arg1;
- (id)homeAffordanceClickGestureRecognizer;
- (id)homeAffordanceViewController;
- (id)init;
- (bool)isScreenOn;
- (void)loadView;
- (void)setAnimationState:(unsigned long long)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setBiometricResource:(id)arg1;
- (void)setCachedLegibilityLabels:(id)arg1;
- (void)setControlCenterCoachingIsHidden:(bool)arg1;
- (void)setEffectiveAnimationState:(unsigned long long)arg1;
- (void)setFireOffAnimationTimer:(id)arg1;
- (void)setHomeAffordanceClickGestureRecognizer:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setUpdateTextLabelOnNextAnimation:(bool)arg1;
- (void)setViewProvider:(id)arg1;
- (id)teachableMomentsContainerView;
- (bool)updateTextLabelOnNextAnimation;
- (id)viewProvider;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end