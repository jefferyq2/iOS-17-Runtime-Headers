
@interface HMDRemoteLoginAnisetteDataProvider : HMFObject <AKAnisetteServiceProtocol, HMFLogging> {
    HMDRemoteLoginMessageSender * _remoteMessageSender;
    NSString * _sessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (nonatomic, readonly) NSString *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)logIdentifier;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (id)remoteMessageSender;
- (id)sessionID;
- (void)setRemoteMessageSender:(id)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;

@end