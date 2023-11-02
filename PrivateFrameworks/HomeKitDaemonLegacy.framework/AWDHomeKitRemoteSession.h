
@interface AWDHomeKitRemoteSession : PBCodable <NSCopying> {
    unsigned int  _closeReason;
    unsigned int  _deviceType;
    unsigned long long  _duration;
    int  _errorCode;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int closeReason : 1; 
        unsigned int deviceType : 1; 
        unsigned int errorCode : 1; 
        unsigned int role : 1; 
    }  _has;
    unsigned int  _role;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int closeReason;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasCloseReason;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasRole;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int role;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)closeReason;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceType;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (int)errorCode;
- (bool)hasCloseReason;
- (bool)hasDeviceType;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasRole;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)role;
- (void)setCloseReason:(unsigned int)arg1;
- (void)setDeviceType:(unsigned int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasCloseReason:(bool)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasRole:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRole:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end