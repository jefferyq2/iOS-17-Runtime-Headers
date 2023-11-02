
@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting> {
    NSCountedSet * _keyPathRegistrationCount;
    NSObject<OS_dispatch_queue> * _queue;
    _DKCoreDataStorage * _storage;
}

@property (nonatomic, readonly) NSCountedSet *keyPathRegistrationCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;

+ (id)persistenceWithDirectory:(id)arg1;
+ (id)persistenceWithStorage:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteKeyPaths:(id)arg1;
- (bool)_withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insert:(bool)arg3 update:(id /* block */)arg4;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (bool)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2;
- (bool)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(id /* block */)arg3;
- (id)getMOC;
- (id)initWithStorage:(id)arg1;
- (id)keyPathRegistrationCount;
- (id)loadRegistrations;
- (id)loadValues;
- (id)queue;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)storage;
- (id)uniquenessPredicateForKeyPath:(id)arg1;
- (id)uniqunessPredicateForRegistration:(id)arg1;
- (bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(id /* block */)arg3;
- (bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 update:(id /* block */)arg3;

@end