
@interface CKVideoPreviewViewController : UIViewController {
    AVPlayer * _avPlayer;
    AVPlayerItem * _avPlayerItem;
    AVPlayerLayer * _avPlayerLayer;
    bool  _reachedEnd;
    bool  _redisplayStatusBar;
    <CKVideoPreviewViewControllerDelegate> * _videoPreviewDelegate;
}

@property (nonatomic, retain) AVPlayer *avPlayer;
@property (nonatomic, retain) AVPlayerItem *avPlayerItem;
@property (nonatomic, retain) AVPlayerLayer *avPlayerLayer;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) bool reachedEnd;
@property (nonatomic) bool redisplayStatusBar;
@property (nonatomic) <CKVideoPreviewViewControllerDelegate> *videoPreviewDelegate;

- (void).cxx_destruct;
- (id)avPlayer;
- (id)avPlayerItem;
- (id)avPlayerLayer;
- (void)dealloc;
- (id)init;
- (bool)isPlaying;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (bool)prefersStatusBarHidden;
- (bool)reachedEnd;
- (bool)redisplayStatusBar;
- (void)setAvPlayer:(id)arg1;
- (void)setAvPlayerItem:(id)arg1;
- (void)setAvPlayerLayer:(id)arg1;
- (void)setReachedEnd:(bool)arg1;
- (void)setRedisplayStatusBar:(bool)arg1;
- (void)setVideoFileURL:(id)arg1;
- (void)setVideoPreviewDelegate:(id)arg1;
- (bool)togglePlayPause;
- (void)videoDidReachEnd:(id)arg1;
- (id)videoPreviewDelegate;

@end