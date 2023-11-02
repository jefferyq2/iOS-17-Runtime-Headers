
@interface SUUISizeToFitImageDataConsumer : SUUIImageDataConsumer {
    struct CGSize { 
        double width; 
        double height; 
    }  _constraintSize;
    bool  _custom;
    UIColor * _gradientEndColor;
    double  _gradientHeight;
}

@property (nonatomic) struct CGSize { double x1; double x2; } constraintSize;
@property (nonatomic, retain) UIColor *gradientEndColor;
@property (nonatomic) double gradientHeight;

+ (id)consumerWithConstraintSize2:(struct CGSize { double x1; double x2; })arg1;
+ (id)consumerWithConstraintSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_drawGradientWithContext:(struct CGContext { }*)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })constraintSize;
- (id)gradientEndColor;
- (double)gradientHeight;
- (id)imageForImage:(id)arg1;
- (void)setConstraintSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientHeight:(double)arg1;

@end