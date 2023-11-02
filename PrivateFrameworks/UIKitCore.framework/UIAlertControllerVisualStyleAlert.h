
@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle

- (double)_marginAroundActionGroup;
- (double)accessibilityWidth;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForContainerView:(id)arg1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (bool)placementAvoidsKeyboard;
- (id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;
- (double)textFieldHorizontalMargin;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(bool)arg1 ofAlertController:(id)arg2;

@end