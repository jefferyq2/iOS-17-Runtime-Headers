
@interface _TVRootMenuBarController : UITabBarController <IKAppTabBarController, TVAppRootViewController, UITabBarControllerDelegate> {
    <_TVAppNavigationControllerDelegate> * _appNavigationControllerDelegate;
    IKAppTabBar * _appTabBar;
    NSArray * _appTabBarItems;
    unsigned long long  _previousSelectedIndex;
}

@property (nonatomic, readonly) <IKAppNavigationController> *appNavigationController;
@property (nonatomic, retain) <_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;
@property (nonatomic, retain) NSArray *appTabBarItems;
@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appNavigationController;
- (id)appNavigationControllerDelegate;
- (id)appTabBar;
- (id)appTabBarItems;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (unsigned long long)numberOfTabsInTabBar:(id)arg1;
- (unsigned long long)previousSelectedIndex;
- (id)selectedTabItemForTabBar:(id)arg1;
- (void)setAppNavigationControllerDelegate:(id)arg1;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (void)setAppTabBarItems:(id)arg1;
- (void)setPreviousSelectedIndex:(unsigned long long)arg1;
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned long long)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)transientTabItemForTabBar:(id)arg1;
- (void)viewDidLoad;

@end