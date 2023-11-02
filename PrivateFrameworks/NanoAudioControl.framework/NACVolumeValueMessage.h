
@interface NACVolumeValueMessage : PBCodable <NSCopying> {
    NSString * _category;
    struct { 
        unsigned int originIdentifier : 1; 
        unsigned int volumeValue : 1; 
    }  _has;
    int  _originIdentifier;
    float  _volumeValue;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic) bool hasVolumeValue;
@property (nonatomic) int originIdentifier;
@property (nonatomic) float volumeValue;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasOriginIdentifier;
- (bool)hasVolumeValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasVolumeValue:(bool)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setVolumeValue:(float)arg1;
- (float)volumeValue;
- (void)writeTo:(id)arg1;

@end