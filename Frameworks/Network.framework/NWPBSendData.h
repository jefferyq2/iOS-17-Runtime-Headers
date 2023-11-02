
@interface NWPBSendData : PBCodable <NSCopying> {
    NSString * _clientUUID;
    struct { 
        unsigned int receiveWindow : 1; 
    }  _has;
    NSData * _messageData;
    unsigned int  _receiveWindow;
}

@property (nonatomic, retain) NSString *clientUUID;
@property (nonatomic, readonly) bool hasClientUUID;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic) bool hasReceiveWindow;
@property (nonatomic, retain) NSData *messageData;
@property (nonatomic) unsigned int receiveWindow;

- (void).cxx_destruct;
- (id)clientUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientUUID;
- (bool)hasMessageData;
- (bool)hasReceiveWindow;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (unsigned int)receiveWindow;
- (void)setClientUUID:(id)arg1;
- (void)setHasReceiveWindow:(bool)arg1;
- (void)setMessageData:(id)arg1;
- (void)setReceiveWindow:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end