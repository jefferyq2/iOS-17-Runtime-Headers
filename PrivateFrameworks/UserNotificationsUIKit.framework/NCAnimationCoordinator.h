
@interface NCAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {
    unsigned long long  _animationOptions;
    id /* block */  _animations;
    id /* block */  _completion;
    bool  _durationInherited;
    BSUIAnimationFactory * _factory;
    _UIViewControllerTransitionContext * _transitionContext;
}

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDurationInherited, nonatomic) bool durationInherited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UIViewControllerTransitionCoordinator> *transitionCoordinator;

+ (id)animationCoordinatorWithDuration:(double)arg1;

- (void).cxx_destruct;
- (void)animate:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (unsigned long long)animationOptions;
- (id /* block */)animations;
- (id /* block */)completion;
- (id)initWithAnimationFactory:(id)arg1;
- (bool)isDurationInherited;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (void)setAnimations:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDurationInherited:(bool)arg1;
- (id)transitionCoordinator;
- (double)transitionDuration:(id)arg1;
- (void)viewOfChildContainer:(id)arg1 willChangeToSize:(struct CGSize { double x1; double x2; })arg2;

@end