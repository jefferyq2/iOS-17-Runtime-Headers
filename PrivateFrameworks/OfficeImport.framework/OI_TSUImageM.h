
@interface OI_TSUImageM : OITSUImage

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)init;
+ (id)initWithCGImage:(struct CGImage { }*)arg1;
+ (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)initWithContentsOfFile:(id)arg1;
+ (id)initWithData:(id)arg1;
+ (id)initWithImageSourceRef:(struct CGImageSource { }*)arg1;
+ (id)initWithUIImage:(id)arg1;

@end