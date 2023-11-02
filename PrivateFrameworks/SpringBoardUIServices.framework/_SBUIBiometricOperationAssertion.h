
@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding> {
    NSSet * _operations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (id)operations;
- (void)setOperations:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end