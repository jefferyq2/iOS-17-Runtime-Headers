
@interface RMUIConfigurationInterface : NSObject {
    RMUILegacyProfilesViewModelProvider * _legacyProfilesProvider;
    NSString * _mdmProfileIdentifier;
    RMObserverStore * _observerStore;
    RMUIPasscodeViewModelProvider * _passcodeProvider;
    RMUIPluginViewModelProvider * _pluginProvider;
    RMUIPasscodeViewModel * _privPasscodeViewModel;
    NSArray * _privPluginSectionViewModels;
    NSArray * _privPluginViewModels;
    NSArray * _privProfileViewModels;
    ACAccount * _rmAccount;
    long long  _scope;
}

@property (nonatomic, retain) RMUILegacyProfilesViewModelProvider *legacyProfilesProvider;
@property (nonatomic, readonly, copy) NSString *mdmProfileIdentifier;
@property (retain) RMObserverStore *observerStore;
@property (nonatomic, readonly) NSString *passcodeDeclarationsHeading;
@property (nonatomic, retain) RMUIPasscodeViewModelProvider *passcodeProvider;
@property (nonatomic, readonly) RMUIPasscodeViewModel *passcodeViewModel;
@property (nonatomic, readonly) NSString *pluginDeclarationsHeading;
@property (nonatomic, retain) RMUIPluginViewModelProvider *pluginProvider;
@property (nonatomic, readonly) NSArray *pluginSectionViewModels;
@property (nonatomic, readonly) NSArray *pluginViewModels;
@property (nonatomic, retain) RMUIPasscodeViewModel *privPasscodeViewModel;
@property (nonatomic, retain) NSArray *privPluginSectionViewModels;
@property (nonatomic, retain) NSArray *privPluginViewModels;
@property (nonatomic, retain) NSArray *privProfileViewModels;
@property (nonatomic, readonly) NSString *profileDeclarationsHeading;
@property (nonatomic, readonly) NSArray *profileViewModels;
@property (nonatomic, readonly) ACAccount *rmAccount;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly) NSString *scopeHeading;

- (void).cxx_destruct;
- (void)_activateConfiguration:(id)arg1 observerStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_deactivateConfiguration:(id)arg1 observerStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadObserverStoreWithCompletion:(id /* block */)arg1;
- (void)_reloadUIWithCompletion:(id /* block */)arg1;
- (void)_reloadViewModelsWithCompletion:(id /* block */)arg1;
- (long long)_rmManagementScope;
- (long long)_rmStoreScope;
- (id)accountDeclarationsHeading;
- (id)initForTest:(long long)arg1;
- (id)initWithAccount:(id)arg1 scope:(long long)arg2;
- (id)initWithAccount:(id)arg1 scope:(long long)arg2 initialLoad:(bool)arg3;
- (id)initWithMDMProfileIdentifier:(id)arg1 scope:(long long)arg2;
- (id)initWithMDMProfileIdentifier:(id)arg1 scope:(long long)arg2 initialLoad:(bool)arg3;
- (id)initWithScope:(long long)arg1;
- (id)initWithStore:(id)arg1;
- (id)legacyProfilesProvider;
- (id)mdmProfileIdentifier;
- (id)observerStore;
- (id)passcodeDeclarationsHeading;
- (id)passcodeProvider;
- (id)passcodeViewModel;
- (id)pluginDeclarationsHeading;
- (id)pluginProvider;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)privPasscodeViewModel;
- (id)privPluginSectionViewModels;
- (id)privPluginViewModels;
- (id)privProfileViewModels;
- (id)profileDeclarationsHeading;
- (id)profileViewModels;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (void)reloadNotificationPosted:(id)arg1;
- (id)rmAccount;
- (long long)scope;
- (id)scopeHeading;
- (void)setConfigurationActivated:(bool)arg1 forViewModel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLegacyProfilesProvider:(id)arg1;
- (void)setObserverStore:(id)arg1;
- (void)setPasscodeProvider:(id)arg1;
- (void)setPluginProvider:(id)arg1;
- (void)setPrivPasscodeViewModel:(id)arg1;
- (void)setPrivPluginSectionViewModels:(id)arg1;
- (void)setPrivPluginViewModels:(id)arg1;
- (void)setPrivProfileViewModels:(id)arg1;
- (id)viewModels;

@end