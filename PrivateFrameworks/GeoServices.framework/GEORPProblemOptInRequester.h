
@interface GEORPProblemOptInRequester : GEOServiceRequester

+ (id)sharedInstance;

- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3;

@end