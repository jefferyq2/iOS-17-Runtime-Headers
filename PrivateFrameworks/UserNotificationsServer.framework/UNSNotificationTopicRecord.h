
@interface UNSNotificationTopicRecord : NSObject {
    NSString * _displayName;
    NSString * _displayNameLocalizationKey;
    bool  _enablesAlerts;
    bool  _enablesBadges;
    bool  _enablesCarPlay;
    bool  _enablesCriticalAlerts;
    bool  _enablesLockScreen;
    bool  _enablesNotificationCenter;
    bool  _enablesSounds;
    bool  _enablesSpoken;
    bool  _enablesTimeSensitive;
    NSString * _identifier;
    bool  _modalAlertStyle;
    unsigned long long  _priority;
    NSString * _sortIdentifier;
    bool  _supportsAlerts;
    bool  _supportsBadges;
    bool  _supportsCarPlay;
    bool  _supportsCriticalAlerts;
    bool  _supportsLockScreen;
    bool  _supportsNotificationCenter;
    bool  _supportsSounds;
    bool  _supportsSpoken;
    bool  _supportsTimeSensitive;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic) bool enablesAlerts;
@property (nonatomic) bool enablesBadges;
@property (nonatomic) bool enablesCarPlay;
@property (nonatomic) bool enablesCriticalAlerts;
@property (nonatomic) bool enablesLockScreen;
@property (nonatomic) bool enablesNotificationCenter;
@property (nonatomic) bool enablesSounds;
@property (nonatomic) bool enablesSpoken;
@property (nonatomic) bool enablesTimeSensitive;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool modalAlertStyle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSString *sortIdentifier;
@property (nonatomic) bool supportsAlerts;
@property (nonatomic) bool supportsBadges;
@property (nonatomic) bool supportsCarPlay;
@property (nonatomic) bool supportsCriticalAlerts;
@property (nonatomic) bool supportsLockScreen;
@property (nonatomic) bool supportsNotificationCenter;
@property (nonatomic) bool supportsSounds;
@property (nonatomic) bool supportsSpoken;
@property (nonatomic) bool supportsTimeSensitive;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)displayNameLocalizationKey;
- (bool)enablesAlerts;
- (bool)enablesBadges;
- (bool)enablesCarPlay;
- (bool)enablesCriticalAlerts;
- (bool)enablesLockScreen;
- (bool)enablesNotificationCenter;
- (bool)enablesSounds;
- (bool)enablesSpoken;
- (bool)enablesTimeSensitive;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)modalAlertStyle;
- (unsigned long long)priority;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setEnablesAlerts:(bool)arg1;
- (void)setEnablesBadges:(bool)arg1;
- (void)setEnablesCarPlay:(bool)arg1;
- (void)setEnablesCriticalAlerts:(bool)arg1;
- (void)setEnablesLockScreen:(bool)arg1;
- (void)setEnablesNotificationCenter:(bool)arg1;
- (void)setEnablesSounds:(bool)arg1;
- (void)setEnablesSpoken:(bool)arg1;
- (void)setEnablesTimeSensitive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModalAlertStyle:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSortIdentifier:(id)arg1;
- (void)setSupportsAlerts:(bool)arg1;
- (void)setSupportsBadges:(bool)arg1;
- (void)setSupportsCarPlay:(bool)arg1;
- (void)setSupportsCriticalAlerts:(bool)arg1;
- (void)setSupportsLockScreen:(bool)arg1;
- (void)setSupportsNotificationCenter:(bool)arg1;
- (void)setSupportsSounds:(bool)arg1;
- (void)setSupportsSpoken:(bool)arg1;
- (void)setSupportsTimeSensitive:(bool)arg1;
- (id)sortIdentifier;
- (bool)supportsAlerts;
- (bool)supportsBadges;
- (bool)supportsCarPlay;
- (bool)supportsCriticalAlerts;
- (bool)supportsLockScreen;
- (bool)supportsNotificationCenter;
- (bool)supportsSounds;
- (bool)supportsSpoken;
- (bool)supportsTimeSensitive;

@end