
@interface MSPQuerySearch : PBCodable <NSCopying> {
    NSString * _language;
    NSString * _locationDisplayString;
    GEOMapRegion * _mapRegion;
    NSString * _query;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasLocationDisplayString;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *locationDisplayString;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguage;
- (bool)hasLocationDisplayString;
- (bool)hasMapRegion;
- (bool)hasQuery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)locationDisplayString;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocationDisplayString:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end