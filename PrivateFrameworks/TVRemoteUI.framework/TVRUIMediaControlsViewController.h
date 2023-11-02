
@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider> {
    <_TVRUIEventDelegate> * _buttonActionsDelegate;
    NSArray * _buttons;
    TVRUICaptionsButton * _captionsButton;
    TVRUIChannelButton * _channelButton;
    <TVRUIDevice> * _device;
    bool  _enabled;
    TVRUIButton * _guideButton;
    bool  _showCaptionControl;
    bool  _showChannelGuideButtons;
    bool  _showSkipControls;
    TVRUIButton * _skipBackwardButton;
    TVRUIButton * _skipForwardButton;
    <TVRUIStyleProvider> * _styleProvider;
    bool  _wantsFastForwardButton;
}

@property (nonatomic) <_TVRUIEventDelegate> *buttonActionsDelegate;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) TVRUICaptionsButton *captionsButton;
@property (nonatomic, retain) TVRUIChannelButton *channelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <TVRUIDevice> *device;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) TVRUIButton *guideButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isChannelButtonExpanded;
@property (getter=isShowingCaptionControl, nonatomic) bool showCaptionControl;
@property (getter=isShowingChannelGuideButtons, nonatomic) bool showChannelGuideButtons;
@property (getter=isShowingSkipControls, nonatomic) bool showSkipControls;
@property (nonatomic, retain) TVRUIButton *skipBackwardButton;
@property (nonatomic, retain) TVRUIButton *skipForwardButton;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsFastForwardButton;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_captionsTapped:(id)arg1;
- (id)_channelUpButtonView;
- (void)_createButtons;
- (void)_fastForwardTapped:(id)arg1;
- (void)_sendButtonPressed:(long long)arg1;
- (void)_sendButtonReleased:(long long)arg1;
- (void)_sendButtonTapped:(long long)arg1;
- (void)_skipBackwardLongPress:(id)arg1;
- (void)_skipBackwardTapped:(id)arg1;
- (void)_skipForwardLongPress:(id)arg1;
- (void)_skipForwardTapped:(id)arg1;
- (void)_updateViewState;
- (id)buttonActionsDelegate;
- (id)buttons;
- (id)captionsButton;
- (id)channelButton;
- (void)collapseChannelButton;
- (id)device;
- (bool)enabled;
- (id)guideButton;
- (bool)isChannelButtonExpanded;
- (bool)isShowingCaptionControl;
- (bool)isShowingChannelGuideButtons;
- (bool)isShowingSkipControls;
- (void)setButtonActionsDelegate:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCaptionsButton:(id)arg1;
- (void)setChannelButton:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGuideButton:(id)arg1;
- (void)setShowCaptionControl:(bool)arg1;
- (void)setShowChannelGuideButtons:(bool)arg1;
- (void)setShowSkipControls:(bool)arg1;
- (void)setSkipBackwardButton:(id)arg1;
- (void)setSkipForwardButton:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setWantsFastForwardButton:(bool)arg1;
- (id)skipBackwardButton;
- (id)skipForwardButton;
- (id)styleProvider;
- (void)updateCaptionState:(bool)arg1;
- (void)updatePlaybackRate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (bool)wantsFastForwardButton;

@end