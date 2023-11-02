
@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {
    id /* block */  _didFinishDownloadHandler;
    id /* block */  _didFinishPurchaseHandler;
    MPStoreDownload * _download;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinishDownloadHandler;
@property (nonatomic, copy) id /* block */ didFinishPurchaseHandler;
@property (nonatomic, readonly) MPStoreDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)didFinishDownloadHandler;
- (id /* block */)didFinishPurchaseHandler;
- (id)download;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;
- (void)setDidFinishDownloadHandler:(id /* block */)arg1;
- (void)setDidFinishPurchaseHandler:(id /* block */)arg1;

@end