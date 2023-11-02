
@protocol CXCallSourceUpdates <NSObject>

@required

- (void)callSource:(CXCallSource *)arg1 registeredWithConfiguration:(CXProviderConfiguration *)arg2;
- (void)callSource:(CXCallSource *)arg1 reportedAudioFinishedForCallWithUUID:(NSUUID *)arg2;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 changedFrequencyData:(NSData *)arg3 forDirection:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 crossDeviceIdentifier:(NSString *)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 endedAtDate:(NSDate *)arg3 privateReason:(long long)arg4 failureContext:(CXCallFailureContext *)arg5;
- (void)callSource:(CXCallSource *)arg1 reportedCallWithUUID:(NSUUID *)arg2 updated:(CXCallUpdate *)arg3;
- (void)callSource:(void *)arg1 reportedNewIncomingCallWithUUID:(void *)arg2 update:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CXCallSource *, NSUUID *, CXCallUpdate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)callSource:(CXCallSource *)arg1 reportedNewOutgoingCallWithUUID:(NSUUID *)arg2 update:(CXCallUpdate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 connectedAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 sentInvitationAtDate:(NSDate *)arg3;
- (void)callSource:(CXCallSource *)arg1 reportedOutgoingCallWithUUID:(NSUUID *)arg2 startedConnectingAtDate:(NSDate *)arg3;
- (void)callSource:(void *)arg1 requestedTransaction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CXCallSource *, CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end