
@protocol C2RequestDelegate <NSObject>

@required

- (void)URLSession:(NSURLSession *)arg1 _taskIsWaitingForConnection:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2 withError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(void *)arg1 dataTask:(void *)arg2 didReceiveResponse:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionDataTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(void *)arg1 task:(void *)arg2 _willSendRequestForEstablishedConnection:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURLSession *, NSURLSessionTask *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(void *)arg1 task:(void *)arg2 needNewBodyStream:(void *)arg3; // needs 3 arg types, found 8: NSURLSession *, NSURLSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, void*
- (void)URLSession:(void *)arg1 task:(void *)arg2 willPerformHTTPRedirection:(void *)arg3 newRequest:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSURLSession *, NSURLSessionTask *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*

@end