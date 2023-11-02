
@interface HMDFragmentationStreamTuple : HMFObject {
    NSDate * _expirationDate;
    HAPFragmentationStream * _fragmentationStream;
    HMFMessage * _lastMessage;
    NSString * _objectUUID;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) HAPFragmentationStream *fragmentationStream;
@property (nonatomic, retain) HMFMessage *lastMessage;
@property (nonatomic, readonly) NSString *objectUUID;

+ (id)tupleWithFragmentationStreamForObject:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)close;
- (id)expirationDate;
- (id)fragmentationStream;
- (id)initWithFragmentationStreamForObject:(id)arg1 delegate:(id)arg2;
- (bool)isExpired;
- (id)lastMessage;
- (id)objectUUID;
- (void)setLastMessage:(id)arg1;

@end