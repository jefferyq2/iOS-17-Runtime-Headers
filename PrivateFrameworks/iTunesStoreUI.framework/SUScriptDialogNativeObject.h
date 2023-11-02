
@interface SUScriptDialogNativeObject : SUScriptNativeObject

- (id)_makeAlertControllerForDialog:(id)arg1 style:(long long)arg2;
- (void)_showSheetInView:(id)arg1 fromViewController:(id)arg2;
- (void)_tearDownForDismissWithButtonIndex:(long long)arg1;
- (void)dismiss;
- (void)show;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showSheet;
- (void)showSheetInViewController:(id)arg1;

@end