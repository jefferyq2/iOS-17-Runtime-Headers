
@interface RTTRemoteCall : RTTCall {
    RPCompanionLinkClient * _client;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableArray * _devices;
    RPCompanionLinkDevice * _pairedCallDevice;
}

@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (nonatomic, retain) RPCompanionLinkDevice *pairedCallDevice;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2;
- (id)client;
- (id)initWithCall:(id)arg1;
- (bool)isLocallyHosted;
- (id)pairedCallDevice;
- (void)removeDevice:(id)arg1;
- (void)resetRapportClientAndInvalidate:(bool)arg1;
- (id)responseForRequest:(id)arg1 options:(id)arg2;
- (void)sendCallIDChallengeToDevice:(id)arg1;
- (void)sendCallIDChallengeToDeviceId:(id)arg1;
- (void)sendString:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setPairedCallDevice:(id)arg1;
- (void)setupRapportClient;
- (void)start;
- (void)stop;
- (void)updateCallWithRemoteFailure;

@end