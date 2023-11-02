
@interface ConversationKit.EffectsLayoutController : NSObject {
    void containingViewController;
}

- (void).cxx_destruct;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSizeFor:(id)arg1;
- (id)init;
- (id)initWithContainingViewController:(id)arg1;
- (bool)shouldAlwaysPresentExpandedAppsFor:(id)arg1;

@end