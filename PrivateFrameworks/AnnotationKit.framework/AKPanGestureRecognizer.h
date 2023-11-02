
@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {
    NSMutableSet * _additionalTouches;
    NSMutableArray * _currentAccumulatedTouches;
    double  _currentMaxWeight;
    double  _currentWeight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfFirstTouch;
    bool  _penGestureDetected;
}

@property (nonatomic, readonly) unsigned long long additionalNumberOfTouches;
@property (nonatomic, retain) NSMutableSet *additionalTouches;
@property (nonatomic, retain) NSMutableArray *currentAccumulatedTouches;
@property (nonatomic) double currentMaxWeight;
@property (nonatomic) double currentWeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationOfFirstTouch;
@property (nonatomic) bool penGestureDetected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkTouchForStylus:(id)arg1;
- (id)accumulatedTouches;
- (unsigned long long)additionalNumberOfTouches;
- (id)additionalTouches;
- (id)currentAccumulatedTouches;
- (double)currentMaxWeight;
- (double)currentWeight;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouch;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouchInView:(id)arg1;
- (bool)penGestureDetected;
- (void)reset;
- (void)resetAccumulatedTouches;
- (void)resetAdditionalTouches;
- (void)setAdditionalTouches:(id)arg1;
- (void)setCurrentAccumulatedTouches:(id)arg1;
- (void)setCurrentMaxWeight:(double)arg1;
- (void)setCurrentWeight:(double)arg1;
- (void)setLocationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPenGestureDetected:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end