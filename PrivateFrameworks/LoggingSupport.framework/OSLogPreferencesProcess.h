
@interface OSLogPreferencesProcess : NSObject {
    NSString * _bundleID;
    NSDictionary * _internalPrefs;
    NSString * _internalPrefsFile;
    NSMutableDictionary * _prefs;
    NSString * _prefsFile;
    NSDictionary * _systemPrefs;
    NSString * _systemPrefsFile;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) long long effectiveEnabledLevel;
@property (nonatomic, readonly) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic) long long persistedLevel;

- (void).cxx_destruct;
- (id)_levelPrefs;
- (id)bundleID;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (long long)effectiveEnabledLevel;
- (long long)effectivePersistedLevel;
- (long long)enabledLevel;
- (id)initWithBundleID:(id)arg1;
- (bool)isLocked;
- (long long)persistedLevel;
- (void)reset;
- (void)setEnabledLevel:(long long)arg1;
- (void)setPersistedLevel:(long long)arg1;

@end