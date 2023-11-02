
@interface SUUISeparatorView : UIView {
    UIColor * _color1;
    UIColor * _color2;
    long long  _separatorStyle;
}

@property (nonatomic, copy) UIColor *color1;
@property (nonatomic, copy) UIColor *color2;
@property (nonatomic) long long separatorStyle;

- (void).cxx_destruct;
- (id)color1;
- (id)color2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)separatorStyle;
- (void)setColor1:(id)arg1;
- (void)setColor2:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;

@end