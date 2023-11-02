
@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableArray * _completions;
    bool  _didCompleteLoad;
    bool  _didInitiateLoad;
    NSArray * _fetchResults;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PXPlacesStore * _store;
}

@property (nonatomic, retain) NSMutableArray *completions;
@property (readonly) <PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCompleteLoad;
@property (nonatomic) bool didInitiateLoad;
@property (nonatomic, retain) NSArray *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) PXPlacesStore *store;
@property (readonly) Class superclass;

+ (id)_assetsImportQueue;

- (void).cxx_destruct;
- (void)_addItems:(id)arg1 intoStore:(id)arg2;
- (void)_handleAssetsImport;
- (id)completions;
- (id)dataSource;
- (void)dealloc;
- (bool)didCompleteLoad;
- (bool)didInitiateLoad;
- (id)fetchResults;
- (id)initWithFetchResults:(id)arg1;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (id)serialQueue;
- (void)setCompletions:(id)arg1;
- (void)setDidCompleteLoad:(bool)arg1;
- (void)setDidInitiateLoad:(bool)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end