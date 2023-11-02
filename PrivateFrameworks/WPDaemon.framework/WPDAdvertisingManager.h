
@interface WPDAdvertisingManager : WPDManager <CBPeripheralManagerDelegate> {
    AdvMetrics * _advMetrics;
    WPAdvertisingRequestsQueue * _advertisingRequests;
    bool  _allowCompoundAdvertisements;
    NSMutableDictionary * _clientAdvertisingRequests;
    NSMutableSet * _clientsToNotifyOnAddressChange;
    unsigned long long  _connectableAdvDropCount;
    unsigned long long  _connectableAdvTotalCount;
    CBPeripheralManager * _connectablePeripheralManager;
    NSMutableIndexSet * _currentAdvertisers;
    WPDAdvertisingData * _currentConnectableAdvertisingData;
    WPDAdvertisingData * _currentNonConnectableAdvertisingData;
    unsigned long long  _nonConnectableAdvDropCount;
    unsigned long long  _nonConnectableAdvTotalCount;
    CBPeripheralManager * _nonConnectablePeripheralManager;
    NSMutableDictionary * _preallocatedServices;
    NSMutableDictionary * _publishedServices;
    NSMutableSet * _rangingClients;
    NSIndexSet * _rangingTypes;
}

@property (retain) AdvMetrics *advMetrics;
@property (retain) WPAdvertisingRequestsQueue *advertisingRequests;
@property bool allowCompoundAdvertisements;
@property (retain) NSMutableDictionary *clientAdvertisingRequests;
@property (retain) NSMutableSet *clientsToNotifyOnAddressChange;
@property (nonatomic) unsigned long long connectableAdvDropCount;
@property (nonatomic) unsigned long long connectableAdvTotalCount;
@property (nonatomic, retain) CBPeripheralManager *connectablePeripheralManager;
@property (retain) NSMutableIndexSet *currentAdvertisers;
@property (nonatomic, retain) WPDAdvertisingData *currentConnectableAdvertisingData;
@property (nonatomic, retain) WPDAdvertisingData *currentNonConnectableAdvertisingData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRanging;
@property (nonatomic) unsigned long long nonConnectableAdvDropCount;
@property (nonatomic) unsigned long long nonConnectableAdvTotalCount;
@property (nonatomic, retain) CBPeripheralManager *nonConnectablePeripheralManager;
@property (retain) NSMutableDictionary *preallocatedServices;
@property (retain) NSMutableDictionary *publishedServices;
@property (retain) NSMutableSet *rangingClients;
@property (nonatomic, readonly) NSIndexSet *rangingTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)NSUUIDfromCBUUID:(id)arg1;
- (id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (void)addAdvertisingRequest:(id)arg1 forDaemon:(id)arg2;
- (void)addCharacteristic:(id)arg1 Properties:(unsigned long long)arg2 Permissions:(unsigned long long)arg3 Service:(id)arg4 Name:(id)arg5;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2 forClient:(id)arg3;
- (id)addXPCDelayTiming:(id)arg1 IsMetricOnly:(bool)arg2 UseCase:(unsigned long long)arg3;
- (id)advMetrics;
- (id)advertisingRequests;
- (id)advertisingRules;
- (bool)allowCompoundAdvertisements;
- (id)clientAdvertisingRequests;
- (id)clientForAdvRequest:(id)arg1;
- (id)clientsToNotifyOnAddressChange;
- (unsigned long long)connectableAdvDropCount;
- (unsigned long long)connectableAdvTotalCount;
- (id)connectablePeripheralManager;
- (id)currentAdvertisers;
- (id)currentConnectableAdvertisingData;
- (id)currentNonConnectableAdvertisingData;
- (void)enableRanging:(bool)arg1 forClient:(id)arg2;
- (id)generateStateDumpStrings;
- (id)getCharacteristicForClient:(id)arg1;
- (id)getClientUUIDsForCharacteristic:(id)arg1;
- (id)getCurrentAdvertisers;
- (id)getManager;
- (bool)heySiriAdvertActive:(bool)arg1;
- (bool)heySiriAdvertActiveAllDevices;
- (void)informClientsAdvertisingPending:(id)arg1;
- (id)initWithServer:(id)arg1;
- (bool)isAdvertiserTestMode;
- (bool)isRanging;
- (unsigned long long)nonConnectableAdvDropCount;
- (unsigned long long)nonConnectableAdvTotalCount;
- (id)nonConnectablePeripheralManager;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (bool)platformSupportsMultipleAdvertising;
- (void)preallocateServices;
- (id)preallocatedServices;
- (id)publishedServices;
- (id)rangingClients;
- (id)rangingTypes;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 shouldUpdate:(bool)arg3;
- (void)removeAdvertisingRequest:(id)arg1 forDaemon:(id)arg2;
- (id)removeAdvertisingRequestsForClient:(id)arg1;
- (void)removeServiceForClient:(id)arg1;
- (id)requestFromAdvertisingDataConnectable:(bool)arg1 AddressChangeNotificationNeeded:(bool)arg2;
- (void)resetAdvertisingManager;
- (void)setAdvMetrics:(id)arg1;
- (void)setAdvertisingRequests:(id)arg1;
- (void)setAllowCompoundAdvertisements:(bool)arg1;
- (void)setClientAdvertisingRequests:(id)arg1;
- (void)setClientsToNotifyOnAddressChange:(id)arg1;
- (void)setConnectableAdvDropCount:(unsigned long long)arg1;
- (void)setConnectableAdvTotalCount:(unsigned long long)arg1;
- (void)setConnectablePeripheralManager:(id)arg1;
- (void)setCurrentAdvertisers:(id)arg1;
- (void)setCurrentConnectableAdvertisingData:(id)arg1;
- (void)setCurrentNonConnectableAdvertisingData:(id)arg1;
- (void)setNonConnectableAdvDropCount:(unsigned long long)arg1;
- (void)setNonConnectableAdvTotalCount:(unsigned long long)arg1;
- (void)setNonConnectablePeripheralManager:(id)arg1;
- (void)setPreallocatedServices:(id)arg1;
- (void)setPublishedServices:(id)arg1;
- (void)setRangingClients:(id)arg1;
- (void)statsExportTimerFired;
- (void)update;
- (void)updateAdvertiser;

@end