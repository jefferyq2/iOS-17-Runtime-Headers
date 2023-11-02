
@interface ICAttachmentBrickView : UIView <LPAudioPlayer, LPLinkViewDelegate> {
    ICAttachment * _attachment;
    NSHashTable * _audioPlayerClients;
    bool  _hasPerformedInitialLayout;
    NSLayoutConstraint * _heightConstraint;
    UIColor * _highlightColor;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    bool  _insideSystemPaper;
    LPLinkView * _linkView;
    float  _playbackProgress;
    unsigned long long  _playerState;
    bool  _selected;
    ICAddAttachmentsManagerAttachmentInfo * _shareExtensionAttachmentInfo;
    unsigned long long  _type;
    bool  _waitingForMetadata;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic, retain) NSHashTable *audioPlayerClients;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } computedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double effectiveLayoutCornerRadius;
@property (nonatomic) bool hasPerformedInitialLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (getter=isInsideSystemPaper, nonatomic) bool insideSystemPaper;
@property (nonatomic, readonly) bool isMetadataComplete;
@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic) float playbackProgress;
@property (nonatomic) unsigned long long playerState;
@property (nonatomic, readonly) float progress;
@property (nonatomic) bool selected;
@property (nonatomic) ICAddAttachmentsManagerAttachmentInfo *shareExtensionAttachmentInfo;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) bool waitingForMetadata;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

+ (struct CGSize { double x1; double x2; })defaultBrickSize;
+ (struct CGSize { double x1; double x2; })sizeForAttachment:(id)arg1 usesSmallSize:(bool)arg2;
+ (bool)usesSmallSizeForAttachment:(id)arg1 withMetadata:(id)arg2 type:(unsigned long long)arg3 insideSystemPaper:(bool)arg4;

- (void).cxx_destruct;
- (id)_linkView:(id)arg1 contextMenuConfigurationForSuggestedConfiguration:(id)arg2;
- (id)_linkView:(id)arg1 playerForAudio:(id)arg2;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)addClient:(id)arg1;
- (void)adjustSizeIfNecessary;
- (void)applicationDidBecomeActive;
- (id)attachment;
- (void)attachmentDidLoadNotification:(id)arg1;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;
- (id)audioPlayerClients;
- (struct CGSize { double x1; double x2; })computedSize;
- (void)constrainViews;
- (void)dealloc;
- (void)didFailFetchingMetadataNotification:(id)arg1;
- (void)displayFilePreview;
- (void)displayGenericURLPreview;
- (void)displayRemoteAttachmentPreview;
- (void)displayScannedDocumentsPreview;
- (void)displaySynapseAttachmentPreview;
- (void)displayUnsupportedAttachmentPreview;
- (double)effectiveLayoutCornerRadius;
- (bool)hasPerformedInitialLayout;
- (id)heightConstraint;
- (id)highlightColor;
- (id)highlightPatternRegexFinder;
- (id)initWithType:(unsigned long long)arg1;
- (void)initialAttachmentPreviewDidLoad:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isInsideSystemPaper;
- (bool)isMetadataComplete;
- (void)layoutSubviews;
- (id)linkView;
- (void)linkView:(id)arg1 didFetchMetadata:(id)arg2;
- (void)linkViewNeedsResize:(id)arg1;
- (void)mediaDidLoadNotification:(id)arg1;
- (void)notifyClientsAboutSizeChangesIfNecessary;
- (void)pause;
- (void)play;
- (void)playbackPausedNotification:(id)arg1;
- (float)playbackProgress;
- (void)playbackStartedNotification:(id)arg1;
- (void)playbackStoppedNotification:(id)arg1;
- (unsigned long long)playerState;
- (void)prepareForReuse;
- (float)progress;
- (void)progressChangedNotification:(id)arg1;
- (id)quickLookTransitionView;
- (void)reloadData;
- (void)removeClient:(id)arg1;
- (void)reset;
- (void)resetPlaybackProgressAndState;
- (bool)selected;
- (void)setAttachment:(id)arg1;
- (void)setAudioPlayerClients:(id)arg1;
- (void)setHasPerformedInitialLayout:(bool)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setInsideSystemPaper:(bool)arg1;
- (void)setLinkView:(id)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setPlayerState:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShareExtensionAttachmentInfo:(id)arg1;
- (void)setWaitingForMetadata:(bool)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)shareExtensionAttachmentInfo;
- (unsigned long long)state;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)type;
- (id)typeDescriptionForAccessibility;
- (void)updateAudioClientsProgress:(float)arg1;
- (void)updateAudioClientsState:(unsigned long long)arg1;
- (void)updateSearchResultBackgroundColorIfNecessary;
- (void)updateTitle;
- (void)updateUIWithMetadata:(id)arg1;
- (bool)waitingForMetadata;
- (id)widthConstraint;

@end