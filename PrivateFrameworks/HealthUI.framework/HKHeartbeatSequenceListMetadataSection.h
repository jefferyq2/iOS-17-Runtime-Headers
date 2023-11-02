
@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection {
    <HKHeartbeatSequenceListMetadataSectionDelegate> * _delegate;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    NSArray * _sequencesSamples;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic) <HKHeartbeatSequenceListMetadataSectionDelegate> *delegate;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSArray *sequencesSamples;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)_startAssociatedSequenceQueryForEvent:(id)arg1;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)delegate;
- (id)displayTypeController;
- (id)healthStore;
- (id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (id)sequencesSamples;
- (void)setDelegate:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setSequencesSamples:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)unitController;

@end