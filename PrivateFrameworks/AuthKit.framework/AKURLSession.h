
@interface AKURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    bool  __usesAppleIDContext;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    NSMutableDictionary * _tasksByIdentifier;
    NSURLSession * _urlSession;
}

@property (nonatomic) bool _usesAppleIDContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createURLSessionUsesAppleIDContext:(bool)arg1;
+ (id)_urlBagCache;
+ (void)removeAllCachedResponses;
+ (id)sharedAnisetteFreeURLSession;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedCacheReliantAnisetteFreeSession;
+ (id)sharedURLSession;
+ (id)sharedURLSessionWithDenyVirtualInterfaces;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_URLSession;
- (void)_unsafe_completeTask:(id)arg1 withError:(id)arg2;
- (bool)_unsafe_retryTaskIfPossible:(id)arg1;
- (bool)_usesAppleIDContext;
- (id)beginAuthenticationDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)beginDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelDataTask:(id)arg1;
- (id)defaultSessionObjectWithConfiguration:(id)arg1;
- (id)init;
- (bool)isRecoverableError:(id)arg1;
- (id)sessionConfiguration;
- (void)set_usesAppleIDContext:(bool)arg1;

@end