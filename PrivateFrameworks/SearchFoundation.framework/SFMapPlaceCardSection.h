
@interface SFMapPlaceCardSection : SFCardSection <NSCopying, NSSecureCoding, SFMapPlaceCardSection> {
    NSData * _detourInfoData;
    struct { 
        unsigned int shouldSearchDirectionsAlongCurrentRoute : 1; 
    }  _has;
    NSData * _mapsData;
    bool  _shouldSearchDirectionsAlongCurrentRoute;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *detourInfoData;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingSwipeButtonItems;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (nonatomic) bool shouldHideInAmbientMode;
@property (nonatomic) bool shouldSearchDirectionsAlongCurrentRoute;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingSwipeButtonItems;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detourInfoData;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShouldSearchDirectionsAlongCurrentRoute;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mapsData;
- (void)setDetourInfoData:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

@end