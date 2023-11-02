
@interface SiriUIKeyline : UIView {
    UIColor * _customBackgroundColor;
    double  _customLeftPadding;
    double  _customRightPadding;
    UIView * _keyLineView;
    long long  _keylineType;
    bool  _veritical;
}

@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (nonatomic) long long keylineType;
@property (getter=_isVeritical, setter=_setVertical:, nonatomic) bool veritical;

+ (id)keyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(long long)arg1;
+ (id)keylineWithKeylineType:(long long)arg1 platterStyling:(bool)arg2;
+ (id)verticalKeyline;

- (void).cxx_destruct;
- (bool)_isVeritical;
- (id)_keylineColorForType:(long long)arg1 platterStyling:(bool)arg2;
- (double)_keylineThicknessForType:(long long)arg1;
- (void)_setVertical:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 useAutolayout:(bool)arg2;
- (id)customBackgroundColor;
- (double)customLeftPadding;
- (double)customRightPadding;
- (id)initWithKeylineType:(long long)arg1;
- (id)initWithKeylineType:(long long)arg1 platterStyling:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)keylineType;
- (void)layoutSubviews;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setCustomLeftPadding:(double)arg1;
- (void)setCustomRightPadding:(double)arg1;
- (void)setKeylineType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end