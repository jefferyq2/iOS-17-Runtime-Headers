
@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    NSMutableDictionary * _mutableProperties;
    long long  _oldState;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long oldState;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic) double rate;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (long long)stateForStateName:(id)arg1;
+ (id)stateNameForState:(long long)arg1;

- (void).cxx_destruct;
- (double)duration;
- (double)elapsedTime;
- (id)initWithState:(long long)arg1;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)oldState;
- (id)properties;
- (double)rate;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRate:(double)arg1;
- (long long)state;

@end