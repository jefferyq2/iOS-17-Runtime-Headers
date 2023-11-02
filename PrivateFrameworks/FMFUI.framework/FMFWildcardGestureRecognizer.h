
@interface FMFWildcardGestureRecognizer : UIGestureRecognizer {
    id /* block */  _touchesBeganCallback;
    id /* block */  _touchesEndedCallback;
}

@property (nonatomic, copy) id /* block */ touchesBeganCallback;
@property (nonatomic, copy) id /* block */ touchesEndedCallback;

- (void).cxx_destruct;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (void)reset;
- (void)setTouchesBeganCallback:(id /* block */)arg1;
- (void)setTouchesEndedCallback:(id /* block */)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id /* block */)touchesBeganCallback;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id /* block */)touchesEndedCallback;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end