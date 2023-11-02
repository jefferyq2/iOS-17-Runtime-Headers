
@interface ASDSystemAppRequest : ASDPersistentRequest {
    NSString * _bundleID;
    NSNumber * _storeItemID;
    bool  _userInitiated;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, copy) NSNumber *storeItemID;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isUserInitiated;
- (void)setStoreItemID:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)storeItemID;

@end