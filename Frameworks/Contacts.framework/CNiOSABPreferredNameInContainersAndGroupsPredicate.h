
@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate <CNiOSContactPredicate> {
    NSArray * _containerIdentifiers;
    NSArray * _groupIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *containerIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cn_ABQSLPredicateForAddressBook:(void*)arg1 fetchRequest:(id)arg2 error:(id*)arg3;
- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (id)containerIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;

@end