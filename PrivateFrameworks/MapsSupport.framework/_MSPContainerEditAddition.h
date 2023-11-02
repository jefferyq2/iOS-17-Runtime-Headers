
@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition> {
    NSArray * _addedImmutableObjects;
    NSMapTable * _identifiersAtopByIdentifier;
    NSIndexSet * _indexesOfAddedObjects;
    NSArray * _objects;
}

@property (nonatomic, readonly) NSArray *addedImmutableObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *indexesOfAddedObjects;
@property (nonatomic, readonly) NSArray *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addedImmutableObjects;
- (id)description;
- (id)identifierForObjectAtopAddedImmutableObject:(id)arg1;
- (id)indexesOfAddedObjects;
- (id)initWithObjects:(id)arg1 indexes:(id)arg2 identifiersAtop:(id)arg3;
- (id)objects;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end