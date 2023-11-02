
@protocol NMSMessageCenterDelegate <NSObject>

@optional

- (void)messageCenter:(void *)arg1 activeDeviceChanged:(void *)arg2 acknowledgement:(void *)arg3; // needs 3 arg types, found 7: NMSMessageCenter *, IDSDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)messageCenter:(NMSMessageCenter *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveIncomingFileTransfer:(NMSIncomingFileTransfer *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveUnknownRequest:(NMSIncomingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forFileTransfer:(NMSOutgoingFileTransfer *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forResponse:(NMSOutgoingResponse *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(NMSOutgoingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullyDeliverRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullySendRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 failedToSendMessageWithIdentifier:(NSString *)arg2 error:(NSError *)arg3 userInfo:(NSDictionary *)arg4;
- (void)messageCenter:(NMSMessageCenter *)arg1 nearbyDevicesChanged:(NSArray *)arg2;

@end