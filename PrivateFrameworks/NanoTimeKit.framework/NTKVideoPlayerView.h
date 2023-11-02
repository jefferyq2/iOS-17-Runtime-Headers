
@interface NTKVideoPlayerView : UIView <CLKVideoPlayerViewDelegate> {
    long long  _currentDataMode;
    UIView * _curtainView;
    NTKVideoPlayerDataSource * _dataSource;
    <NTKVideoPlayerViewFaceDelegate> * _delegate;
    double  _fadeAnimationDuration;
    bool  _frozen;
    bool  _isHandlingTapGesture;
    bool  _orbing;
    bool  _paused;
    bool  _pausedViewEnabled;
    unsigned long long  _playerBehavior;
    UIView * _posterContainerView;
    UIImageView * _posterImageView;
    unsigned long long  _prerollState;
    bool  _shouldApplyVideoInsetToPosterImage;
    bool  _slow;
    NTKTaskScheduler * _taskScheduler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _videoPlayerEdgeInsets;
    bool  _videoPlayerInViewHierarchy;
    CLKVideoPlayerView * _videoPlayerView;
}

@property (nonatomic, retain) NTKVideoPlayerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKVideoPlayerViewFaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fadeAnimationDuration;
@property (readonly) unsigned long long hash;
@property (getter=isPausedViewEnabled, nonatomic) bool pausedViewEnabled;
@property (nonatomic) unsigned long long playerBehavior;
@property (nonatomic) bool shouldApplyVideoInsetToPosterImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_advanceListingForEvent:(unsigned long long)arg1;
- (void)_cancelScheduledPreroll;
- (void)_createCurtainView;
- (void)_createPosterImageView;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_fadeFromCurtainViewIfVisible;
- (void)_fadeFromPosterImageAndCurtainViewIfVisible;
- (void)_fadeFromPosterImageIfVisible:(id /* block */)arg1;
- (void)_fadeToCurtainView:(id /* block */)arg1;
- (void)_fadeToPosterImage;
- (void)_handleScreenWake;
- (void)_hideCurtainView;
- (void)_hidePosterImageView;
- (void)_loadCurrentListing;
- (void)_loadVideoPlayerView;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_pause;
- (void)_play;
- (void)_playIfNotPaused;
- (void)_playNextVideoForEvent:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_prerollVideo;
- (void)_queueSubsequentListingIfSupported;
- (void)_removeCurrentVideo;
- (void)_resetVideoPlayer;
- (void)_rewindLoadedVideoToBeginning;
- (void)_schedulePreroll;
- (bool)_shouldChangeVideoOnTap;
- (bool)_shouldChangeVideoOnWake;
- (bool)_shouldPause;
- (bool)_shouldPlayVideoOnTap;
- (void)_showCurtainView;
- (void)_showPosterImageView;
- (void)_unloadVideoPlayerView;
- (void)_updatePauseState;
- (void)applyDataMode:(long long)arg1 comingFromDataMode:(long long)arg2;
- (void)applyFrozen:(bool)arg1;
- (void)applyOrbing:(bool)arg1;
- (void)applySlow:(bool)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)faceLibraryWasDismissed;
- (double)fadeAnimationDuration;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenOff;
- (void)handleScreenOn;
- (void)handleStyleDidChange;
- (void)handleWristRaiseScreenWake;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPausedViewEnabled;
- (void)layoutSubviews;
- (unsigned long long)playerBehavior;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadeAnimationDuration:(double)arg1;
- (void)setPausedViewEnabled:(bool)arg1;
- (void)setPlayerBehavior:(unsigned long long)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setShouldApplyVideoInsetToPosterImage:(bool)arg1;
- (void)setVideoPlayerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVideoPlayerResizeGravity:(long long)arg1;
- (void)setVideoPlayerTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)shouldApplyVideoInsetToPosterImage;
- (void)transitionToEditing;
- (id)videoPlayerView;
- (void)videoPlayerView:(id)arg1 didFinishPrerolling:(bool)arg2;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewWasTapped;

@end