
@interface AWDProactiveAppPredictionAppLaunchSequence : PBCodable <NSCopying> {
    NSMutableArray * _bundleids;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *bundleids;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)bundleidType;

- (void).cxx_destruct;
- (void)addBundleid:(id)arg1;
- (id)bundleidAtIndex:(unsigned long long)arg1;
- (id)bundleids;
- (unsigned long long)bundleidsCount;
- (void)clearBundleids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleids:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end