
@interface CKKnowledgeStore : NSObject {
    void backingStore;
    void delegate;
    void location;
    void sparqlQueue;
}

@property (nonatomic) <CKKnowledgeStoreDelegate> *delegate;
@property (nonatomic, readonly) NSURL *filePathURL;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;

+ (id)defaultKnowledgeStore;
+ (id)defaultSynchedKnowledgeStore;
+ (id)directoryURL;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)synchedKnowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;

- (void).cxx_destruct;
- (id)delegate;
- (id)dictionaryRepresentationAndReturnError:(id*)arg1;
- (void)dictionaryRepresentationForKeysMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dictionaryRepresentationForKeysMatching:(id)arg1 error:(id*)arg2;
- (void)dictionaryRepresentationWithCompletionHandler:(id /* block */)arg1;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)arg1;
- (id)entitiesAndReturnError:(id*)arg1;
- (void)entitiesWithCompletionHandler:(id /* block */)arg1;
- (id)entityWithIdentifier:(id)arg1;
- (id)filePathURL;
- (long long)hash;
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)keysAndReturnError:(id*)arg1;
- (void)keysMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)keysMatching:(id)arg1 error:(id*)arg2;
- (void)keysWithCompletionHandler:(id /* block */)arg1;
- (id)name;
- (bool)removeAllValuesAndReturnError:(id*)arg1;
- (void)removeAllValuesWithCompletionHandler:(id /* block */)arg1;
- (void)removeEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeEntity:(id)arg1 error:(id*)arg2;
- (void)removeValueForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeValueForKey:(id)arg1 error:(id*)arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeValuesForKeys:(id)arg1 error:(id*)arg2;
- (void)removeValuesMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeValuesMatching:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)subgraphWithEntities:(id)arg1;
- (void)triplesMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)triplesMatching:(id)arg1 error:(id*)arg2;
- (id)valueForKey:(id)arg1;
- (void)valueForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)valuesAndReturnError:(id*)arg1;
- (void)valuesForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)valuesForKeysMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)valuesForKeysMatching:(id)arg1 error:(id*)arg2;
- (void)valuesWithCompletionHandler:(id /* block */)arg1;
- (id)writeBatch;

@end