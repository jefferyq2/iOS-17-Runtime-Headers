
@interface ASActivitySharingManager : NSObject <FIFitnessAppsStateObserverDelegate> {
    ASAchievementManager * _achievementManager;
    ASActivityDataBulletinManager * _activityDataBulletinManager;
    ASActivityDataManager * _activityDataManager;
    ASActivityDataNotificationManager * _activityDataNotificationManager;
    NSString * _appBundleIdentifier;
    bool  _appInstalled;
    <ASBulletinPostingManager> * _bulletinPostingManager;
    ASCloudKitManager * _cloudKitManager;
    ASCompetitionBulletinManager * _competitionBulletinManager;
    ASCompetitionManager * _competitionManager;
    ASContactsManager * _contactsManager;
    ASDatabaseClient * _databaseClient;
    <ASKeyValueDomain> * _deviceLocalActivitySharingKeyValueDomain;
    ASFakeBulletinManager * _fakeBulletinManager;
    ASFakingManager * _fakingManager;
    bool  _fitnessAppsRestricted;
    FIFitnessAppsStateObserver * _fitnessAppsStateObserver;
    ASFriendInviteBulletinManager * _friendInviteBulletinManager;
    ASFriendListManager * _friendListManager;
    ASGatewayManager * _gatewayManager;
    bool  _isWatch;
    int  _nanoRegistryDeviceDidBecomeActiveToken;
    int  _nanoRegistryDeviceDidChangeVersionToken;
    int  _nanoRegistryDeviceDidPairToken;
    int  _nanoRegistryDeviceDidUnpairToken;
    NSHashTable * _observers;
    ASPeriodicUpdateManager * _periodicUpdateManager;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    ASRelationshipManager * _relationshipManager;
    ASSetupManager * _setupManager;
    NSObject<OS_dispatch_group> * _submanagerBarrierGroup;
    NSObject<OS_dispatch_queue> * _submanagerBarrierQueue;
    bool  _submanagerInitializationComplete;
    bool  _submanagerProcessingStarted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _submanagersProcessingStartedLock;
}

@property (nonatomic, readonly) ASAchievementManager *achievementManager;
@property (nonatomic, readonly) ASActivityDataBulletinManager *activityDataBulletinManager;
@property (nonatomic, readonly) ASActivityDataManager *activityDataManager;
@property (nonatomic, readonly) ASActivityDataNotificationManager *activityDataNotificationManager;
@property (nonatomic, readonly) <ASBulletinPostingManager> *bulletinPostingManager;
@property (nonatomic, readonly) ASCloudKitManager *cloudKitManager;
@property (nonatomic, readonly) ASCompetitionBulletinManager *competitionBulletinManager;
@property (nonatomic, readonly) ASCompetitionManager *competitionManager;
@property (nonatomic, readonly) ASContactsManager *contactsManager;
@property (nonatomic, readonly) ASDatabaseClient *databaseClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <ASKeyValueDomain> *deviceLocalActivitySharingKeyValueDomain;
@property (nonatomic, readonly) ASFakeBulletinManager *fakeBulletinManager;
@property (nonatomic, readonly) ASFakingManager *fakingManager;
@property (nonatomic, readonly) FIFitnessAppsStateObserver *fitnessAppsStateObserver;
@property (nonatomic, readonly) ASFriendInviteBulletinManager *friendInviteBulletinManager;
@property (nonatomic, readonly) ASFriendListManager *friendListManager;
@property (nonatomic, readonly) ASGatewayManager *gatewayManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isWatch;
@property (nonatomic, readonly) ASPeriodicUpdateManager *periodicUpdateManager;
@property (nonatomic, readonly) ASRelationshipManager *relationshipManager;
@property (nonatomic, readonly) ASSetupManager *setupManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateActivitySharingManager;
- (void)_deactivateActivitySharingManager;
- (void)_mainQueue_completeSetupIfNeeded;
- (void)_mainQueue_nanoRegistryInfoChanged;
- (void)_mainQueue_notifyObserversOfActivation;
- (void)_mainQueue_notifyObserversOfDeactivation;
- (void)_mainQueue_notifySubmanagersOfManagerReady;
- (bool)_mainQueue_shouldCompleteSetup;
- (bool)_mainQueue_startSubmanagerProcessingIfNeeded;
- (bool)_mainQueue_stopSubmanagerProcessingIfNeeded;
- (void)_updateSubmanagerProcessingStarted:(bool)arg1;
- (void)_waitUntilSubmanagersReady;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)achievementManager;
- (id)activityDataBulletinManager;
- (id)activityDataManager;
- (id)activityDataNotificationManager;
- (void)addFriendListObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allFriends;
- (id)bulletinPostingManager;
- (void)clearFriendListWithCompletion:(id /* block */)arg1;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (id)cloudKitManager;
- (id)competitionBulletinManager;
- (id)competitionManager;
- (void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)contactsManager;
- (void)daemonReady;
- (id)databaseClient;
- (void)dealloc;
- (id)deviceLocalActivitySharingKeyValueDomain;
- (void)expireChangeTokenWithCompletion:(id /* block */)arg1;
- (id)fakeBulletinManager;
- (id)fakingManager;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchAllDataWithCompletion:(id /* block */)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchCodableFriendWithRemoteUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFriendWithRemoteUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)fitnessAppsStateObserver;
- (void)fitnessAppsStateObserver:(id)arg1 applicationInstallStateDidChangeForBundleIdentifiers:(id)arg2;
- (void)fitnessAppsStateObserver:(id)arg1 restrictedStateDidChange:(long long)arg2;
- (id)friendInviteBulletinManager;
- (id)friendListManager;
- (id)gatewayManager;
- (void)handleNotificationResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDatabaseClient:(id)arg1 isWatch:(bool)arg2;
- (bool)isWatch;
- (id)periodicUpdateManager;
- (bool)processingStarted;
- (void)pushActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)arg1;
- (void)queryAppBadgeCountWithCompletion:(id /* block */)arg1;
- (id)relationshipManager;
- (void)removeFriendListObserver:(id)arg1;
- (void)removeFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)setActivityDataVisible:(bool)arg1 toFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setMuteEnabled:(bool)arg1 forFriendWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (id)setupManager;

@end