
@interface HFTriggerActionsSetsUISummary : NSObject {
    NSString * _firstSceneName;
    NSString * _firstServiceName;
    NSMutableDictionary * _iconCounter;
    NSMutableArray * _iconDescriptors;
    NSMutableArray * _icons;
    NSString * _mediaAccessoryName;
    bool  _needsIconSort;
    unsigned long long  _numberOfMediaAccessories;
    unsigned long long  _numberOfScenes;
    unsigned long long  _numberOfStandaloneServices;
    NSString * _summaryDescription;
    NSArray * _summaryDescriptors;
    unsigned long long  _totalStandaloneAndMediaAccessoriesCount;
    NSString * _uniqueServiceGroupName;
}

@property (nonatomic, retain) NSString *firstSceneName;
@property (nonatomic, retain) NSString *firstServiceName;
@property (nonatomic, readonly) bool hasUniqueServiceGroup;
@property (nonatomic, retain) NSMutableDictionary *iconCounter;
@property (nonatomic, retain) NSMutableArray *iconDescriptors;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, retain) NSString *mediaAccessoryName;
@property (nonatomic) bool needsIconSort;
@property (nonatomic, readonly) unsigned long long numberOfIcons;
@property (nonatomic) unsigned long long numberOfMediaAccessories;
@property (nonatomic) unsigned long long numberOfScenes;
@property (nonatomic) unsigned long long numberOfStandaloneServices;
@property (nonatomic, readonly) NSString *summaryDescription;
@property (nonatomic, readonly) NSArray *summaryDescriptors;
@property (nonatomic) unsigned long long totalStandaloneAndMediaAccessoriesCount;
@property (nonatomic, retain) NSString *uniqueServiceGroupName;

- (void).cxx_destruct;
- (id)_descriptionForZeroAccessories;
- (id)_descriptionForZeroScenes;
- (void)_incrementIconCounter:(id)arg1;
- (void)_sortIconDescriptors;
- (void)addIconDescriptor:(id)arg1;
- (void)addMediaAccessoryNamed:(id)arg1;
- (void)addSceneNamed:(id)arg1;
- (void)addServiceNamed:(id)arg1;
- (id)firstSceneName;
- (id)firstServiceName;
- (bool)hasUniqueServiceGroup;
- (id)iconCounter;
- (id)iconDescriptors;
- (id)icons;
- (id)init;
- (id)initWithSummaryText:(id)arg1 summaryIconDescriptors:(id)arg2;
- (id)initWithSummaryText:(id)arg1 summaryIconNames:(id)arg2;
- (id)mediaAccessoryName;
- (bool)needsIconSort;
- (unsigned long long)numberOfIcons;
- (unsigned long long)numberOfMediaAccessories;
- (unsigned long long)numberOfScenes;
- (unsigned long long)numberOfStandaloneServices;
- (void)setFirstSceneName:(id)arg1;
- (void)setFirstServiceName:(id)arg1;
- (void)setIconCounter:(id)arg1;
- (void)setIconDescriptors:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setMediaAccessoryName:(id)arg1;
- (void)setNeedsIconSort:(bool)arg1;
- (void)setNumberOfMediaAccessories:(unsigned long long)arg1;
- (void)setNumberOfScenes:(unsigned long long)arg1;
- (void)setNumberOfStandaloneServices:(unsigned long long)arg1;
- (void)setTotalStandaloneAndMediaAccessoriesCount:(unsigned long long)arg1;
- (void)setUniqueServiceGroupName:(id)arg1;
- (id)summaryDescription;
- (id)summaryDescriptors;
- (id)summaryIconDescriptors;
- (id)summaryIcons;
- (id)summaryText;
- (id)summaryText:(bool)arg1;
- (unsigned long long)totalStandaloneAndMediaAccessoriesCount;
- (id)uniqueServiceGroupName;

@end