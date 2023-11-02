
@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {
    HMDBackingStore * _backingStore;
    bool  _committed;
    NSMutableArray * _objects;
    HMDBackingStoreTransactionOptions * _options;
}

@property (nonatomic) HMDBackingStore *backingStore;
@property (nonatomic) bool committed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *objects;
@property (nonatomic, readonly) HMDBackingStoreTransactionOptions *options;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (void)sort:(id)arg1;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)add:(id)arg1 withMessage:(id)arg2;
- (void)addObjects:(id)arg1;
- (id)backingStore;
- (bool)committed;
- (id)description;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (void)dumpWithVerbosity:(bool)arg1 prefix:(id)arg2 logType:(unsigned char)arg3;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3;
- (id)logIdentifier;
- (id)objects;
- (id)options;
- (void)run;
- (void)run:(id /* block */)arg1;
- (void)runWithoutSave:(id /* block */)arg1;
- (void)save;
- (void)save:(id /* block */)arg1;
- (void)setBackingStore:(id)arg1;
- (void)setCommitted:(bool)arg1;
- (void)setObjects:(id)arg1;

@end