
@interface SUScriptPopOver : SUScriptObject {
    UIViewController * _contentViewController;
    bool  _ignoreDismiss;
}

@property (readonly) UIViewController *activeViewController;
@property long long backgroundStyle;
@property (readonly) long long backgroundStyleBlack;
@property (readonly) long long backgroundStyleClear;
@property (readonly) long long backgroundStyleCream;
@property (readonly) long long backgroundStyleDefault;
@property (readonly) long long backgroundStyleShare;
@property double contentHeight;
@property double contentWidth;
@property (nonatomic, retain) UIPopoverController *nativePopoverController;
@property (nonatomic, readonly) UIPopoverController *presentablePopoverController;
@property (readonly) SUScriptViewController *presentingViewController;
@property (retain) SUScriptViewController *viewController;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_dismissAnimated:(bool)arg1;
- (bool)_isViewControllerVisible;
- (id)_nativeViewController;
- (void)_overlayWillShowNotification:(id)arg1;
- (id)_popOverController;
- (id)_presentablePopoverController;
- (void)_setIgnoresDismiss:(bool)arg1;
- (void)_setNativeViewController:(id)arg1;
- (bool)_shouldDisplayAsPopover;
- (void)_showAsModalViewController;
- (void)_viewControllerDidDismiss:(id)arg1;
- (id)activeViewController;
- (id)attributeKeys;
- (long long)backgroundStyle;
- (long long)backgroundStyleBlack;
- (long long)backgroundStyleClear;
- (long long)backgroundStyleCream;
- (long long)backgroundStyleDefault;
- (long long)backgroundStyleShare;
- (double)contentHeight;
- (double)contentWidth;
- (void)dealloc;
- (void)dismissAnimated:(id)arg1;
- (id)init;
- (bool)isVisible;
- (id)nativePopoverController;
- (id)presentablePopoverController;
- (id)presentingViewController;
- (id)scriptAttributeKeys;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setContentHeight:(double)arg1;
- (void)setContentWidth:(double)arg1;
- (void)setContentWidth:(double)arg1 height:(double)arg2 animated:(bool)arg3;
- (void)setNativePopoverController:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)showFromElement:(id)arg1;
- (bool)showFromNavigationItem:(id)arg1;
- (void)tearDownUserInterface;
- (id)viewController;

@end