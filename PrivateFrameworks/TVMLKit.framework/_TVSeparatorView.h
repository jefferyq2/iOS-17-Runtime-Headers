
@interface _TVSeparatorView : UIView {
    UIView * _line1;
    UIView * _line2;
    double  _lineHeight;
    UIView * _separatorComponent;
    UIColor * _tintColor;
}

@property (nonatomic) double lineHeight;
@property (nonatomic) UIView *separatorComponent;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)separatorViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)layoutSubviews;
- (double)lineHeight;
- (id)preferredFocusEnvironments;
- (id)separatorComponent;
- (void)setLineHeight:(double)arg1;
- (void)setSeparatorComponent:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end