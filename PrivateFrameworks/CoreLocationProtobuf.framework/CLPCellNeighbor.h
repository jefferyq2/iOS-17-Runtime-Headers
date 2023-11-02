
@interface CLPCellNeighbor : PBCodable <NSCopying> {
    int  _ecn0;
    struct { 
        unsigned int ecn0 : 1; 
        unsigned int psc : 1; 
        unsigned int rscp : 1; 
        unsigned int rssi : 1; 
        unsigned int uarfcn : 1; 
    }  _has;
    int  _psc;
    int  _rscp;
    int  _rssi;
    int  _uarfcn;
}

@property (nonatomic) int ecn0;
@property (nonatomic) bool hasEcn0;
@property (nonatomic) bool hasPsc;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasUarfcn;
@property (nonatomic) int psc;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) int uarfcn;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)ecn0;
- (bool)hasEcn0;
- (bool)hasPsc;
- (bool)hasRscp;
- (bool)hasRssi;
- (bool)hasUarfcn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)psc;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (void)setEcn0:(int)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasPsc:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasUarfcn:(bool)arg1;
- (void)setPsc:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setUarfcn:(int)arg1;
- (int)uarfcn;
- (void)writeTo:(id)arg1;

@end