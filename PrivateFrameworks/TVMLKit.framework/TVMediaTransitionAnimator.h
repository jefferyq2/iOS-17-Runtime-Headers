
@interface TVMediaTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    <TVMediaControllerHosting> * _fromHost;
    bool  _migrates;
    <TVMediaControllerHosting> * _toHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TVMediaControllerHosting> *fromHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TVMediaControllerHosting> *toHost;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)fromHost;
- (void)migratesMediaControllerFromHost:(id)arg1 toHost:(id)arg2;
- (void)setFromHost:(id)arg1;
- (void)setToHost:(id)arg1;
- (id)toHost;
- (double)transitionDuration:(id)arg1;

@end