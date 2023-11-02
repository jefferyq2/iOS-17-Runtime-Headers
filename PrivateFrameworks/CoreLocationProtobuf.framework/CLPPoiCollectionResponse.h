
@interface CLPPoiCollectionResponse : PBCodable <NSCopying> {
    NSString * _msg;
    bool  _success;
}

@property (nonatomic, readonly) bool hasMsg;
@property (nonatomic, retain) NSString *msg;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMsg;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)msg;
- (bool)readFrom:(id)arg1;
- (void)setMsg:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end