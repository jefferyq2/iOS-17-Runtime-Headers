
@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying> {
    NSData * _continuationUUID;
    bool  _final;
    bool  _frozen;
    struct { 
        unsigned int final : 1; 
        unsigned int frozen : 1; 
    }  _has;
    NSMutableArray * _locationDatas;
    HDCodableSample * _sample;
}

@property (nonatomic, retain) NSData *continuationUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool final;
@property (nonatomic) bool frozen;
@property (nonatomic, readonly) bool hasContinuationUUID;
@property (nonatomic) bool hasFinal;
@property (nonatomic) bool hasFrozen;
@property (nonatomic, readonly) bool hasSample;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *locationDatas;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;

+ (Class)locationDataType;

- (void).cxx_destruct;
- (void)addLocationData:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (void)clearLocationDatas;
- (id)continuationUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)final;
- (bool)frozen;
- (bool)hasContinuationUUID;
- (bool)hasFinal;
- (bool)hasFrozen;
- (bool)hasSample;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationDataAtIndex:(unsigned long long)arg1;
- (id)locationDatas;
- (unsigned long long)locationDatasCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setContinuationUUID:(id)arg1;
- (void)setFinal:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHasFinal:(bool)arg1;
- (void)setHasFrozen:(bool)arg1;
- (void)setLocationDatas:(id)arg1;
- (void)setSample:(id)arg1;
- (void)writeTo:(id)arg1;

@end