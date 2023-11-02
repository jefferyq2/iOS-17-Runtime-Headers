
@interface FIUICrossFadeZoomTransitionAnimator : NSObject <FIUIViewControllerAnimatedTransitioning> {
    id /* block */  _animationCompletionBlock;
    id  _context;
    UIView * _largeView;
    UIView * _smallView;
    bool  _transitionCompleted;
    bool  _zoomingUp;
}

@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *largeView;
@property (nonatomic, retain) UIView *smallView;
@property (readonly) Class superclass;
@property (nonatomic) bool zoomingUp;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)completeTransitionImmediately;
- (id)context;
- (id)largeView;
- (void)setContext:(id)arg1;
- (void)setLargeView:(id)arg1;
- (void)setSmallView:(id)arg1;
- (void)setZoomingUp:(bool)arg1;
- (id)smallView;
- (double)transitionDuration:(id)arg1;
- (bool)zoomingUp;

@end