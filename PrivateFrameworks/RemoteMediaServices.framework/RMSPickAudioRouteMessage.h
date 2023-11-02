
@interface RMSPickAudioRouteMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int macAddress : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    long long  _macAddress;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasMacAddress;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) long long macAddress;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMacAddress;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)macAddress;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasMacAddress:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setMacAddress:(long long)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end