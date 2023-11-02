
@interface _TVStarHistogram : UIView {
    UIColor * _barEmptyColor;
    UIColor * _barFillColor;
    double  _lineSpacing;
    NSArray * _starBars;
    UIImage * _starImage;
}

@property (nonatomic, retain) UIColor *barEmptyColor;
@property (nonatomic, retain) UIColor *barFillColor;
@property (nonatomic) double lineSpacing;
@property (nonatomic, copy) NSArray *starBars;
@property (nonatomic, retain) UIImage *starImage;

+ (id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)histogramViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (id)barEmptyColor;
- (id)barFillColor;
- (bool)canBecomeFocused;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineSpacing;
- (void)setBarEmptyColor:(id)arg1;
- (void)setBarFillColor:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setStarBars:(id)arg1;
- (void)setStarImage:(id)arg1;
- (id)starBars;
- (id)starImage;

@end