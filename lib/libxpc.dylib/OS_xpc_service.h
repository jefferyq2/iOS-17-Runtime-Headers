
@interface OS_xpc_service : OS_xpc_object <OS_xpc_service>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_xref_dispose;
- (oneway void)release;

@end