
@interface AWDSpringBoardAppBrightness : PBCodable <NSCopying> {
    NSString * _appBundleID;
    unsigned long long  _brightness;
    unsigned long long  _duration;
    struct { 
        unsigned int brightness : 1; 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *appBundleID;
@property (nonatomic) unsigned long long brightness;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, readonly) bool hasAppBundleID;
@property (nonatomic) bool hasBrightness;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (id)appBundleID;
- (unsigned long long)brightness;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasAppBundleID;
- (bool)hasBrightness;
- (bool)hasDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setBrightness:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasBrightness:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end