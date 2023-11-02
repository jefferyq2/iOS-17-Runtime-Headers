
@interface GKSwipeToEditStateMachine : _GKStateMachine <UIGestureRecognizerDelegate> {
    UICollectionView * _collectionView;
    int  _debounce;
    GKCancelSwipeToEditGestureRecognizer * _editModeCancelRecognizer;
    GKCollectionViewCell * _editingCell;
    GKCollectionViewDataSource * _gkDataSource;
    _UIDynamicAnimation * _openAnimation;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _startTrackingX;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKCancelSwipeToEditGestureRecognizer *editModeCancelRecognizer;
@property (nonatomic, retain) GKCollectionViewCell *editingCell;
@property (nonatomic, retain) GKCollectionViewDataSource *gkDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIDynamicAnimation *openAnimation;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double startTrackingX;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSIndexPath *trackedIndexPath;

- (void).cxx_destruct;
- (id)collectionView;
- (void)didEnterAnimatingOpenState;
- (void)didEnterAnimatingShutState;
- (void)didEnterEditingState;
- (void)didEnterNothingState;
- (void)didExitAnimatingOpenState;
- (void)didExitEditingState;
- (void)didExitNothingState;
- (id)editModeCancelRecognizer;
- (id)editingCell;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gkDataSource;
- (void)handleCancelTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (id)openAnimation;
- (id)panGestureRecognizer;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditModeCancelRecognizer:(id)arg1;
- (void)setEditingCell:(id)arg1;
- (void)setGkDataSource:(id)arg1;
- (void)setOpenAnimation:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setStartTrackingX:(double)arg1;
- (void)shutActionPaneForEditingCellAnimated:(bool)arg1;
- (double)startTrackingX;
- (id)trackedIndexPath;
- (void)viewDidDisappear:(bool)arg1;
- (double)xPositionForTranslation:(struct CGPoint { double x1; double x2; })arg1;

@end