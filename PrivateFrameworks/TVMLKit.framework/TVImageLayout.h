
@interface TVImageLayout : TVViewLayout {
    bool  _allowsNonOpaqueShadows;
    double  _aspectRatio;
    UIColor * _borderColor;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _borderWidth;
    bool  _continuousBorder;
    NSString * _cropCode;
    IKFourTuple * _ikBorderRadius;
    IKColor * _ikDarkTintColor;
    IKColor * _ikTintColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    NSString * _imageTreatment;
    NSString * _inlineTitle;
    NSString * _placeholderArtworkName;
    long long  _scaleMode;
    NSShadow * _shadow;
    double  _upscaleFactor;
    bool  _useInSearchPartial;
}

@property (nonatomic) bool allowsNonOpaqueShadows;
@property (nonatomic) double aspectRatio;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidth;
@property (nonatomic) bool continuousBorder;
@property (nonatomic, copy) NSString *cropCode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } decoratorSize;
@property (nonatomic, retain) IKFourTuple *ikBorderRadius;
@property (nonatomic, retain) IKColor *ikDarkTintColor;
@property (nonatomic, retain) IKColor *ikTintColor;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic, copy) NSString *imageTreatment;
@property (nonatomic, copy) NSString *inlineTitle;
@property (nonatomic, copy) NSString *placeholderArtworkName;
@property (nonatomic) long long scaleMode;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic) double upscaleFactor;
@property (nonatomic) bool useInSearchPartial;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_aspectFitToSize:(struct CGSize { double x1; double x2; })arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 aspectRatio:(double)arg3;
- (bool)allowsNonOpaqueShadows;
- (double)aspectRatio;
- (id)borderColor;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidth;
- (bool)continuousBorder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropCode;
- (struct CGSize { double x1; double x2; })decoratorSize;
- (double)defaultFocusSizeIncrease;
- (id)ikBorderRadius;
- (id)ikDarkTintColor;
- (id)ikTintColor;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageSymbolConfiguration;
- (id)imageTreatment;
- (id)init;
- (id)inlineTitle;
- (id)placeholderArtworkName;
- (long long)scaleMode;
- (void)setAllowsNonOpaqueShadows:(bool)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidth:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContinuousBorder:(bool)arg1;
- (void)setCropCode:(id)arg1;
- (void)setIkBorderRadius:(id)arg1;
- (void)setIkDarkTintColor:(id)arg1;
- (void)setIkTintColor:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageSymbolConfiguration:(id)arg1;
- (void)setImageTreatment:(id)arg1;
- (void)setInlineTitle:(id)arg1;
- (void)setPlaceholderArtworkName:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setShadow:(id)arg1;
- (void)setUpscaleFactor:(double)arg1;
- (void)setUseInSearchPartial:(bool)arg1;
- (id)shadow;
- (double)upscaleFactor;
- (bool)useInSearchPartial;

@end