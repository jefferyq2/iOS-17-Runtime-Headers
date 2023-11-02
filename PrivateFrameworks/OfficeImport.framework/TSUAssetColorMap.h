
@interface TSUAssetColorMap : NSObject {
    NSMutableDictionary * mAssetPathToColorMap;
}

@property (nonatomic, readonly, copy) NSDictionary *assetPathToColorMap;

+ (id)assetColorMap;

- (void).cxx_destruct;
- (id)TSUColorFromColorArray:(id)arg1;
- (void)addChartEntries;
- (void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(id /* block */)arg2;
- (void)addSharedEntries;
- (id)assetPathToColorMap;
- (id)init;

@end