
@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate> {
    <VTPhraseSpotterControlRemoteDelegate> * _delegate;
    VTPeerRemoteConnection * _peerConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end