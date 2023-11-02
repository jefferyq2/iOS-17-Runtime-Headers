
@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>

@optional

- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (NSInputStream *)connection:(NSURLConnection *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (NSCachedURLResponse *)connection:(NSURLConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (NSURLRequest *)connection:(NSURLConnection *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;

@end