
@interface NTPBMultiABConfig : PBCodable <NSCopying> {
    NSMutableArray * _abConfigs;
    NTPBConfig * _defaultConfig;
    struct { 
        unsigned int moduloForHashing : 1; 
    }  _has;
    long long  _moduloForHashing;
}

@property (nonatomic, retain) NSMutableArray *abConfigs;
@property (nonatomic, retain) NTPBConfig *defaultConfig;
@property (nonatomic, readonly) bool hasDefaultConfig;
@property (nonatomic) bool hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;

+ (Class)abConfigsType;

- (void).cxx_destruct;
- (id)abConfigs;
- (id)abConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)abConfigsCount;
- (void)addAbConfigs:(id)arg1;
- (void)clearAbConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultConfig;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultConfig;
- (bool)hasModuloForHashing;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)moduloForHashing;
- (bool)readFrom:(id)arg1;
- (void)setAbConfigs:(id)arg1;
- (void)setDefaultConfig:(id)arg1;
- (void)setHasModuloForHashing:(bool)arg1;
- (void)setModuloForHashing:(long long)arg1;
- (void)writeTo:(id)arg1;

@end