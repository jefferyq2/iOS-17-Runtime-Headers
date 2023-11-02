
@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {
    NSSet * _touches;
}

@property (nonatomic, copy) NSSet *touches;

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (bool)_allTouchesAreEndedOrCancelled:(id)arg1;
- (void)_updateTouchesFromEvent:(id)arg1;
- (bool)_wantsPartialTouchSequences;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setTouches:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end