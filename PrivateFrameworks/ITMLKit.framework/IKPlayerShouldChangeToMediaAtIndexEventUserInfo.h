
@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    long long  _index;
    bool  _shouldChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) bool shouldChange;
@property (readonly) Class superclass;

- (bool)expectsReturnValue;
- (long long)index;
- (id)initWithIndex:(long long)arg1;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)properties;
- (bool)shouldChange;

@end