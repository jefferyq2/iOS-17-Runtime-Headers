
@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface> {
    CPWindow * _carWindow;
    NSXPCConnection * _connection;
    <CPInterfaceControllerDelegate> * _delegate;
    CPTemplate * _lastPresentedTemplate;
    bool  _prefersDarkUserInterfaceStyle;
    CPTemplate * _presentedTemplate;
    CPTemplate * _rootTemplate;
    NSMapTable * _templateMapTable;
    <CPTemplateProviding> * _templateProvider;
    NSMutableArray * _templateStack;
    <CPWindowProviding> * _windowProvider;
}

@property (nonatomic, readonly) UITraitCollection *carTraitCollection;
@property (nonatomic, retain) CPWindow *carWindow;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPInterfaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPTemplate *lastPresentedTemplate;
@property (nonatomic) bool prefersDarkUserInterfaceStyle;
@property (nonatomic, retain) CPTemplate *presentedTemplate;
@property (nonatomic, retain) CPTemplate *rootTemplate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *templateMapTable;
@property (nonatomic, retain) <CPTemplateProviding> *templateProvider;
@property (nonatomic, retain) NSMutableArray *templateStack;
@property (nonatomic, readonly) NSArray *templates;
@property (nonatomic, readonly) CPTemplate *topTemplate;
@property (nonatomic) <CPWindowProviding> *windowProvider;

+ (void)_allowlistClassesForBaseTemplateProvider:(id)arg1;
+ (id)_templateClientInterface;
+ (id)_templateProvidingInterface;

- (void).cxx_destruct;
- (id)_activeMapTemplate;
- (void)_connectToListenerEndpoint:(id)arg1;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_handleCompletion:(id /* block */)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (id)_init;
- (void)_invalidate;
- (id)_listenerEndpointForSettings:(id)arg1;
- (void)_presentActionSheetTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentAlertTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_pushEntityTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushGridTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushInformationTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushListTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushMapTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushNowPlayingTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushSearchTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushTabBarTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_pushTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_pushVoiceControlTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_sceneConnect:(id)arg1;
- (id)_synchronousTemplateProvider;
- (id)_templateWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (id)carTraitCollection;
- (id)carWindow;
- (void)clientAssistantCellUnavailableWithError:(id)arg1;
- (void)clientExceededAudioMetadataThrottleLimit;
- (void)clientExceededHierarchyDepthLimit;
- (void)clientExceededTabBarTabLimit;
- (void)clientPushNowPlayingTemplateAnimated:(bool)arg1;
- (void)clientPushedIllegalTemplateOfClass:(id)arg1;
- (id)connection;
- (id)delegate;
- (void)dismissTemplateAnimated:(bool)arg1;
- (void)dismissTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)handleActionForControlIdentifier:(id)arg1;
- (bool)isCarPlayCanvasActive;
- (id)lastPresentedTemplate;
- (void)popTemplateAnimated:(bool)arg1;
- (void)popTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)popToRootTemplateAnimated:(bool)arg1;
- (void)popToRootTemplateAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)prefersDarkUserInterfaceStyle;
- (void)presentTemplate:(id)arg1 animated:(bool)arg2;
- (void)presentTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentedTemplate;
- (void)pushTemplate:(id)arg1 animated:(bool)arg2;
- (void)pushTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)rootTemplate;
- (void)selectTabBarTemplateIndex:(long long)arg1;
- (void)setCarWindow:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastPresentedTemplate:(id)arg1;
- (void)setPrefersDarkUserInterfaceStyle:(bool)arg1;
- (void)setPresentedTemplate:(id)arg1;
- (void)setRootTemplate:(id)arg1;
- (void)setRootTemplate:(id)arg1 animated:(bool)arg2;
- (void)setRootTemplate:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setTemplateMapTable:(id)arg1;
- (void)setTemplateProvider:(id)arg1;
- (void)setTemplateStack:(id)arg1;
- (void)setWindowProvider:(id)arg1;
- (void)templateDidAppearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)templateDidDisappearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)templateDidDismissWithIdentifier:(id)arg1;
- (void)templateIdentifierDidDismiss:(id)arg1;
- (void)templateIdentifierDidPop:(id)arg1;
- (id)templateMapTable;
- (id)templateProvider;
- (id)templateStack;
- (void)templateWillAppearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)templateWillDisappearWithIdentifier:(id)arg1 animated:(bool)arg2;
- (id)templates;
- (id)topTemplate;
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateTabBarTemplate:(id)arg1;
- (id)windowProvider;

@end