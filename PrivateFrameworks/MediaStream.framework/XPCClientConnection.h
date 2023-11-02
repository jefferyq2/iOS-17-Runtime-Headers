
@interface XPCClientConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <XPCClientConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
}

@property (nonatomic, readonly) <XPCClientConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleConnectionEvent:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_reallySendMessage:(id)arg1 handler:(id /* block */)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4;
- (id)debugDescription;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)sendMessage:(id)arg1 withHandler:(id /* block */)arg2;
- (void)shutDownCompletionBlock:(id /* block */)arg1;

@end