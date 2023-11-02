
@interface AWDAppBBPower : PBCodable <NSCopying> {
    NSString * _bundleName;
    struct { 
        unsigned int powerMicroWatt : 1; 
        unsigned int rAT : 1; 
    }  _has;
    unsigned int  _powerMicroWatt;
    int  _rAT;
}

@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic, readonly) bool hasBundleName;
@property (nonatomic) bool hasPowerMicroWatt;
@property (nonatomic) bool hasRAT;
@property (nonatomic) unsigned int powerMicroWatt;
@property (nonatomic) int rAT;

- (int)StringAsRAT:(id)arg1;
- (id)bundleName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleName;
- (bool)hasPowerMicroWatt;
- (bool)hasRAT;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)powerMicroWatt;
- (int)rAT;
- (id)rATAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setHasPowerMicroWatt:(bool)arg1;
- (void)setHasRAT:(bool)arg1;
- (void)setPowerMicroWatt:(unsigned int)arg1;
- (void)setRAT:(int)arg1;
- (void)writeTo:(id)arg1;

@end