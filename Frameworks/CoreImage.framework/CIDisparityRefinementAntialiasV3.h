
@interface CIDisparityRefinementAntialiasV3 : CIFilter {
    CIImage * inputDisparityWeightImage;
    CIImage * inputImage;
    CIImage * inputPreprocImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputDisparityWeightImage;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)antialiasKernel;
- (id)inputDisparityWeightImage;
- (id)inputImage;
- (id)inputPreprocImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputDisparityWeightImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputPreprocImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end