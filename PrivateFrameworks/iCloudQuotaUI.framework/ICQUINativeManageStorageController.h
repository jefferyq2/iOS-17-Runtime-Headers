
@interface ICQUINativeManageStorageController : PSListController <AAUISpecifierProviderDelegate, ICQLiftUIPresenterDelegate, ICQUIManageStorageSpecifierProviderDelegate, ICQUIRemoteUIPresenterDelegate, ICQUpgradeFlowManagerDelegate> {
    AIDAAccountManager * _accountManager;
    PSSpecifier * _activeSpecifier;
    <AAUISpecifierProvider> * _appListSpecifierProvider;
    ICQPreferencesFreshmintManager * _freshmintManager;
    <AAUISpecifierProvider> * _headerSpecifierProvider;
    ICQLiftUIPresenter * _liftUIPresenter;
    ICQUIRemoteUIPresenter * _remoteUIPresenter;
    ICQPreferencesRemoteUIDelegate * _ruiDelegate;
    bool  _shouldLaunchBackupDrilldown;
    bool  _shouldLaunchPhotosDrilldown;
    ICQCloudStorageSummary * _storageSummary;
    <AAUISpecifierProvider> * _tipSpecifierProvider;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) PSSpecifier *activeSpecifier;
@property (nonatomic, retain) <AAUISpecifierProvider> *appListSpecifierProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICQPreferencesFreshmintManager *freshmintManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <AAUISpecifierProvider> *headerSpecifierProvider;
@property (nonatomic, retain) ICQLiftUIPresenter *liftUIPresenter;
@property (nonatomic, retain) ICQUIRemoteUIPresenter *remoteUIPresenter;
@property (nonatomic, retain) ICQPreferencesRemoteUIDelegate *ruiDelegate;
@property (nonatomic) bool shouldLaunchBackupDrilldown;
@property (nonatomic) bool shouldLaunchPhotosDrilldown;
@property (nonatomic, retain) ICQCloudStorageSummary *storageSummary;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AAUISpecifierProvider> *tipSpecifierProvider;

- (void).cxx_destruct;
- (bool)_didFetchBackupSpecifier;
- (bool)_didFetchPhotosSpecifier;
- (void)_fetchStorageSummary;
- (void)_fetchStorageSummaryIgnoreCache:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_isFreshmintLink:(id)arg1;
- (void)_launchBackupDrilldown;
- (void)_launchDeeplinksIfNeeded;
- (void)_launchLocalBackupController;
- (void)_launchPhotosDrilldown;
- (void)_startSpinnerInSpecifier:(id)arg1;
- (void)_stopSpinnerInSpecifier:(id)arg1;
- (void)_updateStorageSummaryAndNotify;
- (id)account;
- (id)accountManager;
- (id)actionInfoForSpecifier:(id)arg1;
- (id)activeSpecifier;
- (id)appListSpecifierProvider;
- (void)dealloc;
- (id)freshmintManager;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)headerSpecifierProvider;
- (id)icqLinkForSpecifier:(id)arg1;
- (id)initWithAccountManager:(id)arg1 summary:(id)arg2 ruiDelegate:(id)arg3;
- (void)launchFreshmint;
- (void)launchFreshmintFlowForLink:(id)arg1;
- (void)launchFreshmintFlowForSpecifier:(id)arg1;
- (void)launchICQLinkFromSpecifier:(id)arg1;
- (void)launchLegacyPurchase;
- (void)launchLegacyPurchaseFromSpecifier:(id)arg1;
- (id)liftUIPresenter;
- (void)liftUIPresenterDidCancel:(id)arg1;
- (void)liftUIPresenterDidCancel:(id)arg1 userInfo:(id)arg2;
- (void)liftUIPresenterDidComplete:(id)arg1;
- (void)liftUIPresenterDidComplete:(id)arg1 userInfo:(id)arg2;
- (void)loadDrilldownFromSpecifier:(id)arg1;
- (void)loadLiftUIDrilldownFromSpecifier:(id)arg1;
- (void)loadRemoteUIDrilldownFromSpecifier:(id)arg1;
- (void)presentLiftUISheetFromSpecifier:(id)arg1;
- (void)presentRemoteUISheetFromSpecifier:(id)arg1;
- (void)presentServerUISheetFromSpecifier:(id)arg1;
- (void)provider:(id)arg1 loadActionFromSpecifier:(id)arg2;
- (void)refreshAppList;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (id)remoteUIPresenter;
- (id)ruiDelegate;
- (void)setAccountManager:(id)arg1;
- (void)setActiveSpecifier:(id)arg1;
- (void)setAppListSpecifierProvider:(id)arg1;
- (void)setFreshmintManager:(id)arg1;
- (void)setHeaderSpecifierProvider:(id)arg1;
- (void)setLiftUIPresenter:(id)arg1;
- (void)setRemoteUIPresenter:(id)arg1;
- (void)setRuiDelegate:(id)arg1;
- (void)setShouldLaunchBackupDrilldown:(bool)arg1;
- (void)setShouldLaunchPhotosDrilldown:(bool)arg1;
- (void)setStorageSummary:(id)arg1;
- (void)setTipSpecifierProvider:(id)arg1;
- (bool)shouldLaunchBackupDrilldown;
- (bool)shouldLaunchPhotosDrilldown;
- (void)showAlertFromSpecifier:(id)arg1;
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;
- (id)specifiers;
- (void)startFamilySharingFromSpecifier:(id)arg1;
- (void)stopActiveSpecifier;
- (id)storageSummary;
- (id)tipSpecifierProvider;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (id)urlForSpecifier:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end