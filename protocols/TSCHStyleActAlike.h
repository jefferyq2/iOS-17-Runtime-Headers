
@protocol TSCHStyleActAlike <NSObject, TSDMixing>

@required

- (id)boxedDefaultValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (bool)definesProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (bool)overridesProperty:(int)arg1;
- (TSSPropertySet *)properties;
- (id)valueForProperty:(int)arg1;

@end