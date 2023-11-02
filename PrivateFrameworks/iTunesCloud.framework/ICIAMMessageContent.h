
@interface ICIAMMessageContent : PBCodable <NSCopying> {
    NSString * _body;
    ICIAMMetricEvent * _cardClickEvent;
    ICIAMMetricEvent * _closeClickEvent;
    NSMutableArray * _contentParameters;
    NSString * _identifier;
    NSMutableArray * _images;
    NSMutableArray * _messageActions;
    ICIAMMetricEvent * _pageEvent;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) ICIAMMetricEvent *cardClickEvent;
@property (nonatomic, retain) ICIAMMetricEvent *closeClickEvent;
@property (nonatomic, retain) NSMutableArray *contentParameters;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasCardClickEvent;
@property (nonatomic, readonly) bool hasCloseClickEvent;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPageEvent;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, retain) NSMutableArray *messageActions;
@property (nonatomic, retain) ICIAMMetricEvent *pageEvent;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (Class)contentParametersType;
+ (Class)imagesType;
+ (Class)messageActionsType;

- (void).cxx_destruct;
- (void)addContentParameters:(id)arg1;
- (void)addImages:(id)arg1;
- (void)addMessageActions:(id)arg1;
- (id)body;
- (id)cardClickEvent;
- (void)clearContentParameters;
- (void)clearImages;
- (void)clearMessageActions;
- (id)closeClickEvent;
- (id)contentParameters;
- (id)contentParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentParametersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasCardClickEvent;
- (bool)hasCloseClickEvent;
- (bool)hasIdentifier;
- (bool)hasPageEvent;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)images;
- (id)imagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageActions;
- (id)messageActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageActionsCount;
- (id)pageEvent;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCardClickEvent:(id)arg1;
- (void)setCloseClickEvent:(id)arg1;
- (void)setContentParameters:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setMessageActions:(id)arg1;
- (void)setPageEvent:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore

- (id)dictionaryRepresentationWithReportableMetricsEvents;

@end