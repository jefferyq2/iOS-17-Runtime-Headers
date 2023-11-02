
@interface HUAvailableRelatedTriggerItemModule : HFItemModule <HFHomeObserver> {
    NSArray * _actionBuilderFactories;
    HUAvailableTriggerItemActivationRequest * _activeRequest;
    HFStaticItem * _addAutomationItem;
    bool  _automationItemIsLoading;
    HUAvailableRelatedTriggerItemProvider * _availableTriggerItemProvider;
    <HUAvailableRelatedTriggerItemModuleContextProviding> * _context;
    <HFItemSectionAccessoryButtonHeaderDelegate> * _editButtonHeaderDelegate;
    bool  _enableNaturalLighting;
    NSArray * _eventOptionsItems;
    HMHome * _home;
    NSSet * _itemProviders;
    HFStaticItem * _naturalLightingItem;
    NSMutableArray * _previouslySortedItems;
    NSArray * _relatedItems;
    NSString * _sectionHeaderEditButtonTitleKey;
    NSArray * _sensorCharacteristics;
    HFStaticItemProvider * _staticItemProvider;
    NSMutableArray * _waitingRequests;
}

@property (nonatomic, retain) NSArray *actionBuilderFactories;
@property (nonatomic, retain) HUAvailableTriggerItemActivationRequest *activeRequest;
@property (nonatomic, retain) HFStaticItem *addAutomationItem;
@property (nonatomic) bool automationItemIsLoading;
@property (nonatomic, retain) HUAvailableRelatedTriggerItemProvider *availableTriggerItemProvider;
@property (nonatomic, readonly) <HUAvailableRelatedTriggerItemModuleContextProviding> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HFItemSectionAccessoryButtonHeaderDelegate> *editButtonHeaderDelegate;
@property (nonatomic) bool enableNaturalLighting;
@property (nonatomic, retain) NSArray *eventOptionsItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFStaticItem *naturalLightingItem;
@property (nonatomic, retain) NSMutableArray *previouslySortedItems;
@property (nonatomic, retain) NSArray *relatedItems;
@property (nonatomic, retain) NSString *sectionHeaderEditButtonTitleKey;
@property (nonatomic, retain) NSArray *sensorCharacteristics;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *waitingRequests;

+ (bool)_itemClassSupportsEvents:(id)arg1;
+ (id)defaultContext;
+ (bool)shouldShowRecommendation:(id)arg1;
+ (id /* block */)sortComparator;

- (void).cxx_destruct;
- (id)_accessoryCategoryUserFrieindlyDescription;
- (id)_activateItem:(id)arg1 active:(bool)arg2;
- (id)_buildItemProviders;
- (bool)_editingAvailableWithDisplayedItems:(id)arg1;
- (void)_finishCommitWithItems:(id)arg1 updatesDelayReason:(id)arg2;
- (void)_performRequest:(id)arg1;
- (void)_updateRelatedItems:(id)arg1;
- (id)actionBuilderFactories;
- (id)activateAllSelectedItems;
- (id)activateItem:(id)arg1 active:(bool)arg2;
- (id)activeRequest;
- (id)addAutomationItem;
- (bool)automationItemIsLoading;
- (id)availableTriggerItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)context;
- (void)didActivateItem:(id)arg1 active:(bool)arg2 error:(id)arg3;
- (id)editButtonHeaderDelegate;
- (bool)enableNaturalLighting;
- (id)eventOptionsItems;
- (id)home;
- (id)initWithItems:(id)arg1 itemUpdater:(id)arg2 home:(id)arg3 context:(id)arg4;
- (id)itemProviders;
- (id)itemsToHideInSet:(id)arg1;
- (id)naturalLightingItem;
- (id)previouslySortedItems;
- (id)progressivelySortItems:(id)arg1;
- (id)relatedItems;
- (bool)relatedItemsCanBeAutomated;
- (id)sectionHeaderEditButtonTitleKey;
- (id)sensorCharacteristics;
- (id)serviceTypes;
- (id)serviceTypesSupportingAutomation;
- (void)setActionBuilderFactories:(id)arg1;
- (void)setActiveRequest:(id)arg1;
- (void)setAddAutomationItem:(id)arg1;
- (void)setAutomationItemIsLoading:(bool)arg1;
- (void)setAvailableTriggerItemProvider:(id)arg1;
- (void)setEditButtonHeaderDelegate:(id)arg1;
- (void)setEnableNaturalLighting:(bool)arg1;
- (void)setEventOptionsItems:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNaturalLightingItem:(id)arg1;
- (void)setPreviouslySortedItems:(id)arg1;
- (void)setRelatedItems:(id)arg1;
- (void)setSectionHeaderEditButtonTitleKey:(id)arg1;
- (void)setSensorCharacteristics:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setWaitingRequests:(id)arg1;
- (bool)shouldHideAutomationsModule;
- (id)staticItemProvider;
- (id)waitingRequests;

@end