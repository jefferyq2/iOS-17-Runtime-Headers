
@protocol IKDOMBindingStrategy <NSObject>

@required

- (bool)applyValue:(id)arg1 forKey:(NSString *)arg2;

@optional

- (void)didResolveKeys:(NSSet *)arg1;
- (NSSet *)keysAffectingChildren;
- (NSSet *)keysAffectingSubtree;
- (NSSet *)prototypeDependentKeys;
- (void)valueDidChangeForKey:(NSString *)arg1 propertyPath:(IKDataBindingPropertyPath *)arg2 extraInfo:(NSDictionary *)arg3;

@end