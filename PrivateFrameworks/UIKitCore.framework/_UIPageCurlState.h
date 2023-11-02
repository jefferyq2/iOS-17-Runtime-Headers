
@interface _UIPageCurlState : _UITransitionState <CAAnimationDelegate> {
    UIView * _backPageView;
    UIView * _backView;
    long long  _completionCount;
    long long  _curlState;
    long long  _curlType;
    id /* block */  _finally;
    bool  _finished;
    UIView * _frontPageView;
    UIView * _frontView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    _UIPageCurl * _pageCurl;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceLocation;
    bool  _willComplete;
}

@property (nonatomic, readonly) UIView *backPageView;
@property (nonatomic, readonly) UIView *backView;
@property (nonatomic, readonly) long long curlState;
@property (nonatomic, readonly) long long curlType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *frontPageView;
@property (nonatomic, readonly) UIView *frontView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic, readonly) _UIPageCurl *pageCurl;
@property (getter=hasPendingAnimations, nonatomic, readonly) bool pendingAnimations;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } referenceLocation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_effectiveTransitionDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageViewFrame;
- (void)addBackPageContent;
- (void)addFrontPageContent;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)backPageView;
- (id)backView;
- (void)cleanup;
- (void)cleanupWithFinishedState:(bool)arg1 completedState:(bool)arg2;
- (long long)curlState;
- (long long)curlType;
- (void)dealloc;
- (void)finally;
- (id)frontPageView;
- (id)frontView;
- (bool)hasPendingAnimations;
- (void)incrementCompletionCount;
- (id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(struct CGPoint { double x1; double x2; })arg3 withReferenceLocation:(struct CGPoint { double x1; double x2; })arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(id /* block */)arg8 finally:(id /* block */)arg9;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (void)invalidatePageCurl;
- (bool)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (id)pageCurl;
- (struct CGPoint { double x1; double x2; })referenceLocation;
- (void)setCurlState:(long long)arg1 willComplete:(bool)arg2;

@end