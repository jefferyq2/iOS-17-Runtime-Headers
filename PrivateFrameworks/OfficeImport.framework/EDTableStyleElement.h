
@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
    unsigned int  mBandSize;
    EDDifferentialStyle * mDifferentialStyle;
    EDCollection * mDifferentialStyles;
    int  mType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tableStyleElementWithResources:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)bandSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)differentialStyle;
- (id)initWithResources:(id)arg1;
- (long long)key;
- (void)setBandSize:(unsigned int)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (void)setDifferentialStyleWithIndex:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end