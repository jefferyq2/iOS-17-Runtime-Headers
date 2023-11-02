
@protocol OKViewControllerAudioSupport <NSObject>

@optional

- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)beginFadingWithDuration:(double)arg1;
- (void)endDucking;
- (void)endFading;
- (double)requiredDuckLevel;
- (void)setPlaybackAudioVolume:(double)arg1;

@end