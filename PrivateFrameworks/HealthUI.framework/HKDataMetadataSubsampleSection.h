
@interface HKDataMetadataSubsampleSection : HKDataMetadataSection {
    NSMutableDictionary * _aggregationValue;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    HKSample * _sample;
    NSArray * _subSampleTypes;
    <HKDataMetadataSubsampleDelegate> * _subsampleDelegate;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) NSMutableDictionary *aggregationValue;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) NSArray *subSampleTypes;
@property (nonatomic, readonly) <HKDataMetadataSubsampleDelegate> *subsampleDelegate;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2;
- (id)_mergeTypesForFixedValues:(id)arg1 subSampleTypes:(id)arg2;
- (id)_subSampleAggregatePredicate:(id)arg1;
- (void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (void)_submitMaximumValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (void)_submitRangeValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (void)_submitSingleValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (void)_submitSubSampleAggregateQueriesWithCompletion:(id /* block */)arg1;
- (void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(id /* block */)arg2;
- (id)_trimAndSortSampleTypes:(id)arg1;
- (void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(id /* block */)arg3;
- (id)aggregationValue;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)displayTypeController;
- (id)healthStore;
- (id)initWithSample:(id)arg1 subSampleTypes:(id)arg2 healthStore:(id)arg3 displayTypeController:(id)arg4 unitController:(id)arg5 subsampleDelegate:(id)arg6;
- (unsigned long long)numberOfRowsInSection;
- (id)sample;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setAggregationValue:(id)arg1;
- (id)subSampleTypes;
- (id)subsampleDelegate;
- (id)unitController;

@end