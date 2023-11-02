
@interface CKDUploadAssetsOperation : CKDDatabaseOperation {
    CKDAssetRequestPlanner * _assetRequestPlanner;
    NSDictionary * _assetUUIDToExpectedProperties;
    NSArray * _assetsToUpload;
    bool  _atomic;
    CKDCancelTokenGroup * _cancelTokens;
    unsigned long long  _maxPackageUploadsPerBatch;
    NSMutableArray * _openedPackages;
    NSMutableArray * _packageManifests;
    NSDictionary * _packageUUIDToExpectedProperties;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldCloneFileInAssetCache;
    bool  _temporary;
    id /* block */  _uploadCompletionBlock;
    id /* block */  _uploadPreparationBlock;
    id /* block */  _uploadProgressBlock;
    NSMapTable * _uploadTasksByPackages;
}

@property (nonatomic, readonly) CKDAssetRequestPlanner *assetRequestPlanner;
@property (nonatomic, retain) NSDictionary *assetUUIDToExpectedProperties;
@property (nonatomic, retain) NSArray *assetsToUpload;
@property (nonatomic) bool atomic;
@property (nonatomic, retain) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageUploadsPerBatch;
@property (nonatomic, retain) NSMutableArray *openedPackages;
@property (nonatomic, retain) NSMutableArray *packageManifests;
@property (nonatomic, retain) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) unsigned long long state;
@property (nonatomic) bool temporary;
@property (nonatomic, copy) id /* block */ uploadCompletionBlock;
@property (nonatomic, copy) id /* block */ uploadPreparationBlock;
@property (nonatomic, copy) id /* block */ uploadProgressBlock;
@property (nonatomic, retain) NSMapTable *uploadTasksByPackages;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)CKStatusReportLogGroups;
- (void)_closeAllPackages;
- (void)_closePackage:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (bool)_didFetchUploadTokensForAssetTokenRequest:(id)arg1 error:(id)arg2 newError:(id*)arg3;
- (void)_didGetChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (void)_didPrepareAssetBatch:(id)arg1 error:(id)arg2;
- (void)_didPutChunkKeysForAssetBatch:(id)arg1 error:(id)arg2;
- (void)_didUploadAsset:(id)arg1 error:(id)arg2;
- (void)_didUploadClonedPackageWithTask:(id)arg1;
- (void)_didUploadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadPackageWithTask:(id)arg1;
- (void)_failAllItemsInAssetBatch:(id)arg1 error:(id)arg2;
- (bool)_fetchConfiguration;
- (bool)_fetchUploadTokens;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (bool)_openPackage:(id)arg1;
- (bool)_planSectionsForPackage:(id)arg1 error:(id*)arg2;
- (bool)_prepareForUpload;
- (void)_removePackageManifests;
- (bool)_upload;
- (void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)assetRequestPlanner;
- (id)assetUUIDToExpectedProperties;
- (id)assetsToUpload;
- (bool)atomic;
- (void)cancel;
- (id)cancelTokens;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (unsigned long long)maxPackageUploadsPerBatch;
- (id)openedPackages;
- (int)operationType;
- (id)packageManifests;
- (id)packageUUIDToExpectedProperties;
- (id)queue;
- (void)setAssetUUIDToExpectedProperties:(id)arg1;
- (void)setAssetsToUpload:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setCancelTokens:(id)arg1;
- (void)setMaxPackageUploadsPerBatch:(unsigned long long)arg1;
- (void)setOpenedPackages:(id)arg1;
- (void)setPackageManifests:(id)arg1;
- (void)setPackageUUIDToExpectedProperties:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setUploadCompletionBlock:(id /* block */)arg1;
- (void)setUploadPreparationBlock:(id /* block */)arg1;
- (void)setUploadProgressBlock:(id /* block */)arg1;
- (void)setUploadTasksByPackages:(id)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)supportsClearAssetEncryption;
- (bool)temporary;
- (id /* block */)uploadCompletionBlock;
- (id /* block */)uploadPreparationBlock;
- (id /* block */)uploadProgressBlock;
- (id)uploadTasksByPackages;

@end