
@interface NFHardwareManager : NSObject <NFHardwareManagerCallbacks, NFHardwareManagerXPCDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NFHardwareControllerInfo * _controllerInfo;
    bool  _didPreWarm;
    NSMutableSet * _eventListeners;
    bool  _hasEventListener;
    unsigned int  _hwSupport;
    unsigned int  _lastClientState;
    int  _listeningForNfcdStartedNtf;
    NSObject<OS_dispatch_queue> * _listeningQueue;
    NSArray * _secureElements;
    NSDictionary * _secureElementsById;
    NSMutableSet * _sessions;
    long long  _type;
    NSMutableArray * _waitingClients;
    NFHardwareManagerXPC * _xpc;
}

@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundTagReadingAvailable;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendBackgroundTagReading;

+ (id)_sharedHardwareManagerWaitOnHWInit:(bool)arg1;
+ (id)sharedHardwareManager;
+ (void)sharedHardwareManager:(id /* block */)arg1;
+ (id)sharedHardwareManagerWithNoUI;

- (void).cxx_destruct;
- (id)_sessionAttribute;
- (id)_startFieldDetectSession:(bool)arg1 completion:(id /* block */)arg2;
- (id)_startLoyaltyAndContactlessPaymentSession:(id /* block */)arg1 force:(bool)arg2;
- (id)_startReaderSessionWithUI:(long long)arg1 callback:(id /* block */)arg2;
- (id)_synchronousQueueSessionWithRetry:(id)arg1 queueBlock:(id /* block */)arg2;
- (void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 completion:(id /* block */)arg2;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (bool)areSessionsAllowed;
- (id)blessedUser;
- (id)cachedEmbeddedSecureElementSerialNumber:(id*)arg1;
- (id)checkExpressPassCompatibility:(id)arg1 error:(id*)arg2;
- (unsigned int)checkUserBlessing:(id)arg1;
- (unsigned int)checkUserBlessing:(id)arg1 hasCards:(bool*)arg2;
- (id)configureHeadlessFactoryMode:(bool)arg1;
- (void)configureReaderModeRFForTransitPartner:(bool)arg1 transitPartner:(unsigned int)arg2 callback:(id /* block */)arg3;
- (id)connectToXPCManager:(bool)arg1;
- (id)controllerInfo;
- (id)controllerInfoWithError:(id*)arg1;
- (void)didChangeRadioState:(bool)arg1;
- (void)didInterrupt:(id)arg1;
- (void)didInvalidate;
- (id)disableHeadless;
- (id)disableLPEMFeature:(unsigned long long)arg1;
- (void)dumpLPMDebugLog;
- (id)enableHeadlessTestMode:(unsigned short)arg1;
- (id)enableLPEMFeature:(unsigned long long)arg1;
- (long long)expressModeControlState;
- (bool)expressModesEnabled;
- (id)forceLoyaltyAndContactlessPaymentSession:(id /* block */)arg1;
- (id)getDieID;
- (id)getDieIDWithError:(id*)arg1;
- (id)getFlashWriteCounters:(id*)arg1;
- (bool)getHeadlessFactoryMode:(id*)arg1;
- (id)getHeadlessModeFlags:(unsigned int*)arg1;
- (unsigned int)getHwSupport;
- (id)getLPEMFTALogging:(id*)arg1;
- (id)getPowerCounters:(id*)arg1;
- (id)getRadioEnabledSetting:(bool*)arg1;
- (id)getRadioEnabledState:(long long*)arg1;
- (id)getTemperature:(double*)arg1;
- (id)getUniqueFDRKey:(id*)arg1;
- (bool)hasCard;
- (id)hostEmulationLog;
- (void)hwStateDidChange:(unsigned int)arg1;
- (id)initWithType:(long long)arg1;
- (void)invalidateConnection;
- (bool)isBackgroundTagReadingAvailable;
- (bool)isExpressAppletTypeSupported:(unsigned char)arg1;
- (bool)isExpressModeSupported;
- (bool)isInRestrictedMode;
- (void)listenForNfcdStartup;
- (bool)preWarm;
- (bool)preWarm:(id*)arg1;
- (id)pushSignedRF:(id)arg1;
- (unsigned int)queryHardwareSupport:(id*)arg1;
- (void)refreshSecureElements;
- (bool)refreshSecureElementsWithError:(id*)arg1;
- (void)registerEventListener:(id)arg1;
- (void)registerForRemoteCallbacks;
- (id)releaseAssertion:(id)arg1;
- (id)releaseSinglePollExpressModeAssertion;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)requestAssertion:(unsigned long long)arg1 error:(id*)arg2;
- (id)rfSettings;
- (bool)secureElementBootHistory:(id*)arg1;
- (id)secureElementWithIdentifier:(id)arg1;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElementWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)secureElements;
- (id)secureElementsWithError:(id*)arg1;
- (void)sessionDidEnd:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (id)setChipscope:(bool)arg1;
- (bool)setFieldDetectEnabled:(bool)arg1;
- (id)setRadioEnabledSetting:(bool)arg1;
- (void)setSuspendBackgroundTagReading:(bool)arg1;
- (id)startContactlessPaymentSession:(id /* block */)arg1;
- (id)startContactlessSession:(id /* block */)arg1;
- (id)startDigitalCarKeySession:(id /* block */)arg1;
- (id)startECommercePaymentSession:(id /* block */)arg1;
- (id)startFieldDetectSession:(id /* block */)arg1;
- (id)startHCESession:(id /* block */)arg1;
- (id)startHCESessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)startLPEMConfigSession:(id /* block */)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(id /* block */)arg1;
- (id)startNdefTagSession:(id /* block */)arg1;
- (id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(id /* block */)arg2;
- (id)startPeerPaymentSession:(id /* block */)arg1;
- (id)startReaderSession:(id /* block */)arg1;
- (id)startReaderSessionWithActionSheetUI:(id /* block */)arg1;
- (id)startSecureElementAndHCESession:(id /* block */)arg1;
- (id)startSecureElementLoggingSession:(id /* block */)arg1;
- (id)startSecureElementManagerSession:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)startSecureElementManagerSessionWithPriority:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithPriority:(bool)arg1 callback:(id /* block */)arg2;
- (id)startSecureElementReaderSession:(id /* block */)arg1;
- (id)startSecureTransactionServicesSessionWithRole:(unsigned long long)arg1 connectionHandoverCofig:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)startSesHatSession:(id /* block */)arg1;
- (id)startSinglePollExpressModeAssertion:(double)arg1;
- (id)startTrustSession:(id /* block */)arg1;
- (id)startUnfilteredFieldDetectSession:(id /* block */)arg1;
- (id)startUnifiedAccessSession:(id /* block */)arg1;
- (id)stateInfo:(id*)arg1;
- (void)stopListeningForNfcdRestart;
- (bool)supportsCathay;
- (bool)suspendBackgroundTagReading;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)temperatureChanged:(double)arg1;
- (id)toggleGPIO:(unsigned short)arg1;
- (bool)triggerDelayedWake:(unsigned char)arg1;
- (void)unregisterEventListener:(id)arg1;
- (void)unregisterForRemoteCallbacks;
- (id)updateHWSupportWithXPC:(id)arg1 waitForInit:(bool)arg2;

@end