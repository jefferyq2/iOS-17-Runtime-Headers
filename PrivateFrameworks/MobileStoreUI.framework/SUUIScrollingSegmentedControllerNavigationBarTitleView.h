
@interface SUUIScrollingSegmentedControllerNavigationBarTitleView : UIView {
    long long  _layoutStyle;
    SUUIInteractiveSegmentedControl * _segmentedControl;
    double  _segmentedControlMinimumHeight;
}

@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) SUUIInteractiveSegmentedControl *segmentedControl;
@property (nonatomic) double segmentedControlMinimumHeight;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)segmentedControl;
- (double)segmentedControlMinimumHeight;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSegmentedControlMinimumHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end