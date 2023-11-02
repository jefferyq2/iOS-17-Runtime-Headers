
@interface AKURLDataTask : NSObject {
    bool  _canceledOrCompleted;
    id /* block */  _completionHandler;
    NSError * _lastRetryError;
    NSMutableData * _receivedData;
    NSURLRequest * _request;
    unsigned long long  _retryCount;
    NSURLSessionDataTask * _underlyingTask;
}

@property (nonatomic) bool canceledOrCompleted;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSError *lastRetryError;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) NSURLSessionDataTask *underlyingTask;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (bool)canceledOrCompleted;
- (id /* block */)completionHandler;
- (id)description;
- (id)lastRetryError;
- (id)receivedData;
- (id)request;
- (unsigned long long)retryCount;
- (void)setCanceledOrCompleted:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLastRetryError:(id)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setUnderlyingTask:(id)arg1;
- (id)underlyingTask;

@end