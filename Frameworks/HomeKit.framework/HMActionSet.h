
@interface HMActionSet : NSObject <HFApplicationData, HFFavoritable, HFHomeKitObject, HFIncludedContextProtocol, HFReorderableHomeKitObject, HFShowInHomeDashboard, HFStateDumpBuildable, HMActionSetConfiguration, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    NSString * _actionSetType;
    HMApplicationData * _applicationData;
    NSString * _assistantIdentifier;
    _HMContext * _context;
    HMMutableArray * _currentActions;
    bool  _executionInProgress;
    HMHome * _home;
    NSDate * _lastExecutionDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSSet *actions;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, readonly) HMMutableArray *currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (nonatomic) bool executionInProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *hf_characteristicWriteActions;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_effectiveIsFavorite;
@property (nonatomic, readonly) bool hf_effectiveShowInHomeDashboard;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) bool hf_hasSetShowInHomeDashboard;
@property (nonatomic, readonly) HFImageIconDescriptor *hf_iconDescriptor;
@property (nonatomic, readonly) UIColor *hf_iconTintColor;
@property (nonatomic, readonly) bool hf_isBuilder;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_requiresDeviceUnlock;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_showInHomeDashboard;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSDate *lastExecutionDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2;
+ (id)allowedActionClasses;
+ (bool)isBuiltinActionSetType:(id)arg1;
+ (id)shortcutsComponentActionSet;
+ (id)shortcutsComponentActionSetWithHome:(id)arg1 actions:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_doAddAction:(id)arg1 uuid:(id)arg2;
- (bool)_doRemoveActionWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_handleActionRemovedFromPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (bool)_handleActionSetRenameFromPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (bool)_handleActionUpdatedFromResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_recomputeAssistantIdentifier;
- (void)_registerNotificationHandlers;
- (void)_removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (id)applicationDataIdentifier;
- (id)assistantIdentifier;
- (id)context;
- (id)copyAsBuilder;
- (id)currentActions;
- (id)encodeAsProtoBuf;
- (void)encodeWithCoder:(id)arg1;
- (bool)executionInProgress;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (bool)isExecuting;
- (id)lastExecutionDate;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergeFromNewObjectForBuilderUpdates:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)recomputeAssistantIdentifier;
- (void)removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requiresDeviceUnlock;
- (void)resetNameWithCompletionHandler:(id /* block */)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setExecutionInProgress:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortcutsDictionaryRepresentation;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithBuilder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_standardSystemIconIdentifierForActionSetType:(id)arg1;

- (void)_hf_didUpdateApplicationData:(id)arg1;
- (id)_hf_iconIdentifier;
- (id)hf_affectedAccessoryRepresentableObjects;
- (id)hf_affectedCharacteristics;
- (id)hf_affectedMediaSessions;
- (id)hf_affectedProfiles;
- (id)hf_affectedServices;
- (bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_characteristicWriteActions;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (bool)hf_effectiveIsFavorite;
- (bool)hf_effectiveShowInHomeDashboard;
- (bool)hf_hasSetFavorite;
- (bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (bool)hf_hasSetShowInHomeDashboard;
- (id)hf_iconDescriptor;
- (id)hf_iconTintColor;
- (bool)hf_isAnonymous;
- (bool)hf_isBuilder;
- (bool)hf_isFavorite;
- (bool)hf_isOnForContextType:(unsigned long long)arg1;
- (bool)hf_isShortcutOwned;
- (id)hf_mapOldIconIdentifierToNewSystemIconIdentifier:(id)arg1;
- (float)hf_percentOfAccessoryRepresentableObjectsAssociatedWithGroup:(id)arg1;
- (bool)hf_requiresDeviceUnlock;
- (id)hf_setIconIdentifier:(id)arg1 andTintColor:(id)arg2;
- (id)hf_shortcutAction;
- (bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_showInHomeDashboard;
- (id)hf_standardIconTintColorForIconIdentifier:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (void)hf_updateApplicationData:(id)arg1 handleError:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)hf_updateShowInHomeDashboard:(bool)arg1;
- (id)hf_updateValue:(bool)arg1 forContextType:(unsigned long long)arg2;

@end