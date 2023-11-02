
@interface _BlastDoorLPiTunesMediaPlaylistMetadata : _BlastDoorLPSpecializationMetadata {
    _BlastDoorLPImage * _artwork;
    _BlastDoorLPArtworkMetadata * _artworkMetadata;
    NSString * _curator;
    NSURL * _curatorProfileURL;
    NSString * _name;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) _BlastDoorLPImage *artwork;
@property (nonatomic, copy) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (nonatomic, copy) NSString *curator;
@property (nonatomic, copy) NSURL *curatorProfileURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)artwork;
- (id)artworkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curator;
- (id)curatorProfileURL;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setArtwork:(id)arg1;
- (void)setArtworkMetadata:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setCuratorProfileURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end