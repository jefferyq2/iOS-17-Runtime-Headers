
@interface OADColorTransform : NSObject <NSCopying> {
    int  mType;
}

+ (float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(bool)arg3;
+ (id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (int)type;

@end