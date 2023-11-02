
@interface SACFAbstractClientCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *outputLogs;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *results;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

+ (id)abstractClientCommandCompleted;
+ (id)abstractClientCommandCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)outputLogs;
- (bool)requiresResponse;
- (id)results;
- (void)setOutputLogs:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end