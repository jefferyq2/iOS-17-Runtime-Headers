
@interface FIUITransition : NSObject {
    long long  _event;
    id /* block */  _gate;
    id /* block */  _handler;
    NSString * _label;
    FIUIState * _toState;
}

@property (nonatomic) long long event;
@property (nonatomic, copy) id /* block */ gate;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) FIUIState *toState;

- (void).cxx_destruct;
- (long long)event;
- (id /* block */)gate;
- (id /* block */)handler;
- (id)label;
- (void)setEvent:(long long)arg1;
- (void)setGate:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setToState:(id)arg1;
- (id)toState;

@end