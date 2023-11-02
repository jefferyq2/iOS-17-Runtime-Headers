
@interface PFAnimatedImage : NSObject {
    double  _duration;
    PFFrameCache * _frameCache;
    unsigned long long  _frameCount;
    double * _frameDelayTimes;
    struct CGImageSource { } * _imageSource;
    unsigned long long  _loopCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
}

@property (nonatomic) long long cacheStrategy;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) PFFrameCache *frameCache;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;

- (void).cxx_destruct;
- (void)_loadLoopCountAndFrameDelayTimes;
- (void)_preloadDelayTimes;
- (long long)cacheStrategy;
- (void)dealloc;
- (double)duration;
- (id)frameCache;
- (unsigned long long)frameCount;
- (double)frameDelayAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(bool)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(bool)arg3;
- (unsigned long long)loopCount;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)setCacheStrategy:(long long)arg1;

@end