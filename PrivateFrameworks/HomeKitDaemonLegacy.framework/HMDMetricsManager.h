
@interface HMDMetricsManager : NSObject <HMDCoreAnalyticsLogEventObserverDelegateDataSource, HMDCurrentResidentDeviceDataSource, HMDHH2AutoMigrationEligibilityLogEventSubmitterDataSource, HMDHouseholdMetricsDataSource, HMDLogEventAnalyzerDataSource, HMDLogEventDailyTaskRunner, HMFMessageReceiver, HMMLogEventDispatchingDataSource> {
    NSString * _PRKitDateString;
    NSString * _PRKitUUIDString;
    HMDMetricsAccessoryDetailsManager * _accessoryDetailsManager;
    HMDAppleAccountManager * _accountManager;
    NSMutableArray * _aggregationAnalysisEventContributingAnalyzers;
    HMDLogEventBulletinNotificationsAnalyzer * _bulletinNotificationsAnalyzer;
    HMDConfigurationLogEvent * _cachedConfiguration;
    HMDCloudSyncLogEventsAnalyzer * _cloudSyncLogEventsAnalyzer;
    NSMutableArray * _configurationObservers;
    HMDCoreAnalyticsLogEventObserverDelegate * _coreAnalyticsDelegate;
    NSArray * _coreAnalyticsFilters;
    HMMCoreAnalyticsLogEventObserver * _coreAnalyticsObserver;
    HMMCoreAnalyticsTagObserver * _coreAnalyticsTagObserver;
    NSString * _currentSoftwareVersion;
    HMDLogEventDailyScheduler * _dailyScheduler;
    HMMDateProvider * _dateProvider;
    HMDMetricsDeviceStateManager * _deviceStateManager;
    HMDDiagnosticReporterLogObserver * _diagnosticReporterLogObserver;
    HMDLogEventElectionEventsAnalyzer * _electionEventsAnalyzer;
    HMDLogEventErrorEventsAnalyzer * _errorEventsAnalyzer;
    HMDLogEventCountingAnalyzer * _eventCountingAnalyzer;
    <HMDEWSLogging> * _ewsLogger;
    HMDLogEventAccessoryFirmwareUpdateEventAnalyzer * _firmwareUpdateEventsAnalyzer;
    HMDTimeBasedFlagsManager * _flagsManager;
    HMDLogEventHAPMetricsEventAnalyzer * _hapEventsAnalyzer;
    HMDHH2AutoMigrationEligibilityLogEventSubmitter * _hh2AutoMigrationEligibilitySubmitter;
    HMDHH2MigrationLogEventsAnalyzer * _hh2MigrationAnalyzer;
    HMDHomeManager * _homeManager;
    HMDHouseholdMetricsManager * _householdMetricsManager;
    HMDEventCountersManager * _legacyCountersManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventDispatching> * _logEventDispatcher;
    HMDMessageDispatcher * _messageDispatcher;
    HMDLogEventMessageEventsAnalyzer * _messagingEventsAnalyzer;
    bool  _metricsCollectionStarted;
    HMDNetworkObserver * _networkObserver;
    NSNotificationCenter * _notificationCenter;
    <HMDUserNotificationCenterSettingsProviding> * _notificationSettingsProvider;
    HMDPowerLogObserver * _powerLogObserver;
    HMDLogEventProcessLaunchAnalyzer * _processLaunchEventsAnalyzer;
    HMDLogEventProcessMemoryEventsAnalyzer * _processMemoryEventsAnalyzer;
    HMDLogEventReachabilityEventsAnalyzer * _reachabilityEventsAnalyzer;
    HMMSiriSELFLogEventObserver * _siriSELFLoggingObserver;
    HMDThreadNetworkObserver * _threadNetworkObserver;
    <HMDRadarInitiating> * _ttrManager;
    HMDLogEventUserActivityAnalyzer * _userActivityEventsAnalyzer;
    NSUserDefaults * _userDefaults;
    HMDWidgetTimelineRefresherEventsAnalyzer * _widgetTimelineRefresherEventsAnalyzer;
}

@property (nonatomic, readonly) NSString *PRKitDateString;
@property (nonatomic, readonly) NSString *PRKitUUIDString;
@property (nonatomic, readonly) HMDMetricsAccessoryDetailsManager *accessoryDetailsManager;
@property (nonatomic, readonly) HMDAppleAccountManager *accountManager;
@property (nonatomic, readonly) NSMutableArray *aggregationAnalysisEventContributingAnalyzers;
@property (nonatomic, readonly) HMDLogEventBulletinNotificationsAnalyzer *bulletinNotificationsAnalyzer;
@property (nonatomic, readonly, copy) HMDConfigurationLogEvent *cachedConfiguration;
@property (nonatomic, readonly) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer;
@property (nonatomic, readonly, copy) NSArray *configurationObservers;
@property (nonatomic, readonly) HMDCoreAnalyticsLogEventObserverDelegate *coreAnalyticsDelegate;
@property (nonatomic, readonly) NSArray *coreAnalyticsFilters;
@property (nonatomic, readonly) HMMCoreAnalyticsLogEventObserver *coreAnalyticsObserver;
@property (nonatomic, readonly) HMMCoreAnalyticsTagObserver *coreAnalyticsTagObserver;
@property (nonatomic, readonly) HMDDevice *currentDevice;
@property (nonatomic, readonly) NSString *currentSoftwareVersion;
@property (nonatomic, readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDMetricsDeviceStateManager *deviceStateManager;
@property (nonatomic, readonly) <HMDMetricsDeviceStateProvider> *deviceStateProvider;
@property (nonatomic, readonly) NSArray *devicesOnCurrentAccount;
@property (nonatomic, readonly) HMDDiagnosticReporterLogObserver *diagnosticReporterLogObserver;
@property (nonatomic, readonly) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer;
@property (nonatomic, readonly) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer;
@property (nonatomic, readonly) HMDLogEventCountingAnalyzer *eventCountingAnalyzer;
@property (nonatomic, readonly) <HMDEWSLogging> *ewsLogger;
@property (nonatomic, readonly) HMDLogEventAccessoryFirmwareUpdateEventAnalyzer *firmwareUpdateEventsAnalyzer;
@property (nonatomic, readonly) HMDTimeBasedFlagsManager *flagsManager;
@property (nonatomic, readonly) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHH2AutoMigrationEligibilityChecker *hh2AutoMigrationEligibilityChecker;
@property (nonatomic, readonly) HMDHH2AutoMigrationEligibilityLogEventSubmitter *hh2AutoMigrationEligibilitySubmitter;
@property (nonatomic, readonly) HMDHH2MigrationLogEventsAnalyzer *hh2MigrationAnalyzer;
@property (nonatomic, readonly) NSArray *homeDataSources;
@property HMDHomeManager *homeManager;
@property (nonatomic, readonly) NSUUID *homeUUIDForCurrentResidentDevice;
@property (nonatomic, readonly) HMDHouseholdMetricsManager *householdMetricsManager;
@property (nonatomic, readonly) bool isDemoModeConfigured;
@property (readonly) bool isSubmissionEnabled;
@property (nonatomic, readonly) HMDEventCountersManager *legacyCountersManager;
@property (nonatomic, readonly) <HMMLogEventDispatching> *logEventDispatcher;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) HMDMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer;
@property bool metricsCollectionStarted;
@property (nonatomic, readonly) HMDNetworkObserver *networkObserver;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) <HMDUserNotificationCenterSettingsProviding> *notificationSettingsProvider;
@property (nonatomic, readonly) HMDPowerLogObserver *powerLogObserver;
@property (nonatomic, readonly) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer;
@property (nonatomic, readonly) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer;
@property (nonatomic, readonly) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer;
@property (nonatomic, readonly) HMMSiriSELFLogEventObserver *siriSELFLoggingObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDThreadNetworkObserver *threadNetworkObserver;
@property (nonatomic, readonly) <HMDRadarInitiating> *ttrManager;
@property (nonatomic, readonly) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) HMDWidgetTimelineRefresherEventsAnalyzer *widgetTimelineRefresherEventsAnalyzer;

+ (id)namespaceUUID;

- (void).cxx_destruct;
- (id)PRKitDateString;
- (id)PRKitUUIDString;
- (void)_configureManagers;
- (void)_configureObservers;
- (void)_handleFetchEventCounters:(id)arg1;
- (void)_handleLogEventDailySchedulerStatusRequest:(id)arg1;
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)arg1;
- (void)_handleResetEventCounters:(id)arg1;
- (void)_registerForMessages;
- (id)accessoryDetailsManager;
- (id)accessoryForIdentifier:(id)arg1;
- (id)accountManager;
- (void)addAnalyzer:(id)arg1 toListOfAggregationAnalysisEventContributing:(id)arg2;
- (void)addConfigurationChangedObserver:(id /* block */)arg1;
- (void)addRateTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 windowSize:(unsigned long long)arg5;
- (void)addTTRThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4;
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4;
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 uploadImmediately:(bool)arg5;
- (id)aggregationAnalysisEventContributingAnalyzers;
- (id)bulletinNotificationsAnalyzer;
- (id)cachedConfiguration;
- (id)cachedHomeConfigurationForHomeUUID:(id)arg1;
- (id)cloudSyncLogEventsAnalyzer;
- (id)configurationObservers;
- (void)configureHAPMetricsDispatcher:(id)arg1;
- (id)coreAnalyticsDelegate;
- (id)coreAnalyticsFilters;
- (id)coreAnalyticsObserver;
- (id)coreAnalyticsTagObserver;
- (id)currentDevice;
- (id)currentSoftwareVersion;
- (id)dailyScheduler;
- (id)dateProvider;
- (id)deviceStateManager;
- (id)deviceStateProvider;
- (id)devicesOnCurrentAccount;
- (id)diagnosticReporterLogObserver;
- (id)electionEventsAnalyzer;
- (id)errorEventsAnalyzer;
- (id)eventCountingAnalyzer;
- (id)ewsLogger;
- (id)firmwareUpdateEventsAnalyzer;
- (id)flagsManager;
- (id)hapEventsAnalyzer;
- (id)hh2AutoMigrationEligibilityChecker;
- (id)hh2AutoMigrationEligibilitySubmitter;
- (id)hh2MigrationAnalyzer;
- (id)homeDataSources;
- (id)homeKitAggregationAnalysisLogEvent;
- (void)homeKitConfigurationChanged;
- (id)homeManager;
- (id)homeUUIDForCurrentResidentDevice;
- (id)householdMetricsManager;
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3;
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3 logEventDispatcher:(id)arg4 dailyScheduler:(id)arg5 dateProvider:(id)arg6 legacyCountersManager:(id)arg7 flagsManager:(id)arg8 ewsLogger:(id)arg9 deviceStateManager:(id)arg10 networkObserver:(id)arg11 coreAnalyticsTagObserver:(id)arg12 notificationCenter:(id)arg13 userDefaults:(id)arg14 currentSoftwareVersion:(id)arg15;
- (bool)isDemoModeConfigured;
- (bool)isSubmissionEnabled;
- (id)legacyCountersManager;
- (id)logEventDispatcher;
- (id)logEventSubmitter;
- (id)logHomeKitAggregationAnalysisSummary;
- (id)logHomeKitErrorAggregationSummary;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)messagingEventsAnalyzer;
- (bool)metricsCollectionStarted;
- (id)networkObserver;
- (id)notificationCenter;
- (id)notificationSettingsProvider;
- (id)powerLogObserver;
- (id)processLaunchEventsAnalyzer;
- (id)processMemoryEventsAnalyzer;
- (id)reachabilityEventsAnalyzer;
- (void)registerEWSTriggers;
- (void)registerTTRTriggers;
- (void)registerTaggedLoggingProcessors;
- (void)resetHomeKitAggregationAnalysisContext;
- (void)runDailyTask;
- (void)saveCounters;
- (void)setHomeManager:(id)arg1;
- (void)setMetricsCollectionStarted:(bool)arg1;
- (id)siriSELFLoggingObserver;
- (void)startAnalyzers;
- (void)startMetricsCollection;
- (void)submitCurrentUserSettings;
- (void)submitDailyAggregationAnalysisEvents;
- (id)threadNetworkObserver;
- (id)ttrManager;
- (void)updateWidgetStatusInCachedConfiguration;
- (id)userActivityEventsAnalyzer;
- (id)userDefaults;
- (void)waitToCompleteCurrentlyQueuedTasks;
- (id)widgetTimelineRefresherEventsAnalyzer;

@end