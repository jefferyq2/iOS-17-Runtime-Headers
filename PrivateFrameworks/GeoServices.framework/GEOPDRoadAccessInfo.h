
@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {
    NSMutableArray * _roadAccessPoints;
    PBUnknownFields * _unknownFields;
}

+ (id)roadAccessInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end