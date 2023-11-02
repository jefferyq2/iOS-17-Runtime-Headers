
@interface BLTBulletinSendQueuePassthrough : NSObject {
    <BLTBulletinSendQueueDelegate> * _delegate;
}

@property (nonatomic) <BLTBulletinSendQueueDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (bool)handleFileURL:(id)arg1;
- (void)queuePending;
- (void)sendNow;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(id /* block */)arg3 didQueue:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(bool)arg3 didSend:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;

@end