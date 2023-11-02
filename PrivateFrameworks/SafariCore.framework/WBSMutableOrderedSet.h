
@interface WBSMutableOrderedSet : NSObject {
    unsigned long long  _maximumCount;
    NSMutableOrderedSet * _mutableOrderedSet;
}

@property (nonatomic, readonly) NSArray *array;

- (void).cxx_destruct;
- (void)_moveObjectAtIndexToLast:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (id)array;
- (bool)containsObject:(id)arg1;
- (id)init;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)markObjectAsRecentlyUsed:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;

@end