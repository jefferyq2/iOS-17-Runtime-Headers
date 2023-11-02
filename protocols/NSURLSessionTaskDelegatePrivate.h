
@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 _taskIsWaitingForConnection:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _alternatePathAvailable:(int)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _didReceiveInformationalResponse:(NSURLResponse *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(void *)arg1 task:(void *)arg2 _schemeUpgraded:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionTask *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)URLSession:(void *)arg1 task:(void *)arg2 _willSendRequestForEstablishedConnection:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionTask *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*

@end