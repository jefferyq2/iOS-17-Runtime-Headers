
@protocol LARemoteUIHost

@required

- (void)checkClearForIdleExitWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)connectRemoteUI:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: <LARemoteUI> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <LAUIMechanism> *, <LABackoffCounter> *, NSError *, void*
- (void)disconnectRemoteUI;

@end