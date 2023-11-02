
@interface CPLRampingRequest : PBRequest <NSCopying> {
    NSMutableArray * _requests;
}

@property (nonatomic, retain) NSMutableArray *requests;

+ (Class)requestType;

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestAtIndex:(unsigned long long)arg1;
- (id)requests;
- (unsigned long long)requestsCount;
- (void)setRequests:(id)arg1;
- (void)writeTo:(id)arg1;

@end