
@interface AMSUIWebLoadPluginAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;

@end