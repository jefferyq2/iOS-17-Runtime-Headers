
@interface IKJSTimerContext : NSObject {
    bool  _isRepeating;
    IKJSManagedArray * _managedArgs;
    JSManagedValue * _managedCallback;
    id  _ownerObject;
    NSTimer * _timer;
}

@property (nonatomic, readonly) bool isRepeating;
@property (nonatomic, readonly, retain) IKJSManagedArray *managedArgs;
@property (nonatomic, readonly, retain) JSManagedValue *managedCallback;
@property (nonatomic, readonly, retain) id ownerObject;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;
- (bool)isRepeating;
- (id)managedArgs;
- (id)managedCallback;
- (id)ownerObject;
- (void)removeManagedReferences;
- (void)setTimer:(id)arg1;
- (id)timer;

@end