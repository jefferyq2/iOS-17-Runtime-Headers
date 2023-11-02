
@interface NTPBArticleViewNotw : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleViewType;
    struct { 
        unsigned int articleViewType : 1; 
        unsigned int maxScrollDepth : 1; 
    }  _has;
    float  _maxScrollDepth;
    NSString * _referringSite;
    NSString * _referringUrl;
    NSString * _sourceChannelId;
    NSString * _windowId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleViewType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleViewType;
@property (nonatomic) bool hasMaxScrollDepth;
@property (nonatomic, readonly) bool hasReferringSite;
@property (nonatomic, readonly) bool hasReferringUrl;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasWindowId;
@property (nonatomic) float maxScrollDepth;
@property (nonatomic, retain) NSString *referringSite;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *windowId;

- (void).cxx_destruct;
- (id)articleId;
- (int)articleViewType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasArticleViewType;
- (bool)hasMaxScrollDepth;
- (bool)hasReferringSite;
- (bool)hasReferringUrl;
- (bool)hasSourceChannelId;
- (bool)hasWindowId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)maxScrollDepth;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referringSite;
- (id)referringUrl;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewType:(int)arg1;
- (void)setHasArticleViewType:(bool)arg1;
- (void)setHasMaxScrollDepth:(bool)arg1;
- (void)setMaxScrollDepth:(float)arg1;
- (void)setReferringSite:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setWindowId:(id)arg1;
- (id)sourceChannelId;
- (id)windowId;
- (void)writeTo:(id)arg1;

@end