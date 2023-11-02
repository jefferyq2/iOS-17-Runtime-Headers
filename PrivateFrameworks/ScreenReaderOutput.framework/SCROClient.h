
@interface SCROClient : NSObject {
    struct __CFSet { } * _callbackSet;
    unsigned int  _identifier;
    NSLock * _lock;
    int  _pid;
    unsigned int  _port;
    struct __CFArray { } * _queue;
    NSObject<OS_os_transaction> * _scrodTransaction;
}

+ (id)addClientGetIdentifier:(unsigned int*)arg1 token:(struct { unsigned int x1[8]; })arg2 getPort:(unsigned int*)arg3;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)initialize;
+ (bool)isClientTrustedWithPortToken:(struct { unsigned int x1[8]; })arg1;
+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;
+ (long long)removeClientWithPort:(unsigned int)arg1;
+ (void)sendCallback:(id)arg1;

- (void).cxx_destruct;
- (id)_dequeueCallbacks;
- (void)_invalidate;
- (void)_lock;
- (void)_registerCallbackWithKey:(int)arg1;
- (void)_sendCallback:(id)arg1;
- (void)_unlock;
- (bool)_wantsCallback:(id)arg1;
- (void)dealloc;
- (id)init;

@end