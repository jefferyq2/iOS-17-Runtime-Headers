
@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate, readonly) id delayingTerminate;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (retain) id iconBadgeNumber;
@property (readonly) NSString *identifier;
@property (getter=wasLaunchedFromLibrary, readonly) id launchedFromLibrary;
@property (getter=isRunningInStoreDemoMode, readonly) id runningInStoreDemoMode;
@property (readonly) id screenHeight;
@property (readonly) id screenWidth;
@property (readonly) long long statusBarAnimationFade;
@property (readonly) long long statusBarAnimationNone;
@property (readonly) long long statusBarAnimationSlide;
@property id statusBarHidden;
@property long long statusBarStyle;
@property (readonly) long long statusBarStyleBlackOpaque;
@property (readonly) long long statusBarStyleBlackTranslucent;
@property (readonly) long long statusBarStyleDefault;
@property (readonly) NSString *version;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)attributeKeys;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (id)exitStoreReasonButton;
- (id)exitStoreReasonDownloadComplete;
- (id)exitStoreReasonFatalError;
- (id)exitStoreReasonGotoMainStore;
- (id)exitStoreReasonOther;
- (id)exitStoreReasonPurchase;
- (void)exitStoreWithReason:(id)arg1;
- (id)hostIdentifier;
- (id)iconBadgeNumber;
- (id)identifier;
- (id)isDelayingTerminate;
- (id)isRunningInStoreDemoMode;
- (void)returnToLibrary;
- (id)screenHeight;
- (id)screenWidth;
- (id)scriptAttributeKeys;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(bool)arg2;
- (void)setIconBadgeNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setStatusBarStyle:(long long)arg1 animated:(bool)arg2;
- (void)setVersion:(id)arg1;
- (void)showNewsstand;
- (long long)statusBarAnimationFade;
- (long long)statusBarAnimationNone;
- (long long)statusBarAnimationSlide;
- (id)statusBarHidden;
- (long long)statusBarStyle;
- (long long)statusBarStyleBlackOpaque;
- (long long)statusBarStyleBlackTranslucent;
- (long long)statusBarStyleDefault;
- (id)version;
- (id)wasLaunchedFromLibrary;

@end