
@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader> {
    TVPExternalImageConfig * _config;
    NSMutableSet * _imageProxies;
    NSMutableDictionary * _imageProxyMappings;
    NSMutableSet * _loadedImageActualTimes;
}

@property (nonatomic, retain) TVPExternalImageConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstImageTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *imageProxies;
@property (nonatomic, retain) NSMutableDictionary *imageProxyMappings;
@property (nonatomic, readonly) double lastImageTime;
@property (nonatomic, retain) NSMutableSet *loadedImageActualTimes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double*)arg2 imageInterval:(double)arg3;
- (id)_closestURLForImageTime:(double)arg1 actualTime:(double*)arg2;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2;
- (id)config;
- (double)firstImageTime;
- (bool)imageIsLoadedForTime:(double)arg1;
- (id)imageProxies;
- (id)imageProxyMappings;
- (id)initWithConfig:(id)arg1;
- (void)invalidate;
- (double)lastImageTime;
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 withHandler:(id /* block */)arg3;
- (id)loadedImageActualTimes;
- (id)loadedImageForTime:(double)arg1;
- (void)setConfig:(id)arg1;
- (void)setImageProxies:(id)arg1;
- (void)setImageProxyMappings:(id)arg1;
- (void)setLoadedImageActualTimes:(id)arg1;

@end