
@interface SiriSharedUIViewStackContainer : SiriSharedUIStandardView <SiriSharedUIStackableContentDelegate, SiriSharedUIViewStackContainerHosting> {
    NSLayoutConstraint * _bottomContainerConstraint;
    double  _bottomPadding;
    SiriSharedUIViewStack * _bottomViewStack;
    UIView * _containingView;
    NSLayoutConstraint * _containingViewHeightConstraint;
    NSArray * _contentViews;
    SiriSharedUIViewStack * _customConstraintsViewStack;
    bool  _isInAmbient;
    NSLayoutConstraint * _leadingContainerConstraint;
    SiriSharedUIViewStack * _listViewStack;
    SiriSharedUIStandardScrollView * _scrollView;
    NSLayoutConstraint * _temporaryTopConstraintForBottomViewStack;
    NSLayoutConstraint * _topContainerConstraint;
    double  _topPadding;
    SiriSharedUIViewStack * _topViewStack;
    NSLayoutConstraint * _trailingContainerConstraint;
    SiriSharedUIRectSet * _transitionalContentViewFrames;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomContainerConstraint;
@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) SiriSharedUIViewStack *bottomViewStack;
@property (nonatomic, retain) UIView *containingView;
@property (nonatomic, retain) NSLayoutConstraint *containingViewHeightConstraint;
@property (nonatomic, readonly) NSArray *contentViews;
@property (nonatomic, retain) SiriSharedUIViewStack *customConstraintsViewStack;
@property (nonatomic) bool isInAmbient;
@property (nonatomic, retain) NSLayoutConstraint *leadingContainerConstraint;
@property (nonatomic, retain) SiriSharedUIViewStack *listViewStack;
@property (nonatomic, retain) SiriSharedUIStandardScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *temporaryTopConstraintForBottomViewStack;
@property (nonatomic, retain) NSLayoutConstraint *topContainerConstraint;
@property (nonatomic, readonly) double topPadding;
@property (nonatomic, retain) SiriSharedUIViewStack *topViewStack;
@property (nonatomic, retain) NSLayoutConstraint *trailingContainerConstraint;
@property (getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:, nonatomic, copy) SiriSharedUIRectSet *transitionalContentViewFrames;

- (void).cxx_destruct;
- (void)_attachContentView:(id)arg1;
- (void)_clearTransitionalContentViewFrameSnapshots;
- (void)_configureContainingView;
- (void)_configureCustomTopAndBottomViews:(id)arg1;
- (id)_mostRecentBottomStackViewAnchor;
- (id)_mostRecentTopStackViewAnchor;
- (void)_setContentViews:(id)arg1;
- (void)_setTransitionalContentViewFrames:(id)arg1;
- (void)_snapshotContentViewFramesForTransition;
- (id)_stackContainingContentView:(id)arg1;
- (id)_transitionalContentViewFrames;
- (void)_updateContainingViewConstraints;
- (void)_updateContainingViewTopConstraint;
- (void)_updateContainingViewTrailingConstraint;
- (void)_updateLeadingTrailingConstraints;
- (void)_updateScrollViewContentInsets;
- (void)addContentView:(id)arg1;
- (id)bottomContainerConstraint;
- (double)bottomPadding;
- (id)bottomViewStack;
- (void)bringSubviewToFront:(id)arg1;
- (id)containingView;
- (id)containingViewHeightConstraint;
- (id)contentViews;
- (id)customConstraintsViewStack;
- (void)didDismissModalContent;
- (void)didMoveToWindow;
- (bool)hasContentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hostingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentViews:(id)arg2;
- (bool)isInAmbient;
- (id)leadingContainerConstraint;
- (id)listViewStack;
- (void)relayout;
- (void)removeContentView:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (id)scrollView;
- (void)setBottomContainerConstraint:(id)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setBottomPadding:(double)arg1 animatedWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3 alongsideAnimations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)setBottomViewStack:(id)arg1;
- (void)setContainingView:(id)arg1;
- (void)setContainingViewHeightConstraint:(id)arg1;
- (void)setCustomConstraintsViewStack:(id)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setLeadingContainerConstraint:(id)arg1;
- (void)setListViewStack:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTemporaryTopConstraintForBottomViewStack:(id)arg1;
- (void)setTopContainerConstraint:(id)arg1;
- (void)setTopViewStack:(id)arg1;
- (void)setTrailingContainerConstraint:(id)arg1;
- (void)stackableContentDidLayout:(id)arg1;
- (double)stackableContentMaximumContainerWidth;
- (void)stackableContentWillUpdateLayout:(id)arg1 withUpdatedContentSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (id)stackableViewsWithAttachment:(long long)arg1;
- (id)temporaryTopConstraintForBottomViewStack;
- (id)topContainerConstraint;
- (double)topPadding;
- (id)topViewStack;
- (id)trailingContainerConstraint;
- (void)updateConstraints;
- (void)willDismissModalContent;
- (void)willPresentModalContent;

@end