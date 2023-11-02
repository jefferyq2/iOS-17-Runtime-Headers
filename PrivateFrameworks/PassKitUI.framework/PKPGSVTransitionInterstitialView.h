
@interface PKPGSVTransitionInterstitialView : UIView {
    bool  _animated;
    unsigned long long  _animationCounter;
    NSMutableArray * _completions;
    bool  _invalidated;
    bool  _presented;
    bool  _presentedItemDirty;
    UIView * _presentedItemSnapshot;
    bool  _presentingItemDirty;
    UIView * _presentingItemSnapshot;
    PKSpringAnimationFactory * _springFactory;
}

@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic, retain) PKSpringAnimationFactory *springFactory;

- (void).cxx_destruct;
- (id)_animationForKeyPath:(id)arg1;
- (void)_decrementAnimationCount;
- (void)_executeCompletionHandlers:(bool)arg1;
- (id)_highFrameRateAnimationForKeyPath:(id)arg1;
- (void)_incrementAnimationCount;
- (id)_snapshotForView:(id)arg1;
- (void)_updateFrameForTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 track:(bool)arg3;
- (void)addCompletion:(id /* block */)arg1;
- (void)addPresentedItem:(id)arg1;
- (void)addPresentingItem:(id)arg1;
- (void)beginTrackingExternalAnimation;
- (void)dealloc;
- (void)endTrackingExternalAnimation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 presented:(bool)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isPresented;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)setPresented:(bool)arg1 withTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)setSpringFactory:(id)arg1;
- (id)springFactory;
- (void)updateFrameForTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;

@end