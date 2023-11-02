
@interface AWDIDSMessageDeliveryPath : PBCodable <NSCopying> {
    unsigned int  _deliveryPathType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deliveryPathType : 1; 
    }  _has;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int deliveryPathType;
@property (nonatomic) bool hasDeliveryPathType;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deliveryPathType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeliveryPathType;
- (bool)hasService;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setDeliveryPathType:(unsigned int)arg1;
- (void)setHasDeliveryPathType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end