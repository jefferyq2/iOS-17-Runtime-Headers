
@interface SRSensorWriter : NSObject <SRAuthorizationClientDelegate, SRAuthorizationStoreReaderAuthorizationDelegate, SRDaemonNotificationDelegate> {
    NSArray * __requestedConfigurations;
    long long  __writerAuthorizationStatus;
    SRAuthorizationStore * _authStore;
    bool  _authorized;
    NSXPCConnection * _connection;
    bool  _connectionDidInterrupt;
    bool  _connectionDidInvalidate;
    SRDaemonNotification * _daemonNotification;
    SRDatastore * _datastore;
    SRDefaults * _defaults;
    <SRSensorWriterDelegate> * _delegate;
    NSCache * _eligibilityCache;
    NSDictionary * _lastMetadata;
    unsigned long long  _lastMetadataContinuousTime;
    _Atomic bool  _monitoring;
    NSDictionary * _nextDatastoreFiles;
    int  _notifyToken;
    bool  _requestNewSegmentInFlight;
    bool  _retryGetMonitoring;
    double  _roundingInterval;
    NSString * _sensorIdentifier;
    <SRTCCStore> * _tccStore;
    NSString * _writerAuthorizationService;
    NSObject<OS_dispatch_queue> * _writerAuthorizationUpdateQueue;
}

@property (nonatomic, copy) NSArray *_requestedConfigurations;
@property long long _writerAuthorizationStatus;
@property (nonatomic, retain) SRAuthorizationStore *authStore;
@property bool authorized;
@property (retain) NSXPCConnection *connection;
@property bool connectionDidInterrupt;
@property bool connectionDidInvalidate;
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property <SRSensorWriterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *eligibilityCache;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *lastMetadata;
@property unsigned long long lastMetadataContinuousTime;
@property (getter=isMonitoring) bool monitoring;
@property (retain) NSDictionary *nextDatastoreFiles;
@property bool requestNewSegmentInFlight;
@property bool retryGetMonitoring;
@property (nonatomic) double roundingInterval;
@property (copy) NSString *sensorIdentifier;
@property (readonly) Class superclass;
@property (retain) <SRTCCStore> *tccStore;
@property (nonatomic, readonly, retain) NSString *writerAuthorizationService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writerAuthorizationUpdateQueue;

+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)initialize;
+ (id)remoteInterface;

- (void)_requestWriterAuthorizationWithCompletion:(id /* block */)arg1;
- (id)_requestedConfigurations;
- (bool)_setSensorConfiguration:(id)arg1 continuousTimestamp:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_setSensorConfiguration:(id)arg1 error:(id*)arg2;
- (long long)_writerAuthorizationStatus;
- (id)authStore;
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;
- (void)authorizationStore:(id)arg1 didUpdateAuthorizationsForBundleId:(id)arg2 sensors:(id)arg3;
- (bool)authorized;
- (void)authorizedServicesDidChange:(id)arg1 deniedServices:(id)arg2 dataCollectionEnabled:(bool)arg3 onboardingCompleted:(bool)arg4 lastModifiedTimes:(id)arg5 forBundleIdentifier:(id)arg6;
- (void)bundleEligibility:(id)arg1 completion:(id /* block */)arg2;
- (void)checkForMonitoring;
- (id)chooseAuthStore;
- (id)connection;
- (bool)connectionDidInterrupt;
- (bool)connectionDidInvalidate;
- (void)daemonForcedResetDatastoreFiles:(id)arg1;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1;
- (void)daemonNotificationDaemonDidResetDatastore:(id)arg1;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)datastore;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveUpdateToConfigurationRequests;
- (id)eligibilityCache;
- (void)evaluateAuthorizationState;
- (void)evaluateAuthorizationStateWithNewValue:(bool)arg1;
- (void)flushDatabase;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authStore:(id)arg4 tccStore:(id)arg5;
- (bool)isMonitoring;
- (id)lastMetadata;
- (unsigned long long)lastMetadataContinuousTime;
- (id)nextDatastoreFiles;
- (void)provideSample:(id)arg1;
- (bool)provideSample:(id)arg1 continuousTimestamp:(unsigned long long)arg2 error:(id*)arg3;
- (bool)provideSample:(id)arg1 error:(id*)arg2;
- (void)provideSample:(id)arg1 timestamp:(double)arg2;
- (bool)provideSample:(id)arg1 timestamp:(double)arg2 error:(id*)arg3;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3;
- (bool)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 continuousTimestamp:(unsigned long long)arg3 error:(id*)arg4;
- (bool)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (void)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (bool)provideSampleBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 error:(id*)arg4;
- (void)provideSampleData:(id)arg1;
- (void)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (bool)provideSampleData:(id)arg1 continuousTimestamp:(unsigned long long)arg2 error:(id*)arg3;
- (bool)provideSampleData:(id)arg1 error:(id*)arg2;
- (void)provideSampleData:(id)arg1 timestamp:(double)arg2;
- (bool)provideSampleData:(id)arg1 timestamp:(double)arg2 error:(id*)arg3;
- (void)registerWithDaemonForWritingIfNeededWithReply:(id /* block */)arg1;
- (void)requestNewSegment;
- (bool)requestNewSegmentInFlight;
- (void)resetDatastoreFiles:(id)arg1;
- (bool)retryGetMonitoring;
- (double)roundingInterval;
- (id)sensorIdentifier;
- (void)setAuthStore:(id)arg1;
- (void)setAuthorized:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInterrupt:(bool)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibilityCache:(id)arg1;
- (void)setLastMetadata:(id)arg1;
- (void)setLastMetadataContinuousTime:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2;
- (void)setMetadata:(id)arg1 continuousTimestamp:(unsigned long long)arg2 datastore:(id)arg3;
- (void)setMonitoring:(bool)arg1;
- (void)setNextDatastoreFiles:(id)arg1;
- (void)setRequestNewSegmentInFlight:(bool)arg1;
- (void)setRetryGetMonitoring:(bool)arg1;
- (void)setRoundingInterval:(double)arg1;
- (void)setSensorIdentifier:(id)arg1;
- (void)setTccStore:(id)arg1;
- (void)setWriterAuthorizationUpdateQueue:(id)arg1;
- (void)set_requestedConfigurations:(id)arg1;
- (void)set_writerAuthorizationStatus:(long long)arg1;
- (void)setupConnection;
- (void)startUpdatingAuthorizations;
- (id)tccStore;
- (void)updateWriterAuthorizationStatus;
- (id)writerAuthorizationService;
- (id)writerAuthorizationUpdateQueue;

@end