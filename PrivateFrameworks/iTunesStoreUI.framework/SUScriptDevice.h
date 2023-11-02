
@interface SUScriptDevice : SUScriptObject {
    NSMutableArray * _scriptFunctions;
}

@property (readonly) NSString *UTIImage;
@property (readonly) NSString *UTIMovie;
@property (readonly) NSString *UTIText;
@property (readonly) id accessibilityBoldTextEnabled;
@property (readonly) id accessibilityButtonShapesEnabled;
@property (readonly) id accessibilityDarkenSystemColors;
@property (readonly) id accessibilityEnhanceBackgroundContrast;
@property (readonly) id accessibilityMotionAutoPlayVideo;
@property (readonly) SUScriptColor *accessibilitySingleColor;
@property (readonly) id accessibilitySingleColorSelected;
@property (readonly) id accessibilityUseDarkerKeyboard;
@property (readonly) long long activeNetworkType;
@property (readonly) NSArray *automaticDownloadMediaTypes;
@property (readonly) NSString *capabilityNameEmail;
@property (readonly) NSString *capabilityNameExplicitMedia;
@property (readonly) NSString *capabilityNameHDVideo;
@property (readonly) NSString *capabilityNameHDVideo1080p;
@property (readonly) NSString *capabilityNameHDVideo720p;
@property (readonly) NSString *capabilityNamePodcasts;
@property (readonly) NSString *capabilityNameWiFi;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSNumber *diskSpaceAvailable;
@property (readonly) SUScriptDictionary *diskUsageDictionary;
@property (readonly) long long freeSpaceEffortLevelAutomaticOnly;
@property (readonly) long long freeSpaceEffortLevelDoNothing;
@property (readonly) long long freeSpaceEffortLevelManualSpaceManagement;
@property (readonly) long long freeSpaceEffortLevelPromptUser;
@property (readonly) NSString *freeSpaceOptionEffortLevel;
@property (readonly) long long hardwareType;
@property (readonly) long long hardwareTypeAppleTVJ33;
@property (readonly) long long hardwareTypeAppleTVK66;
@property (readonly) long long hardwareTypeIPadJ1;
@property (readonly) long long hardwareTypeIPadJ2;
@property (readonly) long long hardwareTypeIPadJ2a;
@property (readonly) long long hardwareTypeIPadK93;
@property (readonly) long long hardwareTypeIPadK93a;
@property (readonly) long long hardwareTypeIPadK94;
@property (readonly) long long hardwareTypeIPadK95;
@property (readonly) long long hardwareTypeIPhoneM68;
@property (readonly) long long hardwareTypeIPhoneN82;
@property (readonly) long long hardwareTypeIPhoneN88;
@property (readonly) long long hardwareTypeIPhoneN90;
@property (readonly) long long hardwareTypeIPhoneN92;
@property (readonly) long long hardwareTypeIPhoneN94;
@property (readonly) long long hardwareTypeIPodTouchN18;
@property (readonly) long long hardwareTypeIPodTouchN45;
@property (readonly) long long hardwareTypeIPodTouchN72;
@property (readonly) long long hardwareTypeIPodTouchN81;
@property (readonly) long long hardwareTypeIPodTouchN81a;
@property (readonly) long long hardwareTypeUnknown;
@property (readonly) long long hardwareTypeWildcatK48;
@property (readonly) NSNumber *mainScreenScale;
@property (readonly) NSNumber *metricsPostFrequencyOverride;
@property (readonly) id needsToneRegrantOption;
@property (readonly) long long networkType2G;
@property (readonly) long long networkType3G;
@property (readonly) long long networkType4G;
@property (readonly) long long networkType5G;
@property (readonly) long long networkType6G;
@property (readonly) long long networkType7G;
@property (readonly) long long networkType8G;
@property (readonly) long long networkType9G;
@property (readonly) long long networkTypeNone;
@property (readonly) long long networkTypeWiFi;
@property (readonly) NSString *orientationStringLandscapeLeft;
@property (readonly) NSString *orientationStringLandscapeRight;
@property (readonly) NSString *orientationStringPortrait;
@property (readonly) NSString *orientationStringPortraitUpsideDown;
@property (readonly) NSString *restrictionAccountModificationAllowed;
@property (readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property (readonly) NSString *restrictionAllowVoiceDialing;
@property (readonly) NSString *restrictionAppInstallationAllowed;
@property (readonly) NSString *restrictionAppRemovalAllowed;
@property (readonly) NSString *restrictionBookStoreAllowed;
@property (readonly) NSString *restrictionBookStoreEroticaAllowed;
@property (readonly) long long restrictionBoolNo;
@property (readonly) long long restrictionBoolNoData;
@property (readonly) long long restrictionBoolYes;
@property (readonly) NSString *restrictionCameraAllowed;
@property (readonly) NSString *restrictionCellularHDUploadsAllowed;
@property (readonly) NSString *restrictionITunesAllowed;
@property (readonly) NSString *restrictionITunesSocialAllowed;
@property (readonly) NSString *restrictionMultiplayerGamingAllowed;
@property (readonly) NSString *restrictionSafariAllowed;
@property (readonly) NSString *restrictionScreenShotAllowed;
@property (readonly) NSString *restrictionTypeApplications;
@property (readonly) NSString *restrictionTypeMovies;
@property (readonly) NSString *restrictionTypeTelevision;
@property (readonly) NSString *restrictionVideoConferencingAllowed;
@property (readonly) NSString *restrictionYouTubeAllowed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)UTIForURL:(id)arg1;
- (id)UTIImage;
- (id)UTIMovie;
- (id)UTIText;
- (void)_accessibilitySettingsChangedNotification:(id)arg1;
- (void)_addScriptFunction:(id)arg1;
- (void)_autoDownloadKindsChangedNotification:(id)arg1;
- (id)_className;
- (long long)_deviceCapabilityForString:(id)arg1;
- (void)_removeScriptFunction:(id)arg1;
- (id)accessibilityBoldTextEnabled;
- (id)accessibilityButtonShapesEnabled;
- (id)accessibilityDarkenSystemColors;
- (id)accessibilityEnhanceBackgroundContrast;
- (id)accessibilityMotionAutoPlayVideo;
- (id)accessibilitySingleColor;
- (id)accessibilitySingleColorSelected;
- (id)accessibilityUseDarkerKeyboard;
- (long long)activeNetworkType;
- (id)attributeKeys;
- (id)automaticDownloadMediaTypes;
- (long long)boolValueForRestriction:(id)arg1;
- (id)capabilityNameEmail;
- (id)capabilityNameExplicitMedia;
- (id)capabilityNameHDVideo;
- (id)capabilityNameHDVideo1080p;
- (id)capabilityNameHDVideo720p;
- (id)capabilityNamePodcasts;
- (id)capabilityNameWiFi;
- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2;
- (void)dealloc;
- (unsigned int)deviceTypeIdentifier;
- (id)diskSpaceAvailable;
- (id)diskUsageDictionary;
- (long long)freeSpaceEffortLevelAutomaticOnly;
- (long long)freeSpaceEffortLevelDoNothing;
- (long long)freeSpaceEffortLevelManualSpaceManagement;
- (long long)freeSpaceEffortLevelPromptUser;
- (id)freeSpaceOptionEffortLevel;
- (id)getMachineIdentifierForAccountIdentifier:(id)arg1;
- (long long)hardwareType;
- (long long)hardwareTypeAppleTVJ33;
- (long long)hardwareTypeAppleTVK66;
- (long long)hardwareTypeIPadJ1;
- (long long)hardwareTypeIPadJ2;
- (long long)hardwareTypeIPadJ2a;
- (long long)hardwareTypeIPadK93;
- (long long)hardwareTypeIPadK93a;
- (long long)hardwareTypeIPadK94;
- (long long)hardwareTypeIPadK95;
- (long long)hardwareTypeIPhoneM68;
- (long long)hardwareTypeIPhoneN82;
- (long long)hardwareTypeIPhoneN88;
- (long long)hardwareTypeIPhoneN90;
- (long long)hardwareTypeIPhoneN92;
- (long long)hardwareTypeIPhoneN94;
- (long long)hardwareTypeIPodTouchN18;
- (long long)hardwareTypeIPodTouchN45;
- (long long)hardwareTypeIPodTouchN72;
- (long long)hardwareTypeIPodTouchN81;
- (long long)hardwareTypeIPodTouchN81a;
- (long long)hardwareTypeUnknown;
- (long long)hardwareTypeWildcatK48;
- (id)hasCapability:(id)arg1;
- (id)init;
- (id)isRestrictionLockedDown:(id)arg1;
- (id)mainScreenScale;
- (id)metricsPostFrequencyOverride;
- (id)needsToneRegrantOption;
- (long long)networkType2G;
- (long long)networkType3G;
- (long long)networkType4G;
- (long long)networkType5G;
- (long long)networkType6G;
- (long long)networkType7G;
- (long long)networkType8G;
- (long long)networkType9G;
- (long long)networkTypeNone;
- (long long)networkTypeWiFi;
- (id)orientationStringLandscapeLeft;
- (id)orientationStringLandscapeRight;
- (id)orientationStringPortrait;
- (id)orientationStringPortraitUpsideDown;
- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)restrictionAccountModificationAllowed;
- (id)restrictionAllowGlobalBackgroundFetchWhenRoaming;
- (id)restrictionAllowVoiceDialing;
- (id)restrictionAppInstallationAllowed;
- (id)restrictionAppRemovalAllowed;
- (id)restrictionBookStoreAllowed;
- (id)restrictionBookStoreEroticaAllowed;
- (long long)restrictionBoolNo;
- (long long)restrictionBoolNoData;
- (long long)restrictionBoolYes;
- (id)restrictionCameraAllowed;
- (id)restrictionCellularHDUploadsAllowed;
- (id)restrictionExplicitMedia;
- (id)restrictionITunesAllowed;
- (id)restrictionITunesSocialAllowed;
- (id)restrictionLevelForType:(id)arg1;
- (id)restrictionMultiplayerGamingAllowed;
- (id)restrictionSafariAllowed;
- (id)restrictionScreenShotAllowed;
- (id)restrictionTypeApplications;
- (id)restrictionTypeMovies;
- (id)restrictionTypeTelevision;
- (id)restrictionVideoConferencingAllowed;
- (id)restrictionYouTubeAllowed;
- (id)scriptAttributeKeys;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setDiskUsageDictionary:(id)arg1;
- (void)setValueForRestriction:(id)arg1 enabled:(id)arg2;
- (id)valueForRestriction:(id)arg1;

@end