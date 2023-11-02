
@interface SKUIButtonBorderStyle : NSObject <NSCopying> {
    IKColor * _borderColor;
    double  _borderWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    struct IKCornerRadii { 
        double bottomLeft; 
        double bottomRight; 
        double topLeft; 
        double topRight; 
    }  _cornerRadii;
    IKColor * _fillColor;
    NSString * _namedCornerStyle;
}

@property (nonatomic, copy) IKColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) struct IKCornerRadii { double x1; double x2; double x3; double x4; } cornerRadii;
@property (nonatomic, copy) IKColor *fillColor;
@property (nonatomic, copy) NSString *namedCornerStyle;

- (void).cxx_destruct;
- (bool)_usesBackgroundWithAlpha:(id)arg1;
- (id)bezierPathWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)borderColor;
- (double)borderWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct IKCornerRadii { double x1; double x2; double x3; double x4; })cornerRadii;
- (id)fillColor;
- (id)initWithElementStyle:(id)arg1;
- (id)namedCornerStyle;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadii:(struct IKCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setNamedCornerStyle:(id)arg1;

@end