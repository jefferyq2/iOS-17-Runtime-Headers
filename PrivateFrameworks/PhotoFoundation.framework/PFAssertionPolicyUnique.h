
@interface PFAssertionPolicyUnique : PFAssertionPolicyComposite {
    NSMutableSet * _signatures;
}

- (void).cxx_destruct;
- (id)init;
- (void)notifyAssertion:(id)arg1;

@end