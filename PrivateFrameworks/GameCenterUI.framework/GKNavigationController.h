
@interface GKNavigationController : UINavigationController <UINavigationBarDelegate, UIViewControllerRestoration> {
    NSMutableArray * _deferredTransitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deferredTransitions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(bool)arg3;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(id /* block */)arg2;
- (id)_gkViewControllersForRestoringPopover;
- (void)_performDeferredTransition;
- (id)deferredTransitions;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (bool)hasEmbeddedPopoverNavigationStack;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popEmbeddedPopoverViewControllers;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDeferredTransitions:(id)arg1;
- (void)setupGKNavigationController;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)targetViewControllerForAction:(SEL)arg1;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;

@end