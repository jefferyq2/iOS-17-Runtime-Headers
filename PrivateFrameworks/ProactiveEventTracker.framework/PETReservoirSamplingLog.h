
@interface PETReservoirSamplingLog : NSObject {
    unsigned int  _limit;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct { 
        unsigned long long s[2]; 
    }  _rng;
    NSObject<PETReservoirSamplingLogStore> * _store;
}

- (void).cxx_destruct;
- (void)_clearLocked;
- (void)_enumerateItemsWithBlockLocked:(id /* block */)arg1;
- (void)_gc;
- (bool)_lock;
- (bool)_readHeader;
- (void)_unlock;
- (void)clear;
- (void)dealloc;
- (void)enumerateAndClearItemsWithBlock:(id /* block */)arg1;
- (void)enumerateItemsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initInMemoryWithLimit:(unsigned long long)arg1;
- (id)initWithPath:(id)arg1 limit:(unsigned long long)arg2;
- (id)initWithStore:(id)arg1 limit:(unsigned long long)arg2;
- (void)log:(id)arg1;
- (void)unlock;

@end