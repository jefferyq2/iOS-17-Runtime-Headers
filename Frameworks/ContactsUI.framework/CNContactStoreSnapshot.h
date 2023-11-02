
@interface CNContactStoreSnapshot : NSObject {
    NSMutableArray * _batchContactIdentifiers;
    NSObject<OS_dispatch_semaphore> * _cacheAccessSemaphore;
    NSMutableDictionary * _contactMatchInfos;
    NSMapTable * _contactsCache;
    unsigned long long  _contactsCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentlyLoadingBackgroundRange;
    CNContactStoreDataSource * _dataSource;
    NSMutableAttributedString * _emptyExcerptInstanceMarker;
    CNContactStoreFilter * _filter;
    NSMapTable * _identifiersToIndexPath;
    NSArray * _indexSections;
    unsigned long long  _lastRequestedIndex;
    CNManagedConfiguration * _managedConfiguration;
    NSArray * _sections;
    NSPointerArray * _summarizationFutures;
    CNContactDataSourceLIFOScheduler * _summarizationQueue;
    CNContactMatchSummarizer * _summarizer;
}

@property (nonatomic, readonly) NSMutableArray *batchContactIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic) CNContactStoreDataSource *dataSource;
@property (nonatomic, retain) CNContactStoreFilter *filter;
@property (nonatomic, readonly) NSMapTable *identifiersToIndexPath;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSPointerArray *summarizationFutures;
@property (nonatomic, readonly) CNContactDataSourceLIFOScheduler *summarizationQueue;

- (void).cxx_destruct;
- (void)_generateExcerptsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_keysToFetch;
- (void)_loadAllContacts;
- (void)_loadContactsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inBackground:(bool)arg2;
- (id)batchContactIdentifiers;
- (id)contactMatchInfos;
- (id)contacts;
- (unsigned long long)countOf_contacts;
- (id)dataSource;
- (void)dealloc;
- (id)filter;
- (id)identifiersToIndexPath;
- (id)indexSections;
- (id)init;
- (id)managedConfiguration;
- (id)objectIn_contactsAtIndex:(unsigned long long)arg1;
- (void)prepareAllContacts;
- (void)prepareEnoughContacts;
- (id)sections;
- (void)setDataSource:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (id)summarizationFutures;
- (id)summarizationQueue;

@end