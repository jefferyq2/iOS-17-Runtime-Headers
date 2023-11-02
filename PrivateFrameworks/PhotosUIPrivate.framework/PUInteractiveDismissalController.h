
@interface PUInteractiveDismissalController : NSObject {
    <PUInterruptibleViewControllerTransition> * __interruptibleViewControllerTransition;
    bool  __needsUpdateGestureRecognizers;
    UIViewController * __viewController;
    UIView * __viewHostingGestureRecognizers;
    <PUInteractiveDismissalControllerDelegate> * _delegate;
    struct { 
        bool respondsToCanBeginDismissalAtLocationFromProvider; 
        bool respondsToTilingView; 
        bool respondsToDesignatedTileController; 
        bool respondsToIsDismissing; 
    }  _delegateFlags;
    bool  _isHandlingDismissalInteraction;
}

@property (setter=_setInterruptibleViewControllerTransition:, nonatomic, retain) <PUInterruptibleViewControllerTransition> *_interruptibleViewControllerTransition;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (setter=_setViewController:, nonatomic) UIViewController *_viewController;
@property (setter=_setViewHostingGestureRecognizers:, nonatomic, retain) UIView *_viewHostingGestureRecognizers;
@property (nonatomic) <PUInteractiveDismissalControllerDelegate> *delegate;
@property (nonatomic, readonly) PUTileController *designatedTileController;
@property (nonatomic, readonly) bool isHandlingDismissalInteraction;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) <PUTilingViewControllerTransition> *tilingViewControllerTransition;

- (void).cxx_destruct;
- (id)_interruptibleViewControllerTransition;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_invalidateViewController;
- (void)_invalidateViewHostingGestureRecognizers;
- (bool)_needsUpdateGestureRecognizers;
- (long long)_preferredDismissalTransitionType;
- (void)_setInterruptibleViewControllerTransition:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_setViewController:(id)arg1;
- (void)_setViewHostingGestureRecognizers:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;
- (void)_updateViewControllerIfNeeded;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (id)_viewController;
- (id)_viewHostingGestureRecognizers;
- (void)beginDismissal;
- (bool)canBeginDismissalAtLocationFromProvider:(id)arg1;
- (id)delegate;
- (id)designatedTileController;
- (void)endDismissal:(bool)arg1;
- (void)invalidateDelegateData;
- (bool)isHandlingDismissalInteraction;
- (void)setDelegate:(id)arg1;
- (void)setIsHandlingDismissalInteraction:(bool)arg1;
- (id)tilingView;
- (id)tilingViewControllerTransition;
- (void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(bool)arg2;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;

@end