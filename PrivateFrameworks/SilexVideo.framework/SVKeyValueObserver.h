
@interface SVKeyValueObserver : NSObject {
    id /* block */  _change;
    NSString * _keyPath;
    NSObject * _object;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) id /* block */ change;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (id /* block */)change;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 change:(id /* block */)arg4;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)options;

@end