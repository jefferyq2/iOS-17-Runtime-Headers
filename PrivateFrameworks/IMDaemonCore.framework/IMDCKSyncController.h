
@interface IMDCKSyncController : IMDCKAbstractSyncController <IMDCKAbstractSyncControllerDelegate, IMDMessageSyncCoordinatorDelegate, IMDXPCEventStreamHandlerDelegate, IMUnlockMonitorListener> {
    long long  _initialSyncAttempts;
    NSDate * _lastLogDumpDate;
    NSDate * _lastRestoreFailureLogDumpDate;
    NSTimer * _longRunningSyncTimer;
    IMTimer * _nightlySyncTimer;
    NSTimer * _reloadTimer;
    bool  _shouldReloadConversations;
    IMSyncResumer * _syncResumer;
    NSDate * _syncStartDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialSyncAttempts;
@property (nonatomic, retain) NSDate *lastLogDumpDate;
@property (nonatomic, retain) NSDate *lastRestoreFailureLogDumpDate;
@property (nonatomic, retain) NSTimer *longRunningSyncTimer;
@property (nonatomic, retain) IMTimer *nightlySyncTimer;
@property (retain) NSTimer *reloadTimer;
@property bool shouldReloadConversations;
@property (readonly) Class superclass;
@property (nonatomic, retain) IMSyncResumer *syncResumer;
@property (nonatomic, retain) NSDate *syncStartDate;

+ (bool)initialSyncAllowed;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (void)_accountDidChange:(id)arg1;
- (bool)_accountHasMultipleDevices;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)arg1 keys:(id)arg2;
- (void)_autoBugCaptureWithSubType:(id)arg1 debugDescription:(id)arg2;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)arg1;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2;
- (void)_beginPeriodicSyncWithActivity:(id)arg1 attemptCount:(unsigned long long)arg2 syncChatsCompletionBlock:(id /* block */)arg3;
- (void)_callSyncWithCompletion:(id /* block */)arg1 activity:(id)arg2;
- (bool)_chatSyncedRecently;
- (void)_clearTombstonesWithActivity:(id)arg1;
- (bool)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)arg1 firstFullSyncCompletedDate:(id)arg2;
- (unsigned long long)_currentHour;
- (id)_dailySyncStateDictionary;
- (id)_dateForNext24LogDumpAtHour:(long long)arg1 timeNow:(id)arg2 dumpNow:(bool*)arg3;
- (void)_deleteRestoreFailuresDirectory;
- (void)_didPassAccountAndIdentityUpdateNeeds;
- (void)_dispatchNotification:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)_errorIndicatesDeviceNotGoodForSync:(id)arg1;
- (bool)_handleSyncFailureType:(long long)arg1 step:(long long)arg2 activity:(id)arg3 attemptCount:(unsigned long long)arg4 startTime:(id)arg5 error:(id)arg6 retry:(id /* block */)arg7;
- (bool)_hasDumpedLogsInPastHour;
- (bool)_hasDumpedRestoreFailureLogsInPastHour;
- (void)_ifCloudKitAbleToSyncWithActivity:(id)arg1 callBlock:(id /* block */)arg2;
- (id)_keychainError;
- (id)_keychainErrorWithCause:(id)arg1;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (long long)_manualSyncAttemptCount;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (double)_minimumChatComingOnlineSyncInterval;
- (void)_needsSyncOnAccountUpdate;
- (void)_needsSyncOnIdentityUpdate;
- (void)_nightlySyncTimerFired;
- (void)_noteMeticsForSyncEndedWithSuccces:(bool)arg1;
- (void)_noteMetricsForSyncStartFrom:(id)arg1 fullSync:(bool)arg2;
- (void)_noteSyncStarted:(bool)arg1;
- (void)_nukeCKData;
- (long long)_periodicSyncAttemptCount;
- (id)_periodicSyncStateDictionary;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (id)_recordManager;
- (void)_refreshUIWhileSyncing;
- (void)_reloadChatRegistryOnMainThread;
- (void)_resetSyncStateAndAttemptCounts;
- (id)_retryError;
- (bool)_serverAllowsUIRefreshTimerWhileSyncing;
- (bool)_serverAllowsUIRefreshWhileSyncing;
- (bool)_serverDeniesDailySyncStateAnalytics;
- (bool)_serverDeniesPeriodicSyncAnalytics;
- (bool)_serverDoesNotAllowComingBackOnlineChatSync;
- (bool)_serverDoesNotSingleDeviceLimitation;
- (id)_sharedDatabaseManager;
- (void)_submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;
- (void)_syncChatsWithActivity:(id)arg1;
- (bool)_syncNotCompletedRecently;
- (void)_syncRecoverableMessagesToCloudKitWithActivity:(id)arg1 syncAttemptCount:(unsigned long long)arg2 startTime:(id)arg3 syncCompletionBlock:(id /* block */)arg4 retryCompletionBock:(id /* block */)arg5;
- (bool)_withinAnHourOfLogDumpHour;
- (void)_writeDownSyncDate;
- (id)attachmentSyncController;
- (id)backupController;
- (void)beginChatSyncPeriodic:(bool)arg1 activity:(id)arg2;
- (void)beginComingBackOnlineSyncWithActivity:(id)arg1;
- (void)beginInitialSyncAttemptCount:(unsigned long long)arg1 withActivity:(id)arg2;
- (void)beginInitialSyncWithActivity:(id)arg1;
- (void)beginPeriodicSyncWithActivity:(id)arg1;
- (void)beginPeriodicSyncWithChecks:(unsigned long long)arg1 priority:(const char *)arg2 reason:(id)arg3;
- (void)beginUserInitiatedSync;
- (id)chatSyncController;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)clearCKRelatedDefaults;
- (void)clearLocalCloudKitSyncState;
- (void)collectLogsIfNeeded;
- (void)dealloc;
- (bool)enforceAccountsMatchForMocAndShowDialogIfNeeded;
- (void)eventStreamHandler:(id)arg1 didReceiveEventWithName:(id)arg2 userInfo:(id)arg3;
- (id)exitManager;
- (void)handleAKUserInfoChangedNotification:(id)arg1;
- (id)init;
- (id)initialAttachmentSyncController;
- (id)initialMessageSyncController;
- (long long)initialSyncAttempts;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (void)kickOffEagerSyncIfApplicable;
- (id)lastLogDumpDate;
- (id)lastRestoreFailureLogDumpDate;
- (bool)logCloudKitAnalytics;
- (id)longRunningSyncTimer;
- (id)messageSyncController;
- (id)nightlySyncTimer;
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
- (void)performOneTimeAccountUpgradeCheckIfNeeded;
- (id)rampManager;
- (void)recordMetricIsCloudKitEnabled;
- (id)recoverableMessageSyncController;
- (void)refreshUIIfApplicableWithBatchCount:(unsigned long long)arg1;
- (void)registerCloudSyncDependencies;
- (void)registerForAccountNotifications;
- (double)reloadTimeInterval;
- (id)reloadTimer;
- (void)resumeSyncOnLaunchIfNeeded;
- (void)sendRestoreFailuresLogDumps;
- (void)sendRestoreFailuresLogDumpsIfNeeded;
- (void)setInitialSyncAttempts:(long long)arg1;
- (void)setLastLogDumpDate:(id)arg1;
- (void)setLastRestoreFailureLogDumpDate:(id)arg1;
- (void)setLongRunningSyncTimer:(id)arg1;
- (void)setNightlySyncTimer:(id)arg1;
- (void)setReloadTimer:(id)arg1;
- (void)setShouldReloadConversations:(bool)arg1;
- (void)setSyncResumer:(id)arg1;
- (void)setSyncStartDate:(id)arg1;
- (bool)shouldMarkAllIncompatibleMessagesForDeletion;
- (bool)shouldReloadConversations;
- (void)syncAttachmentMetadataFirstSyncWithActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (void)syncChatsWithMessageContext:(id)arg1;
- (void)syncController:(id)arg1 syncBatchCompleted:(unsigned long long)arg2;
- (long long)syncControllerRecordType;
- (void)syncCoordinatorFinishedFetchingRecordsOfType:(long long)arg1 name:(id)arg2 identifier:(id)arg3 count:(long long)arg4 error:(id)arg5;
- (void)syncCoordinatorFinishedSyncWithName:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (void)syncCoordinatorStartedSyncWithName:(id)arg1 identifier:(id)arg2;
- (void)syncCoordinatorWaitingForImportToFinishWithName:(id)arg1 identifier:(id)arg2;
- (void)syncDeletesToCloudKitWithActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)syncResumer;
- (id)syncStartDate;
- (id)syncStateDebuggingInfo:(id)arg1;
- (void)systemDidUnlock;
- (void)updateSecurityLevelDowngradedIfNeeded:(id /* block */)arg1;
- (id)updateSyncController;

@end