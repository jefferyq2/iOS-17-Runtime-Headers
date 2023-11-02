
@interface NSConcreteArrayChanges : NSArrayChanges {
    struct { 
        id objects; 
        bool isMutable; 
        struct { 
            struct _NSOrderedChange {} *buffer; 
            unsigned long long availableIndex; 
            unsigned long long capacity; 
            unsigned long long changesIndex; 
            unsigned long long lastIndex; 
            unsigned long long count; 
        } list; 
    }  _changes;
}

- (void)_enumerateChanges:(unsigned long long)arg1 stop:(bool*)arg2 usingBlock:(id /* block */)arg3;
- (void)addChange:(id)arg1;
- (void)applyChangesToArray:(id)arg1;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;

@end