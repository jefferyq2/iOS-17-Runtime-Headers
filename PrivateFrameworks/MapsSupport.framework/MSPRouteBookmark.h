
@interface MSPRouteBookmark : PBCodable <NSCopying> {
    GEOStorageRouteRequestStorage * _routeRequestStorage;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRouteRequestStorage;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteRequestStorage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeRequestStorage;
- (void)setRouteRequestStorage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end