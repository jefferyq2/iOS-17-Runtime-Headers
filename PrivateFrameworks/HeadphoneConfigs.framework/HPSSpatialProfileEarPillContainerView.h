
@interface HPSSpatialProfileEarPillContainerView : UIView {
    long long  _clockwise;
    long long  _counterwise;
    struct CGPoint { 
        double x; 
        double y; 
    }  _enrollViewCenter;
    bool  _hasPillStateStash;
    long long  _lastAngle;
    long long  _numberOfVisiblePillViews;
    NSMutableArray * _pillViews;
    double  _radius;
    unsigned long long  _stashedPillStates;
    int  _state;
    LAUICheckmarkLayer * _successAnimation;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } enrollViewCenter;
@property (nonatomic, readonly) double radius;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)_animateToFinishedCompletion:(id /* block */)arg1;
- (long long)_indexForPillAtAngle:(double)arg1;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)animateToState:(int)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })enrollViewCenter;
- (void)fillCentralPillsWithCompletion:(id /* block */)arg1;
- (void)fillLeftPillsWithCompletion:(id /* block */)arg1;
- (bool)fillPillsAroundAngle:(double)arg1;
- (bool)fillPillsAroundAngle:(double)arg1 forTutorial:(bool)arg2;
- (void)fillRightPillsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)layoutSubviews;
- (double)percentOfPillsCompleted;
- (double)radius;
- (void)resetPillsAnimated:(bool)arg1;
- (void)setAllPillState:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setEnrollViewCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setState:(int)arg1;
- (void)stashPillStates;
- (int)state;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unfilledDirections;
- (void)unstashPillStatesAnimated:(bool)arg1;
- (bool)unstashPillStatesIfNeededAnimated:(bool)arg1;

@end