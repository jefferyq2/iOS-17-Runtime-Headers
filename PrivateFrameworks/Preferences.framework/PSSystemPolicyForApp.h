
@interface PSSystemPolicyForApp : NSObject <BBObserverDelegate> {
    BBObserver * __bbObserver;
    PSAccountEnumerator * _accountEnumerator;
    NSUserDefaults * _appUserDefaults;
    NSString * _bundleIdentifier;
    PSCalendarPolicyController * _calendarPrivacyController;
    PSSpecifier * _cinematicFramingSpecifier;
    PSContactsPolicyController * _contactsPrivacyController;
    NSString * _containerPathForCurrentApp;
    <PSSystemPolicyForAppDelegate> * _delegate;
    bool  _enServiceMatched;
    bool  _forcePolicyOptions;
    NSString * _matchingBundleIdentifier;
    NEConfiguration * _pathControllerConfiguration;
    PSPhotosPolicyController * _photosPrivacyController;
    unsigned long long  _policyOptions;
}

@property (nonatomic, retain) BBObserver *_bbObserver;
@property (nonatomic, retain) NSUserDefaults *appUserDefaults;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) PSSpecifier *cinematicFramingSpecifier;
@property (nonatomic, retain) NSString *containerPathForCurrentApp;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSSystemPolicyForAppDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enServiceMatched;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *matchingBundleIdentifier;
@property (readonly) Class superclass;

+ (id)_bbObserverQueue;
+ (bool)isServiceRestricted:(id)arg1;

- (void).cxx_destruct;
- (bool)_accountModificationDisabledByRestrictions;
- (id)_bbObserver;
- (long long)_getAuthorizationRecordsStatus;
- (void)_handleAddAccountButtonAction:(id)arg1;
- (bool)_isAppClip;
- (bool)_isBackgroundAppRefreshAllowed;
- (bool)_isLocationServicesRestricted;
- (bool)_isWirelessDataRestricted;
- (bool)_supportsBackgroundAppRefresh;
- (bool)_supportsLiveActivities;
- (bool)_supportsLiveActivitiesFrequentUpdates;
- (id)accountsSpecifier;
- (id)appUserDefaults;
- (id)assistantAndSearchSpecifiers;
- (id)authLevelStringForStatus:(unsigned long long)arg1;
- (id)backgroundAppRefreshSpecifier;
- (id)bundleIdentifier;
- (id)calendarSpecifiers;
- (id)cinematicFramingSpecifier;
- (id)contactsServicesSpecifier;
- (id)containerPathForCurrentApp;
- (id)dataUsageWorkspaceInfo;
- (id)defaultAppSpecifierWithAppRecordsMatchingBlock:(id /* block */)arg1 getter:(SEL)arg2 setter:(SEL)arg3 title:(id)arg4;
- (id)defaultBrowser:(id)arg1;
- (id)defaultBrowserSpecifier;
- (id)defaultMailApp:(id)arg1;
- (id)defaultMailAppSpecifier;
- (id)delegate;
- (id)documentSource:(id)arg1;
- (id)documentsSpecifier;
- (bool)enServiceMatched;
- (id)exposureSpecifiersWithTCCServiceLookup:(id)arg1;
- (id)familyControlsSpecifier;
- (bool)getMulticastAllowed:(bool*)arg1;
- (id)getNudityDetectionEnabledValue;
- (void)headerLinkWasTapped;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (bool)isCellularBundleID:(id)arg1;
- (id)isFamilyControlsEnabled:(id)arg1;
- (id)isLiveActivitiesEnabled:(id)arg1;
- (id)isLocalNetworkEnabled:(id)arg1;
- (id)isTapToPayAlwaysPlaySoundEnabled:(id)arg1;
- (id)isTapToPayScreenLockEnabled:(id)arg1;
- (id)liveActivitiesSpecifier;
- (void)loadNetworkConfigurationsForceRefresh:(bool)arg1;
- (id)locationServicesSpecifier;
- (id)locationStatus:(id)arg1;
- (id)matchingBundleIdentifier;
- (void)monitoredStoreDidChange:(id)arg1;
- (id)networkServicesSpecifier;
- (id)notificationSpecifier;
- (id)nudityDetectionSpeicier;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (id)pasteboardAccessForSpecifier:(id)arg1;
- (id)pasteboardSpecifier;
- (id)pathRuleForBundleID:(id)arg1 create:(bool)arg2;
- (id)photosServicesSpecifier;
- (id)preferredLanguage:(id)arg1;
- (id)preferredLanguageSpecifier;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)privacySpecifierForService:(struct __CFString { }*)arg1 tccServiceLookup:(id)arg2 tccServiceOverrides:(id)arg3;
- (id)privacySpecifiersWithTCCServiceLookup:(id)arg1 tccServiceOverrides:(id)arg2;
- (void)saveNetworkConfiguration;
- (void)setAppUserDefaults:(id)arg1;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCinematicFramingSpecifier:(id)arg1;
- (void)setContainerPathForCurrentApp:(id)arg1;
- (void)setDefaultBrowser:(id)arg1 specifier:(id)arg2;
- (void)setDefaultMailApp:(id)arg1 specifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnServiceMatched:(bool)arg1;
- (void)setFamilyControlsEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setLiveActivitiesEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2;
- (void)setMatchingBundleIdentifier:(id)arg1;
- (void)setPasteboardAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)setTapToPayAlwaysPlaySoundEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTapToPayScreenLockEnabled:(id)arg1 specifier:(id)arg2;
- (void)set_bbObserver:(id)arg1;
- (void)setupNetworkConfiguration;
- (bool)shouldShowPasteboardSpecifier;
- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(bool)arg2;
- (id)tapToPayAlwaysPlaySoundSpecifiers;
- (id)tapToPayScreenLockSpecifiers;
- (id)trackingSpecifiersWithTCCServiceLookup:(id)arg1 tccServiceOverrides:(id)arg2;
- (id)wirelessDataSpecifierWithAppName:(id)arg1;

@end