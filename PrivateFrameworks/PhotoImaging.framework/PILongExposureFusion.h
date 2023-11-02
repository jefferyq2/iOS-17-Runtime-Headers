
@interface PILongExposureFusion : CIFilter {
    CIVector * _inputAlignmentExtent;
    CIVector * _inputAlignmentTransform;
    CIImage * _inputImage;
    CIImage * _inputMaskImage;
    NSNumber * _inputRenderScale;
    CIImage * _inputStillImage;
    NSNumber * _inputVideoScale;
}

@property (nonatomic, retain) CIVector *inputAlignmentExtent;
@property (nonatomic, retain) CIVector *inputAlignmentTransform;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMaskImage;
@property (nonatomic, retain) NSNumber *inputRenderScale;
@property (nonatomic, retain) CIImage *inputStillImage;
@property (nonatomic, retain) NSNumber *inputVideoScale;

+ (bool)_debugDumpIntermediateImages;
+ (bool)debugDumpIntermediateImages;
+ (void)initialize;
+ (void)loadFusionTuningParameters;

- (void).cxx_destruct;
- (id)_computeNCCMapFromImage:(id)arg1 toImage:(id)arg2 scale:(double)arg3;
- (id)_fuseImage:(id)arg1 withGuideImage:(id)arg2 weightImage:(id)arg3 maskImage:(id)arg4;
- (id)_refineMaskImage:(id)arg1 guideImage:(id)arg2 scale:(double)arg3;
- (id)alignImage:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)inputAlignmentExtent;
- (id)inputAlignmentTransform;
- (id)inputImage;
- (id)inputMaskImage;
- (id)inputRenderScale;
- (id)inputStillImage;
- (id)inputVideoScale;
- (id)outputImage;
- (void)setInputAlignmentExtent:(id)arg1;
- (void)setInputAlignmentTransform:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;
- (void)setInputRenderScale:(id)arg1;
- (void)setInputStillImage:(id)arg1;
- (void)setInputVideoScale:(id)arg1;

@end