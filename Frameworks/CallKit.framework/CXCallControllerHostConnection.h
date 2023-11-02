
@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol> {
    NSString * _applicationIdentifier;
    NSURL * _bundleURL;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    <CXCallControllerHostConnectionDelegate> * _delegate;
    bool  _hasPushToTalkBackgroundMode;
    bool  _hasVoIPBackgroundMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (getter=isCallTransactionRequestPermitted, nonatomic, readonly) bool callTransactionRequestPermitted;
@property (nonatomic, copy) NSSet *capabilities;
@property (getter=isChannelTransactionRequestPermitted, nonatomic, readonly) bool channelTransactionRequestPermitted;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallControllerHostConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool entitledForPrivateAPI;
@property (getter=isPermittedToUsePublicAPI, nonatomic, readonly) bool entitledForPublicAPI;
@property (nonatomic) bool hasPushToTalkBackgroundMode;
@property (nonatomic) bool hasVoIPBackgroundMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CXCallControllerVendorProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)addOrUpdateCall:(id)arg1;
- (id)applicationIdentifier;
- (id)bundleURL;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)hasPushToTalkBackgroundMode;
- (bool)hasVoIPBackgroundMode;
- (id)init;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (bool)isCallTransactionRequestPermitted;
- (bool)isChannelTransactionRequestPermitted;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)remoteObjectProxy;
- (oneway void)removeCall:(id)arg1;
- (oneway void)requestCalls:(id /* block */)arg1;
- (oneway void)requestTransaction:(id)arg1 reply:(id /* block */)arg2;
- (id)serialQueue;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasPushToTalkBackgroundMode:(bool)arg1;
- (void)setHasVoIPBackgroundMode:(bool)arg1;
- (void)setSerialQueue:(id)arg1;

@end