
@interface ICDelegationProviderServiceProtocolHandler : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    ICUserIdentityStore * _identityStore;
    unsigned long long  _nextSessionUniqueID;
    NSOperationQueue * _operationQueue;
    ICRequestContext * _requestContext;
}

- (void).cxx_destruct;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)_nextSessionUniqueID;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;

@end