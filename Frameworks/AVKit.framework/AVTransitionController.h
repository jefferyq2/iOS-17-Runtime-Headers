
@interface AVTransitionController : NSObject <AVTransitionDelegate, AVTransitionDriverDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate> {
    AVTransition * _activeTransition;
    <AVTransitionControllerDelegate> * _delegate;
    AVDisplayLink * _displayLink;
    CAMediaTimingFunction * _easeInFunction;
    CAMediaTimingFunction * _easeOutFunction;
    AVInteractiveTransitionGestureTracker * _gestureTracker;
    UIView * _interactionView;
    <AVTransitionDriver> * _interactiveGestureTracker;
    AVPresentationController * _presentationController;
    UIView * _sourceViewForNextPresentation;
    long long  _state;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchGravity;
    id /* block */  _transitionDidBeginHandler;
}

@property (nonatomic, retain) AVTransition *activeTransition;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTransitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVDisplayLink *displayLink;
@property (nonatomic, retain) CAMediaTimingFunction *easeInFunction;
@property (nonatomic, retain) CAMediaTimingFunction *easeOutFunction;
@property (nonatomic, readonly) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *interactionView;
@property (nonatomic, retain) <AVTransitionDriver> *interactiveGestureTracker;
@property (nonatomic, readonly) AVPresentationContext *presentationContext;
@property (nonatomic) UIView *sourceViewForNextPresentation;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchGravity;
@property (nonatomic, copy) id /* block */ transitionDidBeginHandler;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_cancelTransition;
- (void)_dismiss:(id)arg1 fromViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_ensurePresentationControllerWithTransitionContext:(id)arg1;
- (void)_finishTransition;
- (void)_fireDidBeginHandlerIfNeeded;
- (void)_present:(id)arg1 fromViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_startObservingAnimatorProgress;
- (id)activeTransition;
- (void)addTransitionDriver:(id)arg1 toView:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (void)beginFullScreenDismissalOfViewController:(id)arg1 animated:(bool)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (id)displayLink;
- (id)easeInFunction;
- (id)easeOutFunction;
- (void)ensurePresentationControllerWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2;
- (id)gestureTracker;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionView;
- (id)interactiveGestureTracker;
- (id)presentationContext;
- (void)setActiveTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setEaseInFunction:(id)arg1;
- (void)setEaseOutFunction:(id)arg1;
- (void)setInteractionView:(id)arg1;
- (void)setInteractiveGestureTracker:(id)arg1;
- (void)setSourceViewForNextPresentation:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchGravity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionDidBeginHandler:(id /* block */)arg1;
- (id)sourceViewForNextPresentation;
- (void)startInteractiveTransition:(id)arg1;
- (long long)state;
- (struct CGPoint { double x1; double x2; })touchGravity;
- (id)transitionBackgroundViewBackgroundColor:(id)arg1;
- (id /* block */)transitionDidBeginHandler;
- (void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(id /* block */)arg3;
- (bool)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (bool)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2;
- (void)transitionDriverDidCancelInteraction:(id)arg1;
- (void)transitionDriverDidContinueInteraction:(id)arg1;
- (void)transitionDriverDidFinishInteraction:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionPresentedViewBackgroundColor:(id)arg1;
- (void)transitionWillComplete:(id)arg1 success:(bool)arg2 continueBlock:(id /* block */)arg3;
- (bool)wantsInteractiveStart;

@end