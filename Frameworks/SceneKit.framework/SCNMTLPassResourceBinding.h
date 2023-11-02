
@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {
    struct { struct __C3DFXPassInput {} *x1; unsigned int x2; unsigned int x3; } * _inputs;
    struct __C3DFXPassInput { } * _samplerInput;
    long long  bufferSize;
    long long  inputsCount;
}

@property (nonatomic) long long bufferSize;
@property (nonatomic) long long inputsCount;

- (long long)bufferSize;
- (void)dealloc;
- (id)init;
- (long long)inputsCount;
- (void)setBufferSize:(long long)arg1;
- (void)setInputsCount:(long long)arg1;

@end