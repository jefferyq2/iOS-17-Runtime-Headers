
@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    struct __CFString { } * _commChannelUUID;
    AVOutputContextCommunicationChannel * _parentChannel;
    struct OpaqueFigRoutingContext { } * _routingContext;
}

@property (nonatomic, readonly) struct __CFString { }*commChannelUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CFString { }*)commChannelUUID;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 commChannelUUID:(struct __CFString { }*)arg2;
- (id)parentCommunicationChannel;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentCommunicationChannel:(id)arg1;

@end