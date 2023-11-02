
@interface CKAppMenuPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end