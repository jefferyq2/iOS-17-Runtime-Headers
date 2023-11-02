
@interface VUIWatchNowTemplateBackgroundLayer : CAGradientLayer {
    long long  _uiStyle;
}

@property (nonatomic) long long uiStyle;

- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStyle:(long long)arg2;
- (void)setUiStyle:(long long)arg1;
- (long long)uiStyle;
- (void)updateStyle:(long long)arg1;

@end