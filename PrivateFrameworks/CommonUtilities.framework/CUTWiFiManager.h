
@interface CUTWiFiManager : NSObject {
    void * _currentNetwork;
    NSHashTable * _delegateMap;
    void * _dynamicStore;
    NSObject<OS_dispatch_queue> * _incomingCallbacksQueue;
    bool  _isHostingHotSpot;
    bool  _isPrimaryCellularCached;
    bool  _isWakeOnWiFiEnabled;
    bool  _isWakeOnWiFiSupported;
    bool  _isWifiEnabled;
    NSDictionary * _lastWiFiPowerInfo;
    int  _linkToken;
    NSRecursiveLock * _lock;
    struct __CFRunLoopSource { } * _runLoopSource;
    bool  _shouldAutoAssociateAsForeground;
    NSMutableSet * _wiFiAutoAssociationTokens;
    void * _wifiDevice;
    void * _wifiManager;
    NSRunLoop * _wifiRunLoop;
    NSThread * _wifiThread;
    NSHashTable * _wowClients;
}

@property (nonatomic, readonly) bool autoAssociateWiFi;
@property (nonatomic) bool autoAssociateWiFiAsForegroundClient;
@property (nonatomic) void*currentNetwork;
@property (nonatomic, readonly) NSString *currentSSID;
@property (nonatomic, retain) NSHashTable *delegateMap;
@property (nonatomic) void*dynamicStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *incomingCallbacksQueue;
@property (nonatomic, readonly) bool isHostingWiFiHotSpot;
@property bool isPrimaryCellularCached;
@property (nonatomic, readonly) bool isWiFiAssociated;
@property (nonatomic, readonly) bool isWiFiCaptive;
@property (nonatomic, readonly) bool isWiFiEnabled;
@property (nonatomic, readonly) bool isWoWEnabled;
@property (nonatomic, readonly) bool isWoWSupported;
@property (nonatomic, copy) NSDictionary *lastWiFiPowerInfo;
@property (nonatomic) int linkToken;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) struct __CFRunLoopSource { }*runLoopSource;
@property (nonatomic, retain) NSMutableSet *wiFiAutoAssociationTokens;
@property (nonatomic, readonly) NSNumber *wiFiScaledRSSI;
@property (nonatomic, readonly) NSNumber *wiFiScaledRate;
@property (nonatomic, readonly) NSNumber *wiFiSignalStrength;
@property (nonatomic) void*wifiDevice;
@property (nonatomic) void*wifiManager;
@property (nonatomic, retain) NSRunLoop *wifiRunLoop;
@property (nonatomic, retain) NSThread *wifiThread;
@property (nonatomic, readonly) bool willTryToAutoAssociateWiFiNetwork;
@property (nonatomic, readonly) bool willTryToSearchForWiFiNetwork;
@property (nonatomic, retain) NSHashTable *wowClients;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWoWState;
- (void)_createDynamicStore;
- (void)_handleDeviceAttachedCallback;
- (void)_handleDevicePowerCallback;
- (void)_handleHostAPStateChangedCallback;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient { }*)arg1;
- (bool)_isPrimaryCellular;
- (void)_performBackgroundInit;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2;
- (void)_performCurrentNetworkBlock:(id /* block */)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2 async:(bool)arg3;
- (void)_performDeviceBlock:(id /* block */)arg1;
- (void)_performDeviceBlock:(id /* block */)arg1 useCache:(bool)arg2;
- (void)_performPowerReading;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_setupWifiNotifications;
- (id)_ssidFromNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_threadedMain;
- (void)_updateInitialWiFiState;
- (void)_updateIsWiFiAssociatedAsync:(bool)arg1;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)addDelegate:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (bool)autoAssociateWiFi;
- (bool)autoAssociateWiFiAsForegroundClient;
- (void*)currentNetwork;
- (id)currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegateMap;
- (void*)dynamicStore;
- (bool)hasWiFiAutoAssociationClientToken:(id)arg1;
- (bool)hasWoWClient:(id)arg1;
- (id)incomingCallbacksQueue;
- (id)init;
- (bool)isHostingWiFiHotSpot;
- (bool)isPrimaryCellularCached;
- (bool)isWiFiAssociated;
- (bool)isWiFiCaptive;
- (bool)isWiFiEnabled;
- (bool)isWoWEnabled;
- (bool)isWoWSupported;
- (id)lastWiFiPowerInfo;
- (int)linkToken;
- (id)lock;
- (void)removeDelegate:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)setAutoAssociateWiFiAsForegroundClient:(bool)arg1;
- (void)setCurrentNetwork:(void*)arg1;
- (void)setDelegateMap:(id)arg1;
- (void)setDynamicStore:(void*)arg1;
- (void)setIncomingCallbacksQueue:(id)arg1;
- (void)setIsPrimaryCellularCached:(bool)arg1;
- (void)setLastWiFiPowerInfo:(id)arg1;
- (void)setLinkToken:(int)arg1;
- (void)setLock:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (void)setWifiDevice:(void*)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)setWifiRunLoop:(id)arg1;
- (void)setWifiThread:(id)arg1;
- (void)setWowClients:(id)arg1;
- (void)showNetworkOptions;
- (id)wiFiAutoAssociationTokens;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (void*)wifiDevice;
- (void*)wifiManager;
- (id)wifiRunLoop;
- (id)wifiThread;
- (bool)willTryToAutoAssociateWiFiNetwork;
- (bool)willTryToSearchForWiFiNetwork;
- (id)wowClients;

@end