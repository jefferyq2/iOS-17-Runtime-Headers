
@interface TUProxyAutocompleteResult : NSObject <TUSearchResult> {
    CNAutocompleteResult * _autocompleteResult;
}

@property (nonatomic, retain) CNAutocompleteResult *autocompleteResult;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *callerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *isoCountryCode;
@property (readonly) long long mostRecentCallType;
@property (readonly) bool mostRecentCallWasMissed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autocompleteResult;
- (id)backingContact;
- (id)backingContactId;
- (id)backingContactIdentifier;
- (id)callerId;
- (id)destinationId;
- (id)displayName;
- (id)handles;
- (id)idsCanonicalDestinations;
- (id)init;
- (id)initWithAutocompleteResult:(id)arg1;
- (id)isoCountryCode;
- (long long)mostRecentCallType;
- (bool)mostRecentCallWasMissed;
- (void)setAutocompleteResult:(id)arg1;

@end