
@interface _SYObjectCompatibilityWrapper : NSProxy <SYChange, SYObject> {
    <SYObject> * _syObject;
    long long  _type;
}

@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)changeType;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSYObject:(id)arg1 changeType:(long long)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)objectIdentifier;
- (id)sequencer;

@end