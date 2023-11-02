
@interface NFMutexLock : NSObject <NFLocking> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)performWithLockSync:(id /* block */)arg1;
- (void)unlock;

@end