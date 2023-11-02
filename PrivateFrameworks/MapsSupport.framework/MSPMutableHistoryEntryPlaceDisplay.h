
@interface MSPMutableHistoryEntryPlaceDisplay : MSPMutableHistoryEntry <MSPHistoryEntryPlaceDisplay>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUUID *supersededSearchStorageIdentifier;
@property (nonatomic, readonly) bool tracksRAPReportingOnly;
@property (nonatomic, readonly, copy) NSDate *usageDate;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)geoMapItem;
- (id)initWithStorage:(id)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setSupersededSearchStorageIdentifier:(id)arg1;
- (id)supersededSearchStorageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end