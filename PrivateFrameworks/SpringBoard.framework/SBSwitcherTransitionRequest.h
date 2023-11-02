
@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding, NSMutableCopying> {
    SBDisplayItem * _activatingDisplayItem;
    long long  _animationDisabled;
    SBFFluidBehaviorSettings * _animationSettings;
    bool  _appLaunchDuringWindowDragGesture;
    SBAppLayout * _appLayout;
    long long  _appLayoutEnvironment;
    long long  _autoPIPDisabled;
    NSString * _bundleIdentifierForAppExpose;
    long long  _entityInsertionPolicy;
    bool  _fenceSceneUpdate;
    long long  _floatingConfiguration;
    long long  _floatingSwitcherVisible;
    long long  _peekConfiguration;
    long long  _preferredInterfaceOrientation;
    bool  _preventSwitcherRecencyModelUpdates;
    bool  _sceneUpdatesOnly;
    long long  _source;
    long long  _unlockedEnvironmentMode;
}

@property (nonatomic, retain) SBDisplayItem *activatingDisplayItem;
@property (nonatomic) long long animationDisabled;
@property (nonatomic, retain) SBFFluidBehaviorSettings *animationSettings;
@property (getter=isAppLaunchDuringWindowDragGesture, setter=setAppLaunchDuringWindowDragGesture:, nonatomic) bool appLaunchDuringWindowDragGesture;
@property (nonatomic, retain) SBAppLayout *appLayout;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long autoPIPDisabled;
@property (nonatomic, copy) NSString *bundleIdentifierForAppExpose;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long entityInsertionPolicy;
@property (nonatomic) bool fenceSceneUpdate;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long peekConfiguration;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) bool preventSwitcherRecencyModelUpdates;
@property (nonatomic) bool sceneUpdatesOnly;
@property (nonatomic) long long source;
@property (readonly) Class superclass;
@property (nonatomic) long long unlockedEnvironmentMode;

+ (id)requestForActivatingAppLayout:(id)arg1;
+ (id)requestForActivatingAppSwitcher;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForStashingFloatingApplicationWithFloatingConfiguration:(long long)arg1;
+ (id)requestForTapAppLayoutEvent:(id)arg1;
+ (id)requestForTapAppLayoutHeaderEvent:(id)arg1;

- (void).cxx_destruct;
- (id)activatingDisplayItem;
- (long long)animationDisabled;
- (id)animationSettings;
- (id)appLayout;
- (long long)appLayoutEnvironment;
- (long long)autoPIPDisabled;
- (id)bundleIdentifierForAppExpose;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)entityInsertionPolicy;
- (bool)fenceSceneUpdate;
- (long long)floatingConfiguration;
- (long long)floatingSwitcherVisible;
- (id)init;
- (bool)isAppLaunchDuringWindowDragGesture;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)peekConfiguration;
- (long long)preferredInterfaceOrientation;
- (bool)preventSwitcherRecencyModelUpdates;
- (bool)sceneUpdatesOnly;
- (void)setActivatingDisplayItem:(id)arg1;
- (void)setAnimationDisabled:(long long)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setAppLaunchDuringWindowDragGesture:(bool)arg1;
- (void)setAppLayout:(id)arg1;
- (void)setAppLayoutEnvironment:(long long)arg1;
- (void)setAutoPIPDisabled:(long long)arg1;
- (void)setBundleIdentifierForAppExpose:(id)arg1;
- (void)setEntityInsertionPolicy:(long long)arg1;
- (void)setFenceSceneUpdate:(bool)arg1;
- (void)setFloatingConfiguration:(long long)arg1;
- (void)setFloatingSwitcherVisible:(long long)arg1;
- (void)setPeekConfiguration:(long long)arg1;
- (void)setPreferredInterfaceOrientation:(long long)arg1;
- (void)setPreventSwitcherRecencyModelUpdates:(bool)arg1;
- (void)setSceneUpdatesOnly:(bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setUnlockedEnvironmentMode:(long long)arg1;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)unlockedEnvironmentMode;

@end