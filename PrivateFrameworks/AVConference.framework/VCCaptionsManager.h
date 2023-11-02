
@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {
    AVConferenceXPCClient * _connection;
    NSMutableDictionary * _streamTokenList;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (id)captionsSourceFromClientContext:(id)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)registerBlocksForService;
- (void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2;
- (void)streamToken:(long long)arg1 didDetectGibberish:(bool)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(bool)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(bool)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)arg1;

@end