
@interface WLKArtworkVariant : NSObject {
    bool  _alpha;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    long long  _artworkType;
    NSString * _artworkURLString;
    NSString * _artworkURLTemplate;
    NSString * _format;
    bool  _supportsLayeredImage;
}

@property (getter=hasAlpha, nonatomic) bool alpha;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, readonly, copy) NSString *artworkURLString;
@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic) bool supportsLayeredImage;

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 cropCode:(id)arg3 format:(id)arg4;
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 format:(id)arg3;

- (void).cxx_destruct;
- (id)_sizeDescription:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)artworkSizeTemplateURL;
- (long long)artworkType;
- (id)artworkURL;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1 cropCode:(id)arg2 format:(id)arg3;
- (id)artworkURLForSize:(struct CGSize { double x1; double x2; })arg1 format:(id)arg2;
- (id)artworkURLString;
- (id)description;
- (id)format;
- (bool)hasAlpha;
- (id)initWithDictionary:(id)arg1;
- (void)setAlpha:(bool)arg1;
- (void)setSupportsLayeredImage:(bool)arg1;
- (bool)supportsLayeredImage;

@end