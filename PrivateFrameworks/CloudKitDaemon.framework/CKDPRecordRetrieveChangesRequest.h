
@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {
    CKDPAssetsToDownload * _assetsToDownload;
    struct { 
        unsigned int maxChanges : 1; 
        unsigned int requestedChangeTypes : 1; 
        unsigned int ignoreCallingDeviceChanges : 1; 
        unsigned int includeMergeableDeltas : 1; 
        unsigned int newestFirst : 1; 
    }  _has;
    bool  _ignoreCallingDeviceChanges;
    bool  _includeMergeableDeltas;
    unsigned int  _maxChanges;
    bool  _newestFirst;
    int  _requestedChangeTypes;
    CKDPRequestedFields * _requestedFields;
    NSData * _syncContinuationToken;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, readonly) bool hasAssetsToDownload;
@property (nonatomic) bool hasIgnoreCallingDeviceChanges;
@property (nonatomic) bool hasIncludeMergeableDeltas;
@property (nonatomic) bool hasMaxChanges;
@property (nonatomic) bool hasNewestFirst;
@property (nonatomic) bool hasRequestedChangeTypes;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic, readonly) bool hasSyncContinuationToken;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) bool ignoreCallingDeviceChanges;
@property (nonatomic) bool includeMergeableDeltas;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) bool newestFirst;
@property (nonatomic) int requestedChangeTypes;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic, retain) NSData *syncContinuationToken;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRequestedChangeTypes:(id)arg1;
- (id)assetsToDownload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetsToDownload;
- (bool)hasIgnoreCallingDeviceChanges;
- (bool)hasIncludeMergeableDeltas;
- (bool)hasMaxChanges;
- (bool)hasNewestFirst;
- (bool)hasRequestedChangeTypes;
- (bool)hasRequestedFields;
- (bool)hasSyncContinuationToken;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)ignoreCallingDeviceChanges;
- (bool)includeMergeableDeltas;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (bool)newestFirst;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (int)requestedChangeTypes;
- (id)requestedChangeTypesAsString:(int)arg1;
- (id)requestedFields;
- (Class)responseClass;
- (void)setAssetsToDownload:(id)arg1;
- (void)setHasIgnoreCallingDeviceChanges:(bool)arg1;
- (void)setHasIncludeMergeableDeltas:(bool)arg1;
- (void)setHasMaxChanges:(bool)arg1;
- (void)setHasNewestFirst:(bool)arg1;
- (void)setHasRequestedChangeTypes:(bool)arg1;
- (void)setIgnoreCallingDeviceChanges:(bool)arg1;
- (void)setIncludeMergeableDeltas:(bool)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setNewestFirst:(bool)arg1;
- (void)setRequestedChangeTypes:(int)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end