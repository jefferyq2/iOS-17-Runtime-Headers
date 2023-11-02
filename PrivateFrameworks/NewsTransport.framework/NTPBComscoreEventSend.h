
@interface NTPBComscoreEventSend : PBCodable <NSCopying> {
    int  _comscoreEventType;
    NSString * _contentViewedId;
    NSString * _eventUdid;
    NSString * _failureReasonCode;
    struct { 
        unsigned int comscoreEventType : 1; 
        unsigned int resultType : 1; 
    }  _has;
    int  _resultType;
    NSString * _sourceChannelId;
}

@property (nonatomic) int comscoreEventType;
@property (nonatomic, retain) NSString *contentViewedId;
@property (nonatomic, retain) NSString *eventUdid;
@property (nonatomic, retain) NSString *failureReasonCode;
@property (nonatomic) bool hasComscoreEventType;
@property (nonatomic, readonly) bool hasContentViewedId;
@property (nonatomic, readonly) bool hasEventUdid;
@property (nonatomic, readonly) bool hasFailureReasonCode;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) int resultType;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (int)comscoreEventType;
- (id)contentViewedId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventUdid;
- (id)failureReasonCode;
- (bool)hasComscoreEventType;
- (bool)hasContentViewedId;
- (bool)hasEventUdid;
- (bool)hasFailureReasonCode;
- (bool)hasResultType;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (void)setComscoreEventType:(int)arg1;
- (void)setContentViewedId:(id)arg1;
- (void)setEventUdid:(id)arg1;
- (void)setFailureReasonCode:(id)arg1;
- (void)setHasComscoreEventType:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setResultType:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end