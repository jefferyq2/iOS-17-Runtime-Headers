
@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */  _completionHandler;
}

- (void)dealloc;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)invokeWithRoutePredictions:(id)arg1 predictionContext:(id)arg2;

@end