
@interface WBSParsecActionButton : WBSParsecModel {
    WBSParsecImageRepresentation * _baseIcon;
    NSString * _completion;
    bool  _forStreamingResult;
    WBSParsecImageRepresentation * _icon;
    NSString * _itunesCompletion;
    NSArray * _itunesContentIdentifiers;
    NSString * _itunesLabel;
    NSString * _label;
    NSString * _labelAlignment;
    NSString * _mediaKind;
    NSString * _offerType;
    bool  _overlay;
    NSString * _punchoutAppBundleIdentifier;
    NSString * _punchoutAppName;
    NSURL * _punchoutURL;
    NSString * _type;
}

@property (nonatomic, readonly) WBSParsecImageRepresentation *baseIcon;
@property (nonatomic, readonly, copy) NSString *completion;
@property (getter=isForAppleMusicResult, nonatomic, readonly) bool forAppleMusicResult;
@property (getter=isForStreamingResult, nonatomic, readonly) bool forStreamingResult;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly, copy) NSString *itunesCompletion;
@property (nonatomic, readonly, copy) NSArray *itunesContentIdentifiers;
@property (nonatomic, readonly, copy) NSString *itunesLabel;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *labelAlignment;
@property (nonatomic, readonly, copy) NSString *mediaKind;
@property (nonatomic, readonly, copy) NSString *offerType;
@property (getter=isOverlay, nonatomic, readonly) bool overlay;
@property (nonatomic, readonly, copy) NSString *punchoutAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *punchoutAppName;
@property (nonatomic, readonly) NSURL *punchoutURL;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)schema;

- (void).cxx_destruct;
- (id)baseIcon;
- (id)completion;
- (id)icon;
- (id)initWithDictionary:(id)arg1 mediaKind:(id)arg2;
- (bool)isForAppleMusicResult;
- (bool)isForStreamingResult;
- (bool)isOverlay;
- (id)itunesCompletion;
- (id)itunesContentIdentifiers;
- (id)itunesLabel;
- (id)label;
- (id)labelAlignment;
- (id)mediaKind;
- (id)offerType;
- (id)punchoutAppBundleIdentifier;
- (id)punchoutAppName;
- (id)punchoutURL;
- (id)type;

@end