
@interface _UIPanelCoordinatingAnimator : UIViewPropertyAnimator <UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext> {
    NSMutableArray * _clientCompletions;
    UIView * _containerView;
    bool  _isInStartAnimation;
    NSMutableArray * _lateAnimations;
    bool  _wasCancelled;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionVelocity;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initiallyInteractive;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) bool isInterruptible;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetTransform;
@property (nonatomic, readonly) double transitionDuration;

- (void).cxx_destruct;
- (void)_runCompletions:(long long)arg1 finished:(bool)arg2;
- (void)_sendPanelCoordinationCompletions;
- (bool)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (long long)completionCurve;
- (double)completionVelocity;
- (id)containerView;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isInteractive;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)arg1;
- (double)percentComplete;
- (long long)presentationStyle;
- (void)setContainerView:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end