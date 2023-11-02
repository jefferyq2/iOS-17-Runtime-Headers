
@interface ADRoutingInfoMessage : PBCodable <NSCopying> {
    NSString * _environmentURL;
    NSString * _protoVersion;
    NSString * _searchType;
}

@property (nonatomic, retain) NSString *environmentURL;
@property (nonatomic, retain) NSString *protoVersion;
@property (nonatomic, retain) NSString *searchType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environmentURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protoVersion;
- (bool)readFrom:(id)arg1;
- (id)searchType;
- (void)setEnvironmentURL:(id)arg1;
- (void)setProtoVersion:(id)arg1;
- (void)setSearchType:(id)arg1;
- (void)writeTo:(id)arg1;

@end