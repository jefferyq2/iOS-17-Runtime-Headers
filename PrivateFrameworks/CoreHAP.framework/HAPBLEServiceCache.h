
@interface HAPBLEServiceCache : HMFObject <NSSecureCoding> {
    NSMutableArray * _cachedCharacteristics;
    NSArray * _linkedServices;
    NSNumber * _serviceInstanceId;
    unsigned long long  _serviceInstanceOrder;
    unsigned long long  _serviceProperties;
    NSUUID * _serviceUUID;
}

@property (nonatomic, retain) NSMutableArray *cachedCharacteristics;
@property (nonatomic, retain) NSArray *linkedServices;
@property (nonatomic, readonly) NSNumber *serviceInstanceId;
@property (nonatomic) unsigned long long serviceInstanceOrder;
@property (nonatomic) unsigned long long serviceProperties;
@property (nonatomic, readonly) NSUUID *serviceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedCharacteristics;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceUUID:(id)arg1 instanceId:(id)arg2 instanceOrder:(unsigned long long)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)linkedServices;
- (id)serviceInstanceId;
- (unsigned long long)serviceInstanceOrder;
- (unsigned long long)serviceProperties;
- (id)serviceUUID;
- (void)setCachedCharacteristics:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setServiceInstanceOrder:(unsigned long long)arg1;
- (void)setServiceProperties:(unsigned long long)arg1;
- (void)updateWithCharacteristic:(id)arg1;
- (void)updateWithService:(id)arg1;

@end