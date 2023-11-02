
@interface SYStartSyncSessionResponse : PBCodable <NSCopying> {
    bool  _accepted;
    SYErrorInfo * _error;
    SYMessageHeader * _header;
    NSData * _metadata;
    NSString * _sessionID;
    bool  _supportsRestart;
    bool  _supportsRollback;
}

@property (nonatomic) bool accepted;
@property (nonatomic, retain) SYErrorInfo *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) bool supportsRestart;
@property (nonatomic) bool supportsRollback;

- (void).cxx_destruct;
- (bool)accepted;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setAccepted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSupportsRestart:(bool)arg1;
- (void)setSupportsRollback:(bool)arg1;
- (bool)supportsRestart;
- (bool)supportsRollback;
- (void)writeTo:(id)arg1;

@end