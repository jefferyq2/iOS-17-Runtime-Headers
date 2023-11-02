
@interface AWDCoreRoutineHeroAppSuggestionInstance : PBCodable <NSCopying> {
    NSString * _bundleId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int lat : 1; 
        unsigned int lon : 1; 
        unsigned int installed : 1; 
    }  _has;
    bool  _installed;
    int  _lat;
    int  _lon;
    NSString * _suggestionId;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasInstalled;
@property (nonatomic) bool hasLat;
@property (nonatomic) bool hasLon;
@property (nonatomic, readonly) bool hasSuggestionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool installed;
@property (nonatomic) int lat;
@property (nonatomic) int lon;
@property (nonatomic, retain) NSString *suggestionId;
@property (nonatomic) unsigned long long timestamp;

- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (bool)hasInstalled;
- (bool)hasLat;
- (bool)hasLon;
- (bool)hasSuggestionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)installed;
- (bool)isEqual:(id)arg1;
- (int)lat;
- (int)lon;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasInstalled:(bool)arg1;
- (void)setHasLat:(bool)arg1;
- (void)setHasLon:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstalled:(bool)arg1;
- (void)setLat:(int)arg1;
- (void)setLon:(int)arg1;
- (void)setSuggestionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestionId;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end