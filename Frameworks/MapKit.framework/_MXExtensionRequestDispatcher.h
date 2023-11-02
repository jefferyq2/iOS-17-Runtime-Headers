
@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)dispatchRequest:(id)arg1 vendor:(id)arg2 completion:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)startSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2;

@end