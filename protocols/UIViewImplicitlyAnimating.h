
@protocol UIViewImplicitlyAnimating <UIViewAnimating>

@optional

- (void)addAnimations:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)addAnimations:(void *)arg1 delayFactor:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, double
- (void)addCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)continueAnimationWithTimingParameters:(id <UITimingCurveProvider>)arg1 durationFactor:(double)arg2;

@end