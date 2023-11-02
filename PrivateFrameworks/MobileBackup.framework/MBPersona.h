
@interface MBPersona : NSObject {
    bool  _isDataSeparatedPersona;
    NSString * _personaIdentifier;
    _MBUser * _user;
    unsigned long long  _userPersonaType;
    NSString * _volumeMountPoint;
    NSSet * _volumesToBackUp;
}

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) NSString *appPlaceholderArchiveDirectory;
@property (nonatomic, readonly) NSString *cacheDirectory;
@property (nonatomic, readonly) NSString *demotedAppsPlistPath;
@property (nonatomic) bool isDataSeparatedPersona;
@property (nonatomic, readonly) bool isEnterprisePersona;
@property (nonatomic, readonly) bool isPersonalPersona;
@property (nonatomic, retain) NSString *personaIdentifier;
@property (nonatomic, readonly) NSString *placeholderRestoreDirectory;
@property (nonatomic, readonly) NSString *preferencesDirectory;
@property (nonatomic, readonly) NSString *restoreKeyBagsPath;
@property (nonatomic, readonly) NSString *restoreOperationLogPath;
@property (nonatomic, readonly) NSString *safeHarborDirectory;
@property (nonatomic, readonly) NSString *sharedIncompleteRestoreDirectory;
@property (nonatomic, readonly) NSString *sharedRestoreDirectory;
@property (nonatomic, readonly) bool shouldRestoreFilesSparse;
@property (nonatomic, readonly) bool shouldRestoreToSharedVolume;
@property (nonatomic, readonly) NSString *skippedFileRecordsPlistPath;
@property (nonatomic, readonly) NSString *sqliteCopyDirectory;
@property (nonatomic, readonly) NSString *systemContainersVolumeMountPoint;
@property (nonatomic, readonly) NSString *systemDataContainerRestoreDirectory;
@property (nonatomic, readonly) NSString *systemSharedDataContainerRestoreDirectory;
@property (nonatomic, readonly) _MBUser *user;
@property (nonatomic, readonly) NSString *userIncompleteRestoreDirectory;
@property (nonatomic) unsigned long long userPersonaType;
@property (nonatomic, readonly) NSString *userRestoreDirectory;
@property (nonatomic, retain) NSString *volumeMountPoint;
@property (nonatomic, retain) NSSet *volumesToBackUp;

+ (void)installPersonaForTesting;
+ (Class)personaClass;
+ (id)personaWithAttributes:(id)arg1 volumeMountPoint:(id)arg2;
+ (id)personaWithIdentifier:(id)arg1 userPersonaType:(unsigned long long)arg2 dataSeparatedPersona:(bool)arg3 volumeMountPoint:(id)arg4;
+ (id)personaWithUMPersona:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_fileSystemSupportsSparseFiles:(id)arg1;
- (bool)_moveRestoreDirectoryFrom:(id)arg1 toFinalLocation:(id)arg2 error:(id*)arg3;
- (unsigned long long)_removeRestorePrefetchCacheAtPath:(id)arg1 earliestDate:(id)arg2;
- (id)_userRestorePrefetchDirectory;
- (long long)accountType;
- (id)appPlaceholderArchiveDirectory;
- (id)cacheDirectory;
- (bool)cleanupRestoreDirectoriesWithError:(id*)arg1;
- (bool)createRestoreDirectoriesWithError:(id*)arg1;
- (id)demotedAppsPlistPath;
- (id)description;
- (bool)finalizeRestoreDirectoriesWithError:(id*)arg1;
- (id)initWithPersonaAttributes:(id)arg1 volumeMountPoint:(id)arg2;
- (id)initWithPersonaIdentifier:(id)arg1 userPersonaType:(unsigned long long)arg2 dataSeparatedPersona:(bool)arg3 volumeMountPoint:(id)arg4;
- (id)initWithUMPersona:(id)arg1 error:(id*)arg2;
- (bool)isDataSeparatedPersona;
- (bool)isEnterprisePersona;
- (bool)isPersonalPersona;
- (id)personaIdentifier;
- (id)placeholderRestoreDirectory;
- (id)preferencesDirectory;
- (void)removeRestoreKeybags;
- (unsigned long long)removeRestorePrefetchCachesOlderThanDate:(id)arg1;
- (id)restoreKeyBagsPath;
- (id)restoreOperationLogPath;
- (id)restorePrefetchDirectories;
- (id)restorePrefetchDirectoryForDomain:(id)arg1;
- (id)safeHarborDirectory;
- (void)setIsDataSeparatedPersona:(bool)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setUserPersonaType:(unsigned long long)arg1;
- (void)setVolumeMountPoint:(id)arg1;
- (void)setVolumesToBackUp:(id)arg1;
- (id)sharedIncompleteRestoreDirectory;
- (id)sharedRestoreDirectory;
- (bool)shouldRestoreFilesSparse;
- (bool)shouldRestoreToSharedVolume;
- (id)skippedFileRecordsPlistPath;
- (id)sqliteCopyDirectory;
- (id)systemContainersVolumeMountPoint;
- (id)systemDataContainerRestoreDirectory;
- (id)systemSharedDataContainerRestoreDirectory;
- (id)user;
- (id)userIncompleteRestoreDirectory;
- (unsigned long long)userPersonaType;
- (id)userRestoreDirectory;
- (id)volumeMountPoint;
- (id)volumesToBackUp;

@end