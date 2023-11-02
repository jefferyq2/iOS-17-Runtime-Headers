
@interface SSVMutablePlayActivityEnqueuerProperties : SSVPlayActivityEnqueuerProperties

@property (getter=isSBEnabled, nonatomic) bool SBEnabled;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSString *deviceGUID;
@property (nonatomic, copy) NSString *deviceName;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;
@property (nonatomic) long long systemReleaseType;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceGUID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setSystemReleaseType:(long long)arg1;
- (void)setTimeZone:(id)arg1;

@end