
@interface TKSmartCardSlot : NSObject {
    TKSmartCardATR * _ATR;
    NSXPCConnection * _connection;
    long long  _maxInputLength;
    long long  _maxOutputLength;
    NSString * _name;
    long long  _powerState;
    long long  _previousState;
    TKSmartCardSlotProxy * _proxy;
    bool  _securePINChangeSupported;
    bool  _securePINVerificationSupported;
    long long  _shareState;
    long long  _state;
}

@property (retain) TKSmartCardATR *ATR;
@property (nonatomic, readonly) long long maxInputLength;
@property (nonatomic, readonly) long long maxOutputLength;
@property (nonatomic, readonly) NSString *name;
@property long long powerState;
@property long long previousState;
@property (nonatomic, readonly) TKSmartCardSlotProxy *proxy;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property bool securePINChangeSupported;
@property bool securePINVerificationSupported;
@property long long shareState;
@property long long state;

- (void).cxx_destruct;
- (id)ATR;
- (void)connectToEndpoint:(id)arg1 synchronous:(bool)arg2 reply:(id /* block */)arg3;
- (void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (void)getAttrib:(unsigned int)arg1 reply:(id /* block */)arg2;
- (id)initWithEndpoint:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id)makeSmartCard;
- (long long)maxInputLength;
- (long long)maxOutputLength;
- (id)name;
- (long long)powerState;
- (long long)previousState;
- (id)proxy;
- (id)queue;
- (id)screen;
- (bool)securePINChangeSupported;
- (bool)securePINVerificationSupported;
- (void)setATR:(id)arg1;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(id /* block */)arg3;
- (void)setPowerState:(long long)arg1;
- (void)setPreviousState:(long long)arg1;
- (void)setSecurePINChangeSupported:(bool)arg1;
- (void)setSecurePINVerificationSupported:(bool)arg1;
- (void)setShareState:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)shareState;
- (long long)state;
- (id)synchronous:(bool)arg1 remoteSlotWithErrorHandler:(id /* block */)arg2;
- (id)userInteractionForConfirmation;
- (id)userInteractionForStringEntry;

@end