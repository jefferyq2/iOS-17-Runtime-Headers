
@interface ATXPCMessage : NSObject {
    NSDictionary * _info;
    NSString * _name;
    ATXPCConnection * _receivingConnection;
    NSObject<OS_xpc_object> * _x_reply;
    NSObject<OS_xpc_object> * _x_reply_connection;
}

@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (void)dealloc;
- (id)info;
- (id)initWithName:(id)arg1;
- (id)name;
- (bool)needsReply;
- (void)sendReply:(id)arg1;
- (void)setInfo:(id)arg1;

@end