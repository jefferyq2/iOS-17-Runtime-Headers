
@protocol CWFXPCRequestProtocolPrivate <CWFXPCRequestProtocolPrivateReadonly>

@required

- (void)addKnownBSS:(void *)arg1 knownNetworkProfile:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CWFBSS *, CWFNetworkProfile *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addKnownNetworkProfile:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFNetworkProfile *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)associateWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFAssocParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)beginActivity:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFActivity *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disassociateWithReason:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endActivityWithUUID:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)endAllActivitiesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performANQPWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CWFANQPParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)performAutoJoinWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFAutoJoinParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performRangingWithPeerList:(void *)arg1 timeout:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, unsigned long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)performScanWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CWFScanParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)performSensingWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CWFSensingParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, CWFSensingResult *, void*
- (void)removeKnownBSS:(void *)arg1 knownNetworkProfile:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CWFBSS *, CWFNetworkProfile *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeKnownNetworkProfile:(void *)arg1 reason:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CWFNetworkProfile *, long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetAutoJoinStatisticsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAutoHotspotMode:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBlockedBands:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setChannel:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFChannel *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setCompanionCountryCode:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPassword:(void *)arg1 knownNetworkProfile:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, CWFNetworkProfile *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPower:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: bool, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setRangeable:(void *)arg1 peerList:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: bool, NSArray *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setRangingIdentifier:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSData *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setThermalIndex:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserAutoJoinState:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: bool, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserSettings:(void *)arg1 properties:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CWFUserSettings *, NSSet *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startAWDLPeerAssistedDiscoveryWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFAWDLPeerAssistedDiscoveryParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopAWDLPeerAssistedDiscoveryWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKnownBSS:(void *)arg1 knownNetworkProfile:(void *)arg2 properties:(void *)arg3 OSSpecificKeys:(void *)arg4 requestParams:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: CWFBSS *, CWFNetworkProfile *, NSSet *, NSSet *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKnownNetworkProfile:(void *)arg1 properties:(void *)arg2 OSSpecificKeys:(void *)arg3 requestParams:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: CWFNetworkProfile *, NSSet *, NSSet *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSoftAPBand:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end