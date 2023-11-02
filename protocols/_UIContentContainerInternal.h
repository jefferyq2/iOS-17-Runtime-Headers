
@protocol _UIContentContainerInternal <UIContentContainer>

@required

- (bool)_monitorsSystemLayoutFittingSize;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1 childViewController:(UIViewController *)arg2;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id <UIContentContainer>)arg1;

@end