
@interface TMLBlockReactiveValue : TMLReactiveValue {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg1 bindings:(id)arg2 valueType:(unsigned long long)arg3;
- (id)value;

@end