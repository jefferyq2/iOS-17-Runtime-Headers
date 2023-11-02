
@interface SARemotePlaybackDevice : SARemoteDevice <SABackgroundContextObject>

@property (nonatomic, copy) NSString *airPlayRouteId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *entitlementKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hashedRouteId;
@property (nonatomic, copy) NSString *storefront;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userToken;
@property (nonatomic, copy) NSDictionary *utsRequiredRequestKeyValuePairs;

+ (id)remotePlaybackDevice;
+ (id)remotePlaybackDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)airPlayRouteId;
- (id)encodedClassName;
- (id)entitlementKey;
- (id)groupIdentifier;
- (id)hashedRouteId;
- (void)setAirPlayRouteId:(id)arg1;
- (void)setEntitlementKey:(id)arg1;
- (void)setHashedRouteId:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setUserToken:(id)arg1;
- (void)setUtsRequiredRequestKeyValuePairs:(id)arg1;
- (id)storefront;
- (id)userToken;
- (id)utsRequiredRequestKeyValuePairs;

@end