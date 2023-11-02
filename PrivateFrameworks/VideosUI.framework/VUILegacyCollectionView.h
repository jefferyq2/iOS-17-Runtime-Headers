
@interface VUILegacyCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    double  _bottomPadding;
    struct { 
        unsigned int _respondsToDidPlayItem : 1; 
        unsigned int _respondsToDidLongPressItem : 1; 
        unsigned int _respondsToCanBecomeFocused : 1; 
    }  _delegateFlags;
    struct { 
        unsigned int layoutBelowDisabled : 1; 
    }  _flags;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gradientBoundsInsets;
    NSIndexPath * _indexPathForLastFocusedItem;
    UILongPressGestureRecognizer * _longPressRecognizer;
}

@property (getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _gradientBoundsInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUILegacyCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSIndexPath *indexPathForLastFocusedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getGradientMaskBounds:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 startInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 endInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 intensities:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_gradientBoundsInsets;
- (void)_longPressAction:(id)arg1;
- (void)_notifyDidScroll;
- (void)_performBlockWithLongPressedCellIndexPath:(id /* block */)arg1;
- (void)_performWithoutLayoutBelow:(id /* block */)arg1;
- (void)_setGradientBoundsInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPathForLastFocusedItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutBelowIfNeeded;
- (void)reloadData;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;

@end