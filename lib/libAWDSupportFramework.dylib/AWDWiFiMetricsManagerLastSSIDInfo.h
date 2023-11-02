
@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSData * _lastSSIDAttempted;
    NSData * _lastSSIDConnectedTo;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasLastSSIDAttempted;
@property (nonatomic, readonly) bool hasLastSSIDConnectedTo;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *lastSSIDAttempted;
@property (nonatomic, retain) NSData *lastSSIDConnectedTo;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastSSIDAttempted;
- (bool)hasLastSSIDConnectedTo;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastSSIDAttempted;
- (id)lastSSIDConnectedTo;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLastSSIDAttempted:(id)arg1;
- (void)setLastSSIDConnectedTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end