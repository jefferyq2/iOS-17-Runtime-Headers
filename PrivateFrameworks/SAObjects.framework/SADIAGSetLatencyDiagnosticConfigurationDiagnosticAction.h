
@interface SADIAGSetLatencyDiagnosticConfigurationDiagnosticAction : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uri;
@property (nonatomic, copy) NSString *verb;

+ (id)setLatencyDiagnosticConfigurationDiagnosticAction;
+ (id)setLatencyDiagnosticConfigurationDiagnosticActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUri:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)uri;
- (id)verb;

@end