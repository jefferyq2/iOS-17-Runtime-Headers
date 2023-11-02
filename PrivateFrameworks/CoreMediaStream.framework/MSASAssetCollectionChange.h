
@interface MSASAssetCollectionChange : NSObject {
    NSString * _GUID;
    NSString * _ctag;
    bool  _wasDeleted;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic) bool wasDeleted;

- (void).cxx_destruct;
- (id)GUID;
- (id)ctag;
- (id)description;
- (void)setCtag:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)wasDeleted;

@end