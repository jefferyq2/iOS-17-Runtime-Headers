
@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _parameters;
    double  _radius;
    int  _status;
}

@property (nonatomic, readonly) double*parameters;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (nonatomic) double radius;
@property (nonatomic) int status;

+ (bool)isValid:(id)arg1;

- (int)StringAsStatus:(id)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double*)parameters;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (double)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setParameters:(double*)arg1 count:(unsigned long long)arg2;
- (void)setRadius:(double)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end