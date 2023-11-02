
@interface TSCellularPlanActivatingFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, TSCellularPlanManagerCacheDelegate, TSSIMSetupDelegate, TSSIMSetupFlowDelegate> {
    NSTimer * _activatingTimer;
    unsigned long long  _backgroundTask;
    UIBarButtonItem * _cancelButton;
    NSString * _carrierErrorCode;
    NSString * _carrierName;
    CoreTelephonyClient * _client;
    unsigned long long  _currentActivatingState;
    bool  _eSIMInstallFromWebsheetFlowStarted;
    NSError * _failureWebsheetError;
    id /* block */  _firstViewControllerCallback;
    NSString * _installingPlanIdentifier;
    NSString * _phoneNumber;
    bool  _planActiveOnSource;
    NSError * _planInstallError;
    NSString * _planName;
    unsigned long long  _planSetupType;
    bool  _shouldShowCompletePaneOnTimeout;
    bool  _skipActivatingPane;
    double  _startTime;
    NSString * _subscriptionContextUUID;
    id  _transferBackOldItem;
    NSError * _transferError;
    long long  _transferState;
    CTCellularPlanItem * _updatePlanItem;
    NSNumber * _waitForPhoneNumber;
    TSSIMSetupFlow * _websheetFlow;
    NSDictionary * _websheetOptions;
    UINavigationController * _websheetRootViewController;
}

@property (retain) NSTimer *activatingTimer;
@property unsigned long long backgroundTask;
@property (retain) UIBarButtonItem *cancelButton;
@property (retain) NSString *carrierErrorCode;
@property (retain) NSString *carrierName;
@property (retain) CoreTelephonyClient *client;
@property unsigned long long currentActivatingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool eSIMInstallFromWebsheetFlowStarted;
@property (retain) NSError *failureWebsheetError;
@property (copy) id /* block */ firstViewControllerCallback;
@property (readonly) unsigned long long hash;
@property (retain) NSString *installingPlanIdentifier;
@property (retain) NSString *phoneNumber;
@property bool planActiveOnSource;
@property (retain) NSError *planInstallError;
@property (retain) NSString *planName;
@property unsigned long long planSetupType;
@property bool shouldShowCompletePaneOnTimeout;
@property bool skipActivatingPane;
@property double startTime;
@property (retain) NSString *subscriptionContextUUID;
@property (readonly) Class superclass;
@property (retain) id transferBackOldItem;
@property (retain) NSError *transferError;
@property long long transferState;
@property (retain) CTCellularPlanItem *updatePlanItem;
@property (retain) NSNumber *waitForPhoneNumber;
@property (retain) TSSIMSetupFlow *websheetFlow;
@property (retain) NSDictionary *websheetOptions;
@property UINavigationController *websheetRootViewController;

- (void).cxx_destruct;
- (id)_firstViewController;
- (void)_handleActivatingExpiry;
- (bool)_isAppInBackground;
- (void)_maybeDeleteTransferBackItem:(id)arg1;
- (void)_maybeDismissAlert:(id /* block */)arg1;
- (void)_maybeMoveToNextViewController;
- (void)_onESIMInstallFromWebSheetFlowStart;
- (void)_onTransferError:(id)arg1;
- (void)_shouldWaitUntilPhoneNumberBeReady:(id /* block */)arg1;
- (void)_startBackgroundTask;
- (void)_startTimer:(double)arg1;
- (bool)_startedByFollowup;
- (void)_stopBackgroundTask;
- (void)_stopTimer;
- (void)_submitCellularPlanSetupDetails;
- (id)activatingTimer;
- (unsigned long long)backgroundTask;
- (id)cancelButton;
- (void)cancelFlow;
- (id)carrierErrorCode;
- (id)carrierName;
- (id)client;
- (unsigned long long)currentActivatingState;
- (void)dealloc;
- (bool)eSIMInstallFromWebsheetFlowStarted;
- (id)failureWebsheetError;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id /* block */)firstViewControllerCallback;
- (id)initWithSkipActivatingPane:(bool)arg1 delayStartTimer:(bool)arg2 transferBackPlan:(id)arg3 setupType:(unsigned long long)arg4;
- (id)installingPlanIdentifier;
- (void)launchWebsheet:(id)arg1 completion:(id /* block */)arg2;
- (id)nextViewControllerFrom:(id)arg1;
- (void)offerFallbackOption;
- (id)phoneNumber;
- (bool)planActiveOnSource;
- (id)planInstallError;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (id)planName;
- (unsigned long long)planSetupType;
- (void)redirectToBTFlow;
- (void)setActivatingTimer:(id)arg1;
- (void)setBackgroundTask:(unsigned long long)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCarrierErrorCode:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setCurrentActivatingState:(unsigned long long)arg1;
- (void)setESIMInstallFromWebsheetFlowStarted:(bool)arg1;
- (void)setFailureWebsheetError:(id)arg1;
- (void)setFirstViewControllerCallback:(id /* block */)arg1;
- (void)setInstallingPlanIdentifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPlanActiveOnSource:(bool)arg1;
- (void)setPlanInstallError:(id)arg1;
- (void)setPlanName:(id)arg1;
- (void)setPlanSetupType:(unsigned long long)arg1;
- (void)setShouldShowCompletePaneOnTimeout:(bool)arg1;
- (void)setSkipActivatingPane:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSubscriptionContextUUID:(id)arg1;
- (void)setTransferBackOldItem:(id)arg1;
- (void)setTransferError:(id)arg1;
- (void)setTransferState:(long long)arg1;
- (void)setUpdatePlanItem:(id)arg1;
- (void)setWaitForPhoneNumber:(id)arg1;
- (void)setWebsheetFlow:(id)arg1;
- (void)setWebsheetOptions:(id)arg1;
- (void)setWebsheetRootViewController:(id)arg1;
- (bool)shouldOfferFallbackOptionOnError:(id)arg1;
- (bool)shouldShowCompletePaneOnTimeout;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (bool)skipActivatingPane;
- (double)startTime;
- (id)subscriptionContextUUID;
- (id)transferBackOldItem;
- (id)transferError;
- (void)transferEventUpdate:(id)arg1;
- (long long)transferState;
- (id)updatePlanItem;
- (id)waitForPhoneNumber;
- (id)websheetFlow;
- (id)websheetOptions;
- (id)websheetRootViewController;

@end