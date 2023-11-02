
@protocol FxParameterCreationAPI_v3 <FxParameterCreationAPI_v2>

@required

- (bool)addPathPickerWithName:(NSString *)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addPercentSliderWithName:(NSString *)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;

@end