
@protocol SBLockScreenPluginController <SBPluginBundleController, SBUIOptionalLegibility>

@required

- (<SBLockScreenPluginAgent> *)pluginAgent;
- (<SBLockScreenPluginAppearance> *)pluginAppearance;
- (long long)pluginPriority;
- (UIViewController<SBLockScreenPluginViewController> *)pluginViewController;
- (void)setPluginAgent:(id <SBLockScreenPluginAgent>)arg1;

@optional

- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (bool)pluginHandleEvent:(long long)arg1;
- (SBLockScreenPluginAction *)pluginUnlockAction;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)updateForPresentation:(SBLockScreenPluginPresentation *)arg1;

@end