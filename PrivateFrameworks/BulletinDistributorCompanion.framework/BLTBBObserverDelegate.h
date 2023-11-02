
@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate> {
    <BBObserverDelegate> * _actualDelegate;
    <BLTBBObserverDelegateDelegate> * _delegate;
}

@property <BBObserverDelegate> *actualDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTBBObserverDelegateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actualDelegate;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setActualDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end