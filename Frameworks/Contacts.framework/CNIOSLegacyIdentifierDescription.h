
@interface CNIOSLegacyIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void*)ABValueForABPerson:(void*)arg1;
- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (id)nilValue;
- (void)resetGuardianManagedValueOnContact:(id)arg1;
- (bool)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(struct __CFError {}**)arg3;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;
- (id)valueWithResetIdentifiers:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)nilValue;

@end