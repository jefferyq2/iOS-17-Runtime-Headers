
@interface TVPExternalImageConfig : NSObject {
    NSURL * _baseURL;
    long long  _imageCount;
    double  _imageInterval;
    NSString * _imageNameFormatString;
    bool  _usesOneBasedImageIndexes;
    NSString * _version;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic) long long imageCount;
@property (nonatomic) double imageInterval;
@property (nonatomic, copy) NSString *imageNameFormatString;
@property (nonatomic) bool usesOneBasedImageIndexes;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (id)baseURL;
- (long long)imageCount;
- (double)imageInterval;
- (id)imageNameFormatString;
- (void)setBaseURL:(id)arg1;
- (void)setImageCount:(long long)arg1;
- (void)setImageInterval:(double)arg1;
- (void)setImageNameFormatString:(id)arg1;
- (void)setUsesOneBasedImageIndexes:(bool)arg1;
- (void)setVersion:(id)arg1;
- (bool)usesOneBasedImageIndexes;
- (id)version;

@end