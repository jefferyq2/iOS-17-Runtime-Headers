
@interface CIPinchDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputScale;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_pinchDistortionScaleGE1;
- (id)_pinchDistortionScaleLT1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeDOD:(float)arg1 scale:(float)arg2;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputScale;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputScale:(id)arg1;

@end