
@interface _UINavigationControllerRefreshControlHost : NSObject <_UIRefreshControlHosting> {
    <_UINavigationControllerRefreshControlHostDelegate> * _delegate;
    UIView * _hostContainerView;
    UINavigationController * _navigationController;
    UIRefreshControl * _refreshControl;
    NSArray * _refreshControlConstraints;
    double  _restingHeightOfRefreshControl;
    UIScrollView * _scrollView;
    double  _unobstructedHeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UINavigationControllerRefreshControlHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fullHeightOfRefreshControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *hostContainerView;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property UIRefreshControl *refreshControl;
@property (retain) NSArray *refreshControlConstraints;
@property (readonly) bool refreshControlInsetsAffectScrollViewRubberBanding;
@property (nonatomic) double restingHeightOfRefreshControl;
@property (readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) double unobstructedHeight;

+ (bool)canHostRefreshControlOwnedByScrollView:(id)arg1 inNavigationController:(id)arg2;

- (void).cxx_destruct;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
- (void)_installRefreshControlIntoContainerView;
- (void)_notifyLayoutDidChange;
- (void)_removeRefreshControlFromContainerView;
- (double)_thresholdForObstructedContentFullAlpha;
- (double)_thresholdForObstructedContentZeroAlpha;
- (void)_updateFadeOutProgress;
- (void)dealloc;
- (void)decrementInsetHeight:(double)arg1;
- (id)delegate;
- (id)description;
- (double)fullHeightOfRefreshControl;
- (id)hostContainerView;
- (void)incrementInsetHeight:(double)arg1;
- (id)initWithNavigationController:(id)arg1 scrollView:(id)arg2;
- (bool)isHostingRefreshControlOwnedByScrollView:(id)arg1;
- (id)navigationController;
- (id)refreshControl;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (id)refreshControlConstraints;
- (bool)refreshControlInsetsAffectScrollViewRubberBanding;
- (double)restingHeightOfRefreshControl;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setHostContainerView:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setRefreshControlConstraints:(id)arg1;
- (void)setRestingHeightOfRefreshControl:(double)arg1;
- (void)setUnobstructedHeight:(double)arg1;
- (void)stopAnimations;
- (double)unobstructedHeight;

@end