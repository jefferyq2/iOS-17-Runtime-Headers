
@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {
    NSTimer * _bagLoadTimer;
    bool  _failedBagLoad;
    bool  _listeningForBagLoad;
}

@property (nonatomic) bool failedBagLoad;

- (void).cxx_destruct;
- (void)_bagLoadTimeout:(id)arg1;
- (void)_handleFTServerBagFinishedLoading;
- (bool)_loadURLFromBag;
- (id)_nonModalParentController;
- (void)_reload;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler;
- (void)_showURLDidNotLoadAlert;
- (void)_startBagLoadTimer;
- (void)_startListeningForBagLoad;
- (void)_stopBagLoadTimer;
- (void)_stopCurrentReload;
- (void)_stopListeningForBagLoad;
- (id)_viewPortForFormSheetPresentation;
- (id)_viewPortForNormalPresentation;
- (id)_viewPortStringForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (id)bagKey;
- (bool)canSendURLRequest:(id)arg1;
- (void)cancelTapped;
- (id)clientInfoHeaderValue;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (bool)failedBagLoad;
- (id)initWithRegController:(id)arg1;
- (id)interfaceLayoutHeaderValue;
- (void)loadView;
- (id)logName;
- (id)pushTokenHeaderValue;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)securityHeaderValue;
- (id)serviceHeaderValue;
- (void)setFailedBagLoad:(bool)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldSetHeadersForRequest:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewPortHeaderValue;
- (void)viewWillDisappear:(bool)arg1;

@end