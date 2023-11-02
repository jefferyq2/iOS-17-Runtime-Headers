
@interface TDEffectComponent : NSManagedObject

@property (nonatomic, retain) TDEffectType *effectType;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) NSSet *parameters;
@property (nonatomic, retain) TDEffectRenditionSpec *rendition;

+ (id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+ (id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor1;
+ (id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+ (id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+ (id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+ (id)keyPathsForValuesAffectingCUIEffectParameterTintable;

- (id)CUIEffectParameterAngle;
- (id)CUIEffectParameterBevelStyle;
- (id)CUIEffectParameterBlendMode;
- (id)CUIEffectParameterBlurSize;
- (id)CUIEffectParameterColor1;
- (id)CUIEffectParameterColor2;
- (id)CUIEffectParameterOffset;
- (id)CUIEffectParameterOpacity;
- (id)CUIEffectParameterOpacity2;
- (id)CUIEffectParameterSoftenSize;
- (id)CUIEffectParameterSpread;
- (id)CUIEffectParameterTintable;
- (void)addParametersToPreset:(id)arg1;
- (id)parameterOfType:(unsigned int)arg1;
- (void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3;
- (void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2;

@end