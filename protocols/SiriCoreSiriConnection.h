
@protocol SiriCoreSiriConnection <NSObject>

@required

- (NSString *)aceHost;
- (NSString *)assistantIdentifier;
- (void)barrier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)cancelSynchronously:(void *)arg1 onQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)connectionId;
- (<SiriCoreSiriConnectionDelegate> *)delegate;
- (bool)deviceIsInWalkaboutExperimentGroup;
- (bool)forceReconnect;
- (void)getAnalysisInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriCoreAceConnectionAnalysisInfo *, void*
- (void)getConnectionMetricsSynchronously:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriCoreConnectionMetrics *, void*
- (bool)imposePolicyBan;
- (NSString *)languageCode;
- (NSString *)peerAssistantIdentifier;
- (Class)peerProviderClass;
- (NSString *)peerType;
- (NSString *)peerVersion;
- (bool)prefersWWAN;
- (void)probeConnection;
- (NSString *)productTypePrefix;
- (void)sendCommand:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: <SiriCoreSessionObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendCommands:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SiriCoreSessionObject> *, NSError *, void*
- (void)setAceHost:(NSString *)arg1;
- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setConnectionId:(NSString *)arg1;
- (void)setDelegate:(id <SiriCoreSiriConnectionDelegate>)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(bool)arg1;
- (void)setForceReconnect:(bool)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(NSString *)arg1;
- (void)setPeerAssistantIdentifier:(NSString *)arg1;
- (void)setPeerProviderClass:(Class)arg1;
- (void)setPeerType:(NSString *)arg1;
- (void)setPeerVersion:(NSString *)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProductTypePrefix:(NSString *)arg1;
- (void)setSendPings:(bool)arg1;
- (void)setSiriConnectionUsesPeerManagedSync:(bool)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerError:(NSError *)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(NSURL *)arg1;
- (void)setUseWiFiHint:(bool)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (bool)siriConnectionUsesPeerManagedSync;
- (bool)skipPeer;
- (NSError *)skipPeerError;
- (void)start;
- (double)timeout;
- (NSURL *)url;
- (bool)useWiFiHint;
- (bool)usesProxyConnection;

@end