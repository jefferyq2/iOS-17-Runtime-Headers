
@interface MPStoreDownload : NSObject {
    SSDownload * _SSDownload;
    SSPurchase * _SSPurchase;
    SSPurchaseResponse * _SSPurchaseResponse;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _attributes;
    bool  _canceled;
    NSString * _downloadFilePath;
    NSMutableArray * _overridePhaseIdentifiers;
    long long  _type;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) long long bytesDownloaded;
@property (nonatomic, readonly) long long bytesTotal;
@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (nonatomic, readonly) long long downloadIdentifier;
@property (nonatomic, readonly) long long downloadSizeLimit;
@property (nonatomic, readonly) NSError *failureError;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) unsigned long long libraryItemIdentifier;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *phaseIdentifier;
@property (nonatomic, readonly) NSError *purchaseError;
@property (getter=isPurchasing, nonatomic, readonly) bool purchasing;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDictionary *rentalInformation;
@property (getter=isRestore, nonatomic, readonly) bool restore;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, readonly) long long type;

+ (id)_SSPurchaseForType:(long long)arg1 attributes:(id)arg2;
+ (id)storeDownloadForMediaItem:(id)arg1 type:(long long)arg2 attributes:(id)arg3;
+ (id)storeDownloadWithDownloadIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_SSDownload;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (void)_addOverridePhaseIdentifier:(id)arg1;
- (id)_currentOverridePhaseIdentifier;
- (id)_getDownloadFilePath;
- (bool)_isCanceled;
- (void)_removeOverridePhaseIdentifier:(id)arg1;
- (void)_setCanceled:(bool)arg1;
- (void)_setDownloadFilePath:(id)arg1;
- (void)_setSSDownload:(id)arg1;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)assetsForType:(id)arg1;
- (id)attributes;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)description;
- (long long)downloadIdentifier;
- (long long)downloadSizeLimit;
- (id)failureError;
- (id)initWithType:(long long)arg1 attributes:(id)arg2;
- (bool)isCanceled;
- (bool)isFinished;
- (bool)isPaused;
- (bool)isPurchasing;
- (bool)isRestore;
- (unsigned long long)libraryItemIdentifier;
- (double)percentComplete;
- (id)phaseIdentifier;
- (id)purchaseError;
- (long long)reason;
- (id)rentalInformation;
- (void)resetCachedRentalInformation;
- (long long)storeItemIdentifier;
- (long long)type;

@end