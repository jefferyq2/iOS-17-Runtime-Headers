
@interface PAECheckerboard : PAEGeneratorDefaultBase

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (void)filteredEdges:(bool*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (void)getTransformMatrix:(double**)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5;
- (id)initWithAPIManager:(id)arg1;
- (id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2;
- (bool)parameterChanged:(unsigned int)arg1;
- (id)properties;
- (void)updateShapeParameter:(unsigned int)arg1 atTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (bool)variesOverTime;

@end