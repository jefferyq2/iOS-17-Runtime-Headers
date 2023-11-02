
@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding> {
    double  _colorA;
    double  _colorB;
    double  _colorG;
    double  _colorR;
}

@property (nonatomic) double colorA;
@property (nonatomic) double colorB;
@property (nonatomic) double colorG;
@property (nonatomic) double colorR;

+ (id)blackColor;
+ (id)lightGrayColor;
+ (bool)supportsSecureCoding;
+ (id)whiteColor;

- (double)colorA;
- (double)colorB;
- (double)colorG;
- (double)colorR;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (bool)isEqual:(id)arg1;
- (void)setColorA:(double)arg1;
- (void)setColorB:(double)arg1;
- (void)setColorG:(double)arg1;
- (void)setColorR:(double)arg1;

@end