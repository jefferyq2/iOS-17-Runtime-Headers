
@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *duckingEventSyncDelay;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *preTriggerToDuckingEndDuration;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setAudioDuckingDelay;
+ (id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2;

- (id)duckingEventSyncDelay;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)preTriggerToDuckingEndDuration;
- (bool)requiresResponse;
- (void)setDuckingEventSyncDelay:(id)arg1;
- (void)setPreTriggerToDuckingEndDuration:(id)arg1;

@end