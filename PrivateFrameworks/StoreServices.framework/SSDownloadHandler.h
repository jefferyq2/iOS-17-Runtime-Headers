
@interface SSDownloadHandler : NSObject {
    SSXPCConnection * _controlConnection;
    <SSDownloadHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _downloadPhasesToIgnore;
    long long  _handlerID;
    SSXPCConnection * _observerConnection;
    bool  _sessionsNeedPowerAssertion;
    bool  _sessionsShouldBlockOtherDownloads;
}

@property <SSDownloadHandlerDelegate> *delegate;
@property (copy) NSArray *downloadPhasesToIgnore;
@property (readonly) long long handlerIdentifier;
@property bool sessionsNeedPowerAssertion;
@property bool sessionsShouldBlockOtherDownloads;

- (void)_connectToDaemon;
- (id)_controlConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (id)_newSessionWithMessage:(id)arg1;
- (bool)_sendAuthenticationSessionWithMessage:(id)arg1;
- (void)_sendDisconnectMessage;
- (bool)_sendSessionCancelWithMessage:(id)arg1;
- (bool)_sendSessionHandleWithMessage:(id)arg1;
- (bool)_sendSessionPauseWithMessage:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(const char *)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)downloadPhasesToIgnore;
- (long long)handlerIdentifier;
- (id)init;
- (void)resetDisavowedSessions;
- (bool)sessionsNeedPowerAssertion;
- (bool)sessionsShouldBlockOtherDownloads;
- (void)setDelegate:(id)arg1;
- (void)setDownloadPhasesToIgnore:(id)arg1;
- (void)setSessionsNeedPowerAssertion:(bool)arg1;
- (void)setSessionsShouldBlockOtherDownloads:(bool)arg1;

@end