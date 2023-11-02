
@interface WLKSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accountID;
    NSMutableArray * _apps;
    NSXPCConnection * _connection;
    NSUserDefaults * _defaultsAccessor;
    int  _didChangeNotificationToken;
    bool  _hasOutstandingChanges;
    int  _ignoreChangesCount;
    NSDate * _lastSyncDate;
    NSDate * _lastSyncToCloudDate;
    bool  _migratediOS;
    bool  _migratedtvOS;
    bool  _optedIn;
    NSNumber * _optedInVal;
    NSString * _pushToken;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    int  _userDefaultsDidChangeNotificationToken;
}

@property bool hasOutstandingChanges;
@property int ignoreChangesCount;
@property (nonatomic, readonly, copy) NSDate *lastSyncDate;
@property (nonatomic, readonly, copy) NSDate *lastSyncToCloudDate;
@property (nonatomic) bool migratediOS;
@property (nonatomic) bool migratedtvOS;
@property (nonatomic) bool optedIn;
@property (nonatomic, copy) NSNumber *optedInVal;
@property (nonatomic) bool privateModeEnabled;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic) bool sportsScoreSpoilersAllowed;
@property (nonatomic, readonly, copy) NSSet *suppressedSportsEventIDs;
@property (nonatomic) bool upNextLockupsUseCoverArt;

+ (bool)isHostedInRemoteViewService;
+ (bool)isSettingsStoreInitializing;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)sharedSettings;
+ (void)synchronizeSettingsDefaultsForKeys:(id)arg1;

- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)arg1;
- (id)_appsForChannelID:(id)arg1;
- (void)_attemptCullingOfObsoleteApp:(id)arg1;
- (id)_connection;
- (void)_dictionaryOnDisk:(id /* block */)arg1;
- (id)_dictionaryRepresentation;
- (id)_dictionaryRepresentationCopyingItems:(bool)arg1;
- (id)_dictionaryRepresentationDataOnly;
- (void)_loadFromDisk;
- (void)_removeWatchListApp:(id)arg1;
- (id)_supportPath;
- (void)_tickleKVO;
- (void)_updateDisplayNamesForUI:(id /* block */)arg1;
- (id)_watchListAppsFiltered;
- (void)_writeToDisk;
- (void)_writeToDisk:(id)arg1 completion:(id /* block */)arg2;
- (void)beginIgnoringChanges;
- (void)clearAllSportsNotificationSuppression;
- (id)consentedBrands;
- (void)dealloc;
- (id)deniedBrands;
- (id)description;
- (void)endIgnoringChanges;
- (void)forceUpdateWithCompletion:(id /* block */)arg1;
- (bool)hasOutstandingChanges;
- (int)ignoreChangesCount;
- (id)init;
- (id)lastSyncDate;
- (id)lastSyncToCloudDate;
- (bool)migratediOS;
- (bool)migratedtvOS;
- (bool)optedIn;
- (id)optedInVal;
- (bool)privateModeEnabled;
- (void)publishCrossProcessSettingsChangedNotification:(bool)arg1;
- (id)pushToken;
- (void)refresh;
- (void)setHasOutstandingChanges:(bool)arg1;
- (void)setIgnoreChangesCount:(int)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setLastSyncToCloudDate:(id)arg1;
- (void)setMigratediOS:(bool)arg1;
- (void)setMigratedtvOS:(bool)arg1;
- (void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (void)setOptedIn:(bool)arg1;
- (void)setOptedInVal:(id)arg1;
- (void)setPrivateModeEnabled:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSportsNotificationSuppression:(bool)arg1 forEventID:(id)arg2;
- (void)setSportsScoreSpoilersAllowed:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3;
- (void)setUpNextLockupsUseCoverArt:(bool)arg1;
- (id)settingsForChannelID:(id)arg1 externalID:(id)arg2;
- (bool)sportsScoreSpoilersAllowed;
- (id)suppressedSportsEventIDs;
- (bool)synchronize:(unsigned long long)arg1;
- (void)synchronize:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)upNextLockupsUseCoverArt;
- (id)watchListApps;
- (id)watchListAppsFiltered;

@end