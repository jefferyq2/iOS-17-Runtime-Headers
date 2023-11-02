
@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding> {
    NSString * _accessoryName;
    unsigned long long  _advertisedProtocolVersion;
    NSData * _broadcastKey;
    NSNumber * _categoryIdentifier;
    NSNumber * _configNumber;
    NSNumber * _keyUpdatedStateNumber;
    double  _keyUpdatedTime;
    double  _lastSeen;
    NSUUID * _peripheralUUID;
    unsigned long long  _previousProtocolVersion;
    unsigned long long  _resumeSessionId;
    NSNumber * _stateNumber;
    NSNumber * _statusFlags;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic) unsigned long long advertisedProtocolVersion;
@property (nonatomic, retain) NSData *broadcastKey;
@property (nonatomic, readonly) NSNumber *categoryIdentifier;
@property (nonatomic, readonly) NSNumber *configNumber;
@property (nonatomic, retain) NSNumber *keyUpdatedStateNumber;
@property (nonatomic) double keyUpdatedTime;
@property (nonatomic, readonly) double lastSeen;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic) unsigned long long previousProtocolVersion;
@property (nonatomic) unsigned long long resumeSessionId;
@property (nonatomic, retain) NSNumber *stateNumber;
@property (nonatomic, readonly) NSNumber *statusFlags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryName;
- (unsigned long long)advertisedProtocolVersion;
- (id)broadcastKey;
- (id)categoryIdentifier;
- (id)configNumber;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)keyUpdatedStateNumber;
- (double)keyUpdatedTime;
- (double)lastSeen;
- (id)peripheralUUID;
- (unsigned long long)previousProtocolVersion;
- (void)resetBroadcastKeyConfig;
- (unsigned long long)resumeSessionId;
- (void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3;
- (void)setAccessoryName:(id)arg1;
- (void)setAdvertisedProtocolVersion:(unsigned long long)arg1;
- (void)setBroadcastKey:(id)arg1;
- (void)setKeyUpdatedStateNumber:(id)arg1;
- (void)setKeyUpdatedTime:(double)arg1;
- (void)setPreviousProtocolVersion:(unsigned long long)arg1;
- (void)setResumeSessionId:(unsigned long long)arg1;
- (void)setStateNumber:(id)arg1;
- (id)stateNumber;
- (id)statusFlags;
- (void)updateAccessoryName:(id)arg1;
- (void)updateBroadcastKey:(id)arg1;
- (void)updateProtocolVersion:(unsigned long long)arg1;
- (void)updateResumeSessionId:(unsigned long long)arg1;
- (void)updateStateNumber:(id)arg1;

@end