
@interface PKPaymentOptionsRecents : NSObject {
    CNContact * _cachedMeContact;
    bool  _meCardCachingEnabled;
    <NSObject> * _meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization * _optionsSynchronization;
    CRRecentContactsLibrary * _recentContactsLibrary;
}

@property (nonatomic, readonly) CNContact *meCard;
@property (getter=isMeCardCachingEnabled, nonatomic) bool meCardCachingEnabled;
@property (nonatomic, retain) CRRecentContactsLibrary *recentContactsLibrary;

+ (id)_coreRecentsKindForPreference:(id)arg1;
+ (id)defaultInstance;

- (void).cxx_destruct;
- (void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2;
- (id)_contactFromRecent:(id)arg1 preference:(id)arg2;
- (id)_contactsFromKeychainForPreference:(id)arg1;
- (void)_coreRecentsContactsForPreference:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)_defaultCRSearchQuery;
- (void)_deleteRecentContactFromKeychain:(id)arg1 forPreference:(id)arg2;
- (void)_deleteRecentContactsFromKeychainForContactKey:(id)arg1;
- (void)_deleteRecentContactsFromKeychainForPreference:(id)arg1;
- (id)_keychainDataForKey:(id)arg1;
- (id)_keychainKeyFromContactKey:(id)arg1;
- (id)_labelsToPropertiesDictionaryForContact:(id)arg1;
- (id)_meCardEntries:(id)arg1 forContactKey:(id)arg2 labelsToProperties:(id)arg3;
- (id)_meCardEntries:(id)arg1 forContactKeys:(id)arg2 labelsToProperties:(id)arg3;
- (id)_postalAddressLabeledValueFromRecent:(id)arg1;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)_updateRecentsWithContactsFromContactInformation:(id)arg1 currentKeychainContacts:(id)arg2 forContactKey:(id)arg3;
- (id)contactMetadataForContact:(id)arg1 preference:(id)arg2;
- (void)dealloc;
- (void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteRecent:(id)arg1;
- (void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)isMeCardCachingEnabled;
- (id)meCard;
- (id)meCardEntriesForPreference:(id)arg1;
- (void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)postalAddressMetadataForContact:(id)arg1;
- (id)recentContactsLibrary;
- (id)recentsForPreference:(id)arg1;
- (void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)saveContactToCoreRecents:(id)arg1 preference:(id)arg2;
- (void)setMeCardCachingEnabled:(bool)arg1;
- (void)setRecentContactsLibrary:(id)arg1;
- (void)updateRecentsAndKeychainWithContactInformation:(id)arg1;

@end