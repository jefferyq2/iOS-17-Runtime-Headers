
@interface SUSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, SUSUISoftwareUpdateManagerDelegate, SUSUISoftwareUpdateSlowRollControllerDelegate, SUSUISoftwareUpdateTitleCellDelegate, TPKContentControllerDelegate, UITableViewDelegate> {
    PSTableCell * _alternateUpdateCell;
    PSTableCell * _automaticUpdatesCell;
    PSTableCell * _betaUpdatesCell;
    SUSUISoftwareUpdateBetaUpdatesController * _betaUpdatesPane;
    bool  _clearingSpace;
    SUSSoftwareUpdateComingSoonTipCell * _comingSoonCell;
    SUSSoftwareUpdateProactiveSuggestionCell * _deferredUpdateCell;
    id /* block */  _deviceLAContextCompletion;
    NSString * _devicePasscode;
    id /* block */  _devicePasscodeCompletion;
    LAContext * _deviceSecret;
    NSObject<OS_dispatch_queue> * _handleURLQueue;
    bool  _inUserInteraction;
    id /* block */  _legacyDevicePasscodeCompletion;
    SUSUISoftwareUpdateManager * _manager;
    bool  _nonPromotedUpdate;
    PSTableCell * _nonPromotedUpdateCell;
    SUSSoftwareUpdateProactiveSuggestionCell * _proactiveSuggestionCell;
    UIRefreshControl * _refreshControl;
    SUSSoftwareUpdateScanCell * _scanCell;
    NSError * _suError;
    NSUserDefaults * _suUserDefaults;
    TPKContent * _tipKitContent;
    TPKContentController * _tipKitController;
    SUSSoftwareUpdateTitleCell * _titleCell;
    SUSSoftwareUpdateUpdateOptionsCell * _updateOptionsCell;
    UsageStorageController * _usageStorageController;
}

@property (readonly, retain) SUDescriptor *alternateUpdateDescriptor;
@property (nonatomic, readonly) bool clearingSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceLAContextCompletion;
@property (nonatomic, copy) id /* block */ devicePasscodeCompletion;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ legacyDevicePasscodeCompletion;
@property (nonatomic) bool nonPromotedUpdate;
@property (retain) NSError *suError;
@property (readonly) Class superclass;
@property (readonly, retain) SUDescriptor *updateDescriptor;

+ (unsigned long long)updateActionForString:(id)arg1;
+ (id)visibleGroupSpecifiers;
+ (double)windowSafeAreasSize;

- (void).cxx_destruct;
- (id)_alternateUpdateButtonSpecifierForState:(int)arg1;
- (id)_alternateUpdateGroupSpecifierForState:(int)arg1;
- (id)_automaticUpdateButtonSpecifierForState:(int)arg1;
- (id)_automaticUpdateGroupSpecifierForState:(int)arg1;
- (id)_betaUpdatesButtonSpecifierForState:(int)arg1;
- (id)_createGroupIndices:(id)arg1;
- (id)_deferredUpdateCellSpecifierForState:(int)arg1;
- (id)_deferredUpdateGroupSpecifierForState:(int)arg1;
- (bool)_errorIsInsufficientSpace:(id)arg1;
- (id)_installButtonButtonSpecifier:(int)arg1;
- (id)_nonPromotedPrimaryUpdateButtonForState:(int)arg1;
- (id)_nonPromotedPrimaryUpdateGroupForState:(int)arg1;
- (id)_nonPromotedPrimaryUpdateHeaderGroupForState:(int)arg1;
- (id)_proactiveSuggestionGroupSpecifierForState:(int)arg1;
- (id)_scanFooterGroupSpecifierForState:(int)arg1;
- (id)_scanHeaderGroupSpecifierForState:(int)arg1;
- (id)_scanStatusCellSpecifierForState:(int)arg1;
- (id)_scanStatusGroupForState:(int)arg1;
- (id)_setInstallButtonButtonSpecifierState:(id)arg1;
- (void)_setTitleCellSpecifierState:(id)arg1;
- (bool)_shouldHideTonightButton;
- (id)_tipKitComingSoonCellSpecifierForState:(int)arg1;
- (id)_tipKitComingSoonGroupSpecifierForState:(int)arg1;
- (id)_titleCellSpecifierForState:(int)arg1;
- (id)_titleGroupSpecifierForState:(int)arg1;
- (id)_updateProactiveSuggestionPrimaryButtonSpecifier:(int)arg1;
- (id)_updateProactiveSuggestionSecondaryButtonSpecifier:(int)arg1;
- (id)_updateProactiveSuggestionSpecifier:(int)arg1;
- (id)alsoAvailableGroupHeaderString;
- (id)alternateUpdateButtonString;
- (id)alternateUpdateDescriptor;
- (id)alternateUpdateFooterString;
- (id)alternateUpdateSubTextString;
- (id)alternateUpdateVersionString;
- (unsigned long long)alternateUpgradeType;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsOpenStorageTappedString;
- (bool)autoInstallArmed;
- (void)autoInstallCancel:(id)arg1;
- (void)autoInstallCancelPrompt:(id)arg1;
- (id)autoUpdateScheduledString;
- (id)autoinstallEnabled;
- (id)automaticDownloadStatus;
- (id)automaticInstallSystemDataFilesStatus;
- (id)automaticUpdateStatus;
- (id)availableBetaPrograms;
- (id)betaUpdatesAppleID;
- (bool)betaUpdatesHasDeviceManagementRestriction;
- (void)clearInstallButton:(id)arg1;
- (void)clearNonPromotedPrimaryUpdateGroup:(id)arg1;
- (void)clearNonPromotedPrimaryUpdateHeaderGroup:(id)arg1;
- (bool)clearingSpace;
- (bool)clientIsSUSettings;
- (void)configureScanCell:(id)arg1;
- (void)contentController:(id)arg1 actionTapped:(id)arg2;
- (id)contentController:(id)arg1 content:(id)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(bool)arg3;
- (void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(bool)arg3;
- (void)contentController:(id)arg1 eventOccurred:(long long)arg2 content:(id)arg3 context:(id)arg4;
- (int)currentState;
- (bool)currentlyPerformsUpdateRefresh;
- (id)customCellsMapping;
- (void)dealloc;
- (void)detailedReleaseNotesDonePressed:(id)arg1;
- (id /* block */)deviceLAContextCompletion;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1 forUpdate:(id)arg2;
- (id /* block */)devicePasscodeCompletion;
- (void)didAcceptEnteredPIN:(id)arg1;
- (bool)didCompleteBetaProgramScan;
- (int)displayStyle;
- (void)downloadAndInstall:(id)arg1;
- (void)downloadAndInstallFinishedWithResult:(bool)arg1 andError:(id)arg2 forInstallType:(unsigned long long)arg3;
- (void)downloadAndInstallTonight:(id)arg1;
- (bool)downloadDescriptorPane;
- (void)downloadOnly:(id)arg1;
- (void)downloadingButtonForSpecifier:(id)arg1;
- (id)enrolledBetaProgram;
- (void)fixCustomCellSpecifiers;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasAlternateUpdate;
- (id)init;
- (void)initUI;
- (void)install:(id)arg1;
- (id)installLaterTappedString;
- (id)installNowTappedString;
- (id)installedOSVersionString;
- (id)isBetaUpdatesEnabled;
- (id)learnMoreTappedString;
- (id /* block */)legacyDevicePasscodeCompletion;
- (void)loadView;
- (id)majorOSVersionString;
- (id)majorOSVersionStringForBuildVersion:(id)arg1;
- (id)manager;
- (void)manager:(id)arg1 autoUpdateScheduledStatusChanged:(bool)arg2;
- (void)manager:(id)arg1 clearingSpaceForDownload:(bool)arg2;
- (void)manager:(id)arg1 didReceiveBetaPrograms:(id)arg2;
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3;
- (void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
- (void)manager:(id)arg1 inUserInteraction:(id /* block */)arg2;
- (void)manager:(id)arg1 needsLayoutSubviewsForState:(int)arg2;
- (void)manager:(id)arg1 promptForDeviceLAContextWithDescriptorCompletion:(id /* block */)arg2;
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(id /* block */)arg2;
- (void)manager:(id)arg1 promptForDevicePasscodeWithDescriptorCompletion:(id /* block */)arg2;
- (void)manager:(id)arg1 rollingBackStateChanged:(bool)arg2 rollback:(id)arg3;
- (void)manager:(id)arg1 scanFailedWithError:(id)arg2;
- (void)manager:(id)arg1 scanFoundUpdates:(id)arg2 error:(id)arg3;
- (void)managerDidFinishRescan:(id)arg1;
- (id)nonPromotedPreferredUpdateButtonString;
- (bool)nonPromotedUpdate;
- (void)openStorage;
- (id)paneTitle;
- (void)performDeepLinkAction:(unsigned long long)arg1;
- (void)performDownloadAndInstall:(unsigned long long)arg1;
- (void)performUpdateRescan:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)preferredUpdateVersionString;
- (unsigned long long)preferredUpgradeType;
- (void)presentConfimationSpecifier:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)previousUserSpecifiedAutomaticUpdateStatus;
- (id)previousUserSpecifiedSecurityResponseStatus;
- (unsigned long long)proactiveSuggestionTypeForState:(int)arg1;
- (void)promptForPasscode:(bool)arg1;
- (void)readyToInstall;
- (void)readyToUpgradeToUserInitiatedDownload;
- (void)recordAnalyticsEvent:(id)arg1;
- (void)refreshBetaUpdatesButton;
- (void)refreshInstallButton;
- (void)refreshPane;
- (void)refreshupdateAutoUpdateButton;
- (void)registerForFontChanges;
- (void)reloadCustomCells;
- (void)reloadScanSpacerCells:(id*)arg1;
- (void)reloadSpecifiers:(id)arg1 animated:(bool)arg2;
- (void)reloadUsingNewSpecifiers:(id)arg1;
- (void)scanForBetaPrograms;
- (id)securityResponseStatus;
- (id)selectSpecifier:(id)arg1;
- (void)setAutomaticDownloadFromUI:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticInstallSystemDataFilesFromUI:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticUpdatesFromUI:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticUpdatesFromUI:(id)arg1 userSpecified:(bool)arg2 forSpecifier:(id)arg3;
- (void)setBetaProgramFromUI:(id)arg1 forSpecifier:(id)arg2;
- (void)setDeviceLAContextCompletion:(id /* block */)arg1;
- (void)setDevicePasscodeCompletion:(id /* block */)arg1;
- (void)setInstallButtonDeleted:(id)arg1;
- (void)setInstallButtonDownloadAndInstall:(id)arg1;
- (void)setInstallButtonDownloadAndInstall:(id)arg1 shouldRemove:(bool*)arg2;
- (void)setInstallButtonDownloading:(id)arg1 shouldRemove:(bool*)arg2;
- (void)setInstallButtonInstallNow:(id)arg1;
- (void)setInstallButtonInstalled:(id)arg1;
- (void)setInstallButtonInstalledForSpecifier:(id)arg1;
- (void)setInstallButtonInstalling:(id)arg1;
- (void)setInstallButtonInstallingForSpecifier:(id)arg1;
- (void)setInstallButtonPaused:(id)arg1;
- (void)setInstallButtonReadyToInstall:(id)arg1;
- (void)setInstallButtonStalled:(id)arg1 shouldRemove:(bool*)arg2;
- (void)setLegacyDevicePasscodeCompletion:(id /* block */)arg1;
- (void)setManager:(id)arg1;
- (void)setNonPromotedUpdate:(bool)arg1;
- (void)setSecurityResponseFromUI:(id)arg1 forSpecifier:(id)arg2;
- (void)setSecurityResponseFromUI:(id)arg1 userSpecified:(bool)arg2 forSpecifier:(id)arg3;
- (void)setSuError:(id)arg1;
- (void)setTermsLoading:(long long)arg1;
- (void)setupInstallButton:(id)arg1 shouldRemove:(bool*)arg2;
- (void)setupTipKit;
- (bool)shouldShowAlternateUpdateButtonForState:(int)arg1;
- (bool)shouldShowAlternateUpdateGroupForState:(int)arg1;
- (bool)shouldShowDeferredUpdateGroupForState:(int)arg1;
- (bool)shouldShowEnforcedUpdateForState:(int)arg1;
- (bool)shouldShowNonPromotedButtonForState:(int)arg1;
- (bool)shouldShowNonPromotedGroupForState:(int)arg1;
- (bool)shouldShowProactiveSuggestionsForState:(int)arg1;
- (bool)shouldShowProactiveSuggestionsPrimaryButtonForState:(int)arg1;
- (bool)shouldShowProactiveSuggestionsSecondaryButtonForState:(int)arg1;
- (bool)shouldShowScanGroupForState:(int)arg1;
- (bool)shouldShowScanStatusCellForState:(int)arg1;
- (bool)shouldShowTitleCellForState:(int)arg1;
- (bool)shouldShowTitleGroupForState:(int)arg1;
- (bool)shouldShowUpdateOptionsCellForState:(int)arg1;
- (void)showAlsoAvailaibleSUPane;
- (void)softwareUpdateSlowRollControllerDidDismissed:(id)arg1;
- (bool)specifier:(id)arg1 isEqualToSpecifier:(id)arg2;
- (bool)specifierArrayValue:(id)arg1 IsEqualToSpecifierArrayValue:(id)arg2;
- (bool)specifierClassValue:(Class)arg1 IsEqualToSpecifierClassValue:(Class)arg2;
- (bool)specifierDictionaryValue:(id)arg1 IsEqualToSpecifierDictionaryValue:(id)arg2;
- (id)specifierForSection:(long long)arg1;
- (bool)specifierIDValue:(id)arg1 IsEqualToSpecifierIDValue:(id)arg2;
- (bool)specifierIntValue:(long long)arg1 IsEqualToSpecifierIntValue:(long long)arg2;
- (bool)specifierSelectorValue:(SEL)arg1 IsEqualToSpecifierSelectorValue:(SEL)arg2;
- (bool)specifierStringValue:(id)arg1 IsEqualToSpecifierStringValue:(id)arg2;
- (id)specifierWithID:(id)arg1;
- (id)statusString;
- (id)suError;
- (void)submitAnalyticsEvent:(id)arg1;
- (bool)supportsPullToRefresh;
- (id)tableCellImageForImage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)timeRemainingForProgress:(id)arg1 isValid:(bool*)arg2;
- (id)timeRemainingStringForProgress:(id)arg1;
- (void)titleCell:(id)arg1 learnMoreButtonTapped:(id)arg2;
- (void)unenrollFromBetaProgramsWithCompletion:(id /* block */)arg1;
- (id)updateDescriptor;
- (bool)updateReadyToDownload;
- (void)updateState;
- (void)updateTableFromState:(int)arg1;
- (id)updateVersionString:(id)arg1;
- (id)updatedSpecifiersArray;
- (void)upgradeToUserInitiated:(id)arg1;
- (void)upgradeToUserInitiatedDownloadFinishedWithResult:(bool)arg1 andError:(id)arg2;
- (unsigned long long)upgradeType;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)waitingOnSUAssetDownload:(id)arg1;
- (void)willEnterForeground;

@end