
@interface WFScanManager : NSObject {
    unsigned long long  _consecutiveZeroFilteredScanResults;
    unsigned long long  _consecutiveZeroUnFilteredScanResults;
    <WFScanManagerDelegate> * _delegate;
    bool  _doUnFilteredScanning;
    bool  _hotspotHelperScanning;
    NSMutableSet * _hotspotPluginNetworks;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _networks;
    long long  _numberOfScansPerformed;
    NSObject<OS_dispatch_queue> * _scanDispatchQueue;
    double  _scanInterval;
    <WFScanManagerScanProxy> * _scanProxy;
    NSMutableArray * _scanQueue;
    id /* block */  _singleScanBlock;
    long long  _state;
    bool  _supportsHotspotHelper;
    bool  _supportsUnfilteredScanning;
}

@property unsigned long long consecutiveZeroFilteredScanResults;
@property unsigned long long consecutiveZeroUnFilteredScanResults;
@property (nonatomic) <WFScanManagerDelegate> *delegate;
@property bool doUnFilteredScanning;
@property (nonatomic) bool hotspotHelperScanning;
@property (nonatomic, retain) NSMutableSet *hotspotPluginNetworks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSMutableSet *networks;
@property long long numberOfScansPerformed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scanDispatchQueue;
@property (nonatomic) double scanInterval;
@property (nonatomic, retain) <WFScanManagerScanProxy> *scanProxy;
@property (nonatomic, retain) NSMutableArray *scanQueue;
@property (nonatomic, copy) id /* block */ singleScanBlock;
@property (nonatomic) long long state;
@property (nonatomic) bool supportsHotspotHelper;
@property (nonatomic) bool supportsUnfilteredScanning;

- (void).cxx_destruct;
- (bool)_canResumeScanning;
- (void)_cancelQueuedScan;
- (void)_checkForNoNetworksFound;
- (bool)_isScanning;
- (id)_knownHiddenNetworkNames;
- (void)_processNextScan;
- (void)_queueScan;
- (void)_removeQueuedScans;
- (void)_resetNoNetworksFoundCounters;
- (void)_scan;
- (void)_scanningDidFinishWithError:(id)arg1;
- (void)_scanningWillStart;
- (void)_startHotspotPluginScan;
- (void)_stopNetworkPluginScan;
- (void)_updatePartialScanResults:(id)arg1;
- (unsigned long long)consecutiveZeroFilteredScanResults;
- (unsigned long long)consecutiveZeroUnFilteredScanResults;
- (id)delegate;
- (bool)doUnFilteredScanning;
- (id)hotspotHelperForScanRecord:(id)arg1;
- (bool)hotspotHelperScanning;
- (id)hotspotPluginNetworks;
- (id)init;
- (id)initWithScanProxy:(id)arg1 delegate:(id)arg2;
- (id)internalQueue;
- (id)networks;
- (long long)numberOfScansPerformed;
- (void)pause;
- (void)resume;
- (id)scanDispatchQueue;
- (double)scanInterval;
- (id)scanProxy;
- (id)scanQueue;
- (void)setConsecutiveZeroFilteredScanResults:(unsigned long long)arg1;
- (void)setConsecutiveZeroUnFilteredScanResults:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoUnFilteredScanning:(bool)arg1;
- (void)setHotspotHelperScanning:(bool)arg1;
- (void)setHotspotPluginNetworks:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setNumberOfScansPerformed:(long long)arg1;
- (void)setScanDispatchQueue:(id)arg1;
- (void)setScanInterval:(double)arg1;
- (void)setScanProxy:(id)arg1;
- (void)setScanQueue:(id)arg1;
- (void)setSingleScanBlock:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsHotspotHelper:(bool)arg1;
- (void)setSupportsUnfilteredScanning:(bool)arg1;
- (double)setTwentyPercentSkew:(double)arg1;
- (id /* block */)singleScanBlock;
- (void)start;
- (long long)state;
- (void)stop;
- (bool)supportsHotspotHelper;
- (bool)supportsUnfilteredScanning;

@end