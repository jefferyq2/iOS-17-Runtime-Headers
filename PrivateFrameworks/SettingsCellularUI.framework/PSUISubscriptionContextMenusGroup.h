
@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup> {
    PSUICoreTelephonyCallCache * _callCache;
    PSUICallingSubgroup * _callingSubgroup;
    PSUICoreTelephonyCarrierBundleCache * _carrierBundleCache;
    PSUICarrierSpaceGroup * _carrierSpaceSubgroup;
    CTCellularPlanManager * _cellularPlanManager;
    PSUICoreTelephonyDataCache * _dataCache;
    PSUIDataModeSubgroup * _dataModeSubgroup;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    PSUIMyNumberSubgroup * _myNumberSubgroup;
    PSUINetworkSelectionSubgroup * _networkSelectionSubgroup;
    PSUINetworkSettingsSubgroup * _networkSettingsSubgroup;
    PSSpecifier * _parentSpecifier;
    PSUIDevicePasscodeState * _passcodeStatusCache;
    PSUICellularPlanManagerCache * _planManagerCache;
    bool  _popViewControllerOnFinished;
    PSUIRoamingSpecifiersSubgroup * _roamingSpecifiersSubgroup;
    PSSimStatusCache * _simStatusCache;
    PSUISIMSubgroup * _simSubgroup;
}

@property (nonatomic, retain) PSUICoreTelephonyCallCache *callCache;
@property (nonatomic, retain) PSUICallingSubgroup *callingSubgroup;
@property (nonatomic, retain) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache;
@property (nonatomic, retain) PSUICarrierSpaceGroup *carrierSpaceSubgroup;
@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;
@property (nonatomic, retain) PSUIDataModeSubgroup *dataModeSubgroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) PSUIMyNumberSubgroup *myNumberSubgroup;
@property (nonatomic, retain) PSUINetworkSelectionSubgroup *networkSelectionSubgroup;
@property (nonatomic, retain) PSUINetworkSettingsSubgroup *networkSettingsSubgroup;
@property (nonatomic, retain) PSSpecifier *parentSpecifier;
@property (nonatomic, retain) PSUIDevicePasscodeState *passcodeStatusCache;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic) bool popViewControllerOnFinished;
@property (nonatomic, retain) PSUIRoamingSpecifiersSubgroup *roamingSpecifiersSubgroup;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;
@property (nonatomic, retain) PSUISIMSubgroup *simSubgroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callCache;
- (id)callingSubgroup;
- (id)carrierBundleCache;
- (id)carrierSpaceSubgroup;
- (id)cellularPlanManager;
- (id)dataCache;
- (id)dataModeSubgroup;
- (id)getLogger;
- (id)groupSpecifier;
- (id)initWithFactory:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (id)myNumberSubgroup;
- (id)networkSelectionSubgroup;
- (id)networkSettingsSubgroup;
- (id)networkSlicingDetailText:(id)arg1;
- (id)parentSpecifier;
- (id)passcodeStatusCache;
- (id)planManagerCache;
- (bool)planManagerCacheHasMoreThanOnePlanItem;
- (bool)popViewControllerOnFinished;
- (id)roamingSpecifiersSubgroup;
- (void)setCallCache:(id)arg1;
- (void)setCallingSubgroup:(id)arg1;
- (void)setCarrierBundleCache:(id)arg1;
- (void)setCarrierSpaceSubgroup:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setDataModeSubgroup:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setMyNumberSubgroup:(id)arg1;
- (void)setNetworkSelectionSubgroup:(id)arg1;
- (void)setNetworkSettingsSubgroup:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setPasscodeStatusCache:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPopViewControllerOnFinished:(bool)arg1;
- (void)setRoamingSpecifiersSubgroup:(id)arg1;
- (void)setSimStatusCache:(id)arg1;
- (void)setSimSubgroup:(id)arg1;
- (id)simStatusCache;
- (id)simSubgroup;
- (id)specifiers;
- (void)viewWillAppear;

@end