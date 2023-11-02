
@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate, HKHealthPrivacyServicePickerController> {
    NSSet * _allSamples;
    <HKHealthPrivacyServicePickerControllerDelegate> * _delegate;
    NSMutableSet * _enabledSamples;
    bool  _hasPendingDocumentFetch;
    HKHealthStore * _healthStore;
    long long  _presentationStyle;
    NSMutableArray * _samplesList;
    NSUUID * _sessionIdentifier;
    bool  _showCheckboxes;
    HKSource * _source;
    HKTitledIconHeaderView * _tableHeaderView;
}

@property (nonatomic, readonly) NSSet *allSamples;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKHealthPrivacyServicePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *enabledSamples;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, copy) NSUUID *sessionIdentifier;
@property (nonatomic, copy) HKSource *source;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_enableDocumentSample:(id)arg1 enabled:(bool)arg2;
- (void)_finishWithError:(id)arg1;
- (bool)_isPrompting;
- (bool)_needsSampleRequestDescription;
- (id)_tableHeaderView;
- (void)_updateForCurrentSizeCategory;
- (id)allSamples;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)arg1;
- (void)configureHeaderView:(id)arg1;
- (id)dataMetadataViewControllerForSample:(id)arg1;
- (id)delegate;
- (id)enabledSamples;
- (id)healthStore;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAuthorizations:(id)arg1;
- (id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushDetailForDocumentSample:(id)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSamples:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end