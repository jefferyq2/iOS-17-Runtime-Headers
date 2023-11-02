
@protocol CKTypingIndicatorLayerProtocol <NSObject>

@required

- (bool)hasDarkBackground;
- (void)setHasDarkBackground:(bool)arg1;
- (void)startGrowAnimation;
- (void)startGrowAnimationWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopAnimation;
- (void)stopPulseAnimation;

@optional

- (void)setTraitCollection:(UITraitCollection *)arg1;

@end