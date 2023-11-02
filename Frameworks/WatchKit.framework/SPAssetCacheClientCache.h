
@interface SPAssetCacheClientCache : NSObject {
    NSMutableDictionary * _assets;
    unsigned long long  _cacheType;
    NSString * _gizmoCacheIdentifier;
    NSMutableArray * _keys;
    long long  _size;
}

@property (nonatomic, retain) NSMutableDictionary *assets;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic, retain) NSString *gizmoCacheIdentifier;
@property (nonatomic, retain) NSMutableArray *keys;
@property (nonatomic) long long size;

- (void).cxx_destruct;
- (bool)addAsset:(id)arg1 withName:(id)arg2 sendImage:(bool)arg3;
- (void)addedAssetWithName:(id)arg1;
- (id)assets;
- (id)cacheDirectory;
- (unsigned long long)cacheType;
- (id)cachedImages;
- (bool)checkAvailableSpaceForAssetWithName:(id)arg1 length:(unsigned long long)arg2;
- (void)clearSpaceForAsset:(unsigned long long)arg1;
- (void)clearedCache;
- (id)dataForImageWithName:(id)arg1;
- (void)deleteAllAssets;
- (void)deleteAsset:(id)arg1;
- (void)deleteAssetWithName:(id)arg1;
- (void)deleteDataForAsset:(id)arg1;
- (void)deletedAssetWithName:(id)arg1;
- (id)gizmoCacheIdentifier;
- (id)initWithIdentifier:(id)arg1 cacheType:(unsigned long long)arg2;
- (id)keys;
- (id)pathForAssetDataWithName:(id)arg1;
- (bool)saveAssetData:(id)arg1 forAsset:(id)arg2;
- (void)setAssets:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1;
- (void)setGizmoCacheIdentifier:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setSize:(long long)arg1;
- (long long)size;
- (void)syncAssets:(id)arg1;

@end