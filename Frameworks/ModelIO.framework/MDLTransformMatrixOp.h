
@interface MDLTransformMatrixOp : NSObject <MDLTransformOp> {
    MDLAnimatedMatrix4x4 * _animatedValue;
    bool  _inverse;
    NSString * _name;
}

@property (nonatomic, readonly) MDLAnimatedMatrix4x4 *animatedValue;
@property (nonatomic) bool inverse;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (bool)IsInverseOp;
- (id)animatedValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4AtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })float4x4AtTime:(double)arg1;
- (id)initWithName:(id)arg1 inverse:(bool)arg2 data:(id)arg3;
- (bool)inverse;
- (id)name;
- (void)setInverse:(bool)arg1;

@end