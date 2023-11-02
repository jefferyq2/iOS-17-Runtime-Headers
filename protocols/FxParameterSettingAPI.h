
@protocol FxParameterSettingAPI

@required

- (bool)setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2;
- (bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atTime:(double)arg4;

@end