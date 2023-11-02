
@interface VCPProtoMoviePreEncodeResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSData * _statisticsBlob;
}

@property (nonatomic, retain) NSData *statisticsBlob;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStatisticsBlob:(id)arg1;
- (id)statisticsBlob;
- (void)writeTo:(id)arg1;

@end