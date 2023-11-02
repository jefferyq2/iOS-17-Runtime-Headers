
@interface FMMapGestureRecognizer : UIGestureRecognizer {
    NSTimer * _doubleTapTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    bool  _isRTLOrientation;
    bool  _isSwipeEnabled;
    bool  _isSwipingFromTheEdge;
    bool  _isSwipingGestureEnded;
    bool  _isTrackingTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPoint;
    NSMutableArray * _otherGestures;
    UITouch * _previousTouch;
    double  _swipeThreshold;
    <FMMapGestureRecognizerDelegate> * _touchDelegate;
    int  _touchRadius;
    double  _velocity;
}

@property (nonatomic, retain) NSTimer *doubleTapTimer;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialTouchLocation;
@property (nonatomic) bool isRTLOrientation;
@property (nonatomic) bool isSwipeEnabled;
@property (nonatomic) bool isSwipingFromTheEdge;
@property (nonatomic) bool isSwipingGestureEnded;
@property (nonatomic) bool isTrackingTouches;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchPoint;
@property (nonatomic, retain) NSMutableArray *otherGestures;
@property (nonatomic, retain) UITouch *previousTouch;
@property (nonatomic) double swipeThreshold;
@property (nonatomic) <FMMapGestureRecognizerDelegate> *touchDelegate;
@property (nonatomic) int touchRadius;
@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (double)distanceBetweenPointA:(struct CGPoint { double x1; double x2; })arg1 andPointB:(struct CGPoint { double x1; double x2; })arg2;
- (id)doubleTapTimer;
- (void)finishSwipeGesture:(double)arg1;
- (id)init;
- (struct CGPoint { double x1; double x2; })initialTouchLocation;
- (void)invalidateGesture;
- (bool)isRTLOrientation;
- (bool)isSwipeEnabled;
- (bool)isSwipingFromTheEdge;
- (bool)isSwipingGestureEnded;
- (bool)isTrackingTouches;
- (struct CGPoint { double x1; double x2; })lastTouchPoint;
- (void)mapTappedTimer;
- (id)otherGestures;
- (id)previousTouch;
- (void)reset;
- (void)setDoubleTapTimer:(id)arg1;
- (void)setInitialTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIsRTLOrientation:(bool)arg1;
- (void)setIsSwipeEnabled:(bool)arg1;
- (void)setIsSwipingFromTheEdge:(bool)arg1;
- (void)setIsSwipingGestureEnded:(bool)arg1;
- (void)setIsTrackingTouches:(bool)arg1;
- (void)setLastTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOtherGestures:(id)arg1;
- (void)setPreviousTouch:(id)arg1;
- (void)setSwipeThreshold:(double)arg1;
- (void)setTouchDelegate:(id)arg1;
- (void)setTouchRadius:(int)arg1;
- (void)setVelocity:(double)arg1;
- (double)swipeThreshold;
- (id)touchDelegate;
- (int)touchRadius;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end