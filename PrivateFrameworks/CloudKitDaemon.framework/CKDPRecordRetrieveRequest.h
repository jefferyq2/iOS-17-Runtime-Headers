
@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {
    CKDPAssetsToDownload * _assetsToDownload;
    NSString * _clientVersionETag;
    CKDPRecordRetrieveRequestRetrieveAssetURL * _getAssetURL;
    struct { 
        unsigned int shouldFailBatch : 1; 
    }  _has;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRequestedFields * _requestedFields;
    bool  _shouldFailBatch;
    NSString * _versionETag;
}

@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, retain) NSString *clientVersionETag;
@property (nonatomic, retain) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL;
@property (nonatomic, readonly) bool hasAssetsToDownload;
@property (nonatomic, readonly) bool hasClientVersionETag;
@property (nonatomic, readonly) bool hasGetAssetURL;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic) bool hasShouldFailBatch;
@property (nonatomic, readonly) bool hasVersionETag;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic) bool shouldFailBatch;
@property (nonatomic, retain) NSString *versionETag;

+ (id)options;

- (void).cxx_destruct;
- (id)assetsToDownload;
- (id)clientVersionETag;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getAssetURL;
- (bool)hasAssetsToDownload;
- (bool)hasClientVersionETag;
- (bool)hasGetAssetURL;
- (bool)hasRecordIdentifier;
- (bool)hasRequestedFields;
- (bool)hasShouldFailBatch;
- (bool)hasVersionETag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setAssetsToDownload:(id)arg1;
- (void)setClientVersionETag:(id)arg1;
- (void)setGetAssetURL:(id)arg1;
- (void)setHasShouldFailBatch:(bool)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setShouldFailBatch:(bool)arg1;
- (void)setVersionETag:(id)arg1;
- (bool)shouldFailBatch;
- (id)versionETag;
- (void)writeTo:(id)arg1;

@end