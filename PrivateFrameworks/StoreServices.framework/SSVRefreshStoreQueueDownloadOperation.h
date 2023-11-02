
@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {
    NSNumber * _accountID;
    NSString * _downloadTransactionID;
    NSString * _downloadTrasactionID;
}

@property (readonly) NSNumber *accountID;
@property (readonly) NSString *downloadTransactionID;

- (void).cxx_destruct;
- (bool)_refreshDownloadWithTransactionID:(id)arg1 accountID:(id)arg2 bagKey:(id)arg3 error:(id*)arg4;
- (id)accountID;
- (id)downloadTransactionID;
- (id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2;
- (id)isDownloadTransactionID;
- (void)main;

@end