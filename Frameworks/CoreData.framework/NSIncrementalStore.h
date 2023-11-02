
@interface NSIncrementalStore : NSPersistentStore {
    unsigned long long  _lastIdentifier;
    void * _reserveda;
    void * _reservedb;
    NSDictionary * _storeMetadata;
}

+ (id)identifierForNewStoreAtURL:(id)arg1;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (void)_preflightCrossCheck;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (void)_setMetadata:(id)arg1 includeVersioning:(bool)arg2;
- (void)dealloc;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)metadata;
- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)referenceObjectForObjectID:(id)arg1;
- (void)setMetadata:(id)arg1;

@end