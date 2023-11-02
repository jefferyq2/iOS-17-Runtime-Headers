
@interface CVAPortraitResult_Impl : NSObject <CVAPortraitResult> {
    <CVAMattingResult> * _mattingResult;
    struct __CVBuffer { } * _portraitPixelBuffer;
    float  _portraitStability;
    float  _relightingStability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <CVAMattingResult> *mattingResult;
@property (readonly) struct __CVBuffer { }*portraitPixelBuffer;
@property (readonly) float portraitStability;
@property (readonly) float relightingStability;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(struct __CVBuffer { }*)arg2 portraitStability:(float)arg3;
- (id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(struct __CVBuffer { }*)arg2 portraitStability:(float)arg3 relightingStability:(float)arg4;
- (id)mattingResult;
- (struct __CVBuffer { }*)portraitPixelBuffer;
- (float)portraitStability;
- (float)relightingStability;

@end