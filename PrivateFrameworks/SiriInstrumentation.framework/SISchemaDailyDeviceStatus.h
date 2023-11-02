
@interface SISchemaDailyDeviceStatus : SISchemaTopLevelUnionType {
    SISchemaActiveStatus * _activeStatus;
    SISchemaAggregatedMetrics * _aggregatedMetrics;
    long long  _assistantRecordPublishTimestampMs;
    double  _availableDeviceStorageInMB;
    long long  _clientDeviceSamplingTimestampMs;
    NSString * _deviceBuild;
    unsigned int  _deviceCapacityInGB;
    NSString * _deviceOs;
    NSString * _deviceType;
    NSArray * _enabledDictationLocales;
    SISchemaEnabledStatus * _enabledStatus;
    struct { 
        unsigned int clientDeviceSamplingTimestampMs : 1; 
        unsigned int assistantRecordPublishTimestampMs : 1; 
        unsigned int spokenNotificationsproxCardSeen : 1; 
        unsigned int spokenNotificationsControlCenterModuleEnabled : 1; 
        unsigned int spokenNotificationsWhitelistSettings : 1; 
        unsigned int siriInputLocale : 1; 
        unsigned int queuedAtTimestampHourInMs : 1; 
        unsigned int storeCountryCode : 1; 
        unsigned int deviceCapacityInGB : 1; 
        unsigned int availableDeviceStorageInMB : 1; 
    }  _has;
    bool  _hasActiveStatus;
    bool  _hasAggregatedMetrics;
    bool  _hasDeviceBuild;
    bool  _hasDeviceOs;
    bool  _hasDeviceType;
    bool  _hasEnabledStatus;
    bool  _hasLocale;
    bool  _hasModelNumber;
    bool  _hasMultiUserSetup;
    bool  _hasMultiUserState;
    bool  _hasPersonalization;
    bool  _hasRegionInfo;
    bool  _hasSharedUserId;
    bool  _hasSiriDeviceID;
    bool  _hasSiriSpeechID;
    bool  _hasStorefrontId;
    NSArray * _linkedAccessoryStates;
    NSString * _locale;
    NSString * _modelNumber;
    SISchemaMultiUserSetup * _multiUserSetup;
    SISchemaMultiUserState * _multiUserState;
    SISchemaPersonalization * _personalization;
    unsigned long long  _queuedAtTimestampHourInMs;
    NSString * _regionInfo;
    NSString * _sharedUserId;
    NSString * _siriDeviceID;
    int  _siriInputLocale;
    NSString * _siriSpeechID;
    bool  _spokenNotificationsControlCenterModuleEnabled;
    int  _spokenNotificationsWhitelistSettings;
    bool  _spokenNotificationsproxCardSeen;
    int  _storeCountryCode;
    NSString * _storefrontId;
}

@property (nonatomic, retain) SISchemaActiveStatus *activeStatus;
@property (nonatomic, retain) SISchemaAggregatedMetrics *aggregatedMetrics;
@property (nonatomic) long long assistantRecordPublishTimestampMs;
@property (nonatomic) double availableDeviceStorageInMB;
@property (nonatomic) long long clientDeviceSamplingTimestampMs;
@property (nonatomic, copy) NSString *deviceBuild;
@property (nonatomic) unsigned int deviceCapacityInGB;
@property (nonatomic, copy) NSString *deviceOs;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *enabledDictationLocales;
@property (nonatomic, retain) SISchemaEnabledStatus *enabledStatus;
@property (nonatomic) bool hasActiveStatus;
@property (nonatomic) bool hasAggregatedMetrics;
@property (nonatomic) bool hasAssistantRecordPublishTimestampMs;
@property (nonatomic) bool hasAvailableDeviceStorageInMB;
@property (nonatomic) bool hasClientDeviceSamplingTimestampMs;
@property (nonatomic) bool hasDeviceBuild;
@property (nonatomic) bool hasDeviceCapacityInGB;
@property (nonatomic) bool hasDeviceOs;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic) bool hasEnabledStatus;
@property (nonatomic) bool hasLocale;
@property (nonatomic) bool hasModelNumber;
@property (nonatomic) bool hasMultiUserSetup;
@property (nonatomic) bool hasMultiUserState;
@property (nonatomic) bool hasPersonalization;
@property (nonatomic) bool hasQueuedAtTimestampHourInMs;
@property (nonatomic) bool hasRegionInfo;
@property (nonatomic) bool hasSharedUserId;
@property (nonatomic) bool hasSiriDeviceID;
@property (nonatomic) bool hasSiriInputLocale;
@property (nonatomic) bool hasSiriSpeechID;
@property (nonatomic) bool hasSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) bool hasSpokenNotificationsWhitelistSettings;
@property (nonatomic) bool hasSpokenNotificationsproxCardSeen;
@property (nonatomic) bool hasStoreCountryCode;
@property (nonatomic) bool hasStorefrontId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *linkedAccessoryStates;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, retain) SISchemaMultiUserSetup *multiUserSetup;
@property (nonatomic, retain) SISchemaMultiUserState *multiUserState;
@property (nonatomic, retain) SISchemaPersonalization *personalization;
@property (nonatomic) unsigned long long queuedAtTimestampHourInMs;
@property (nonatomic, copy) NSString *regionInfo;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic, copy) NSString *siriDeviceID;
@property (nonatomic) int siriInputLocale;
@property (nonatomic, copy) NSString *siriSpeechID;
@property (nonatomic) bool spokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) int spokenNotificationsWhitelistSettings;
@property (nonatomic) bool spokenNotificationsproxCardSeen;
@property (nonatomic) int storeCountryCode;
@property (nonatomic, copy) NSString *storefrontId;

- (void).cxx_destruct;
- (id)activeStatus;
- (void)addEnabledDictationLocales:(id)arg1;
- (void)addLinkedAccessoryState:(id)arg1;
- (id)aggregatedMetrics;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (long long)assistantRecordPublishTimestampMs;
- (double)availableDeviceStorageInMB;
- (void)clearEnabledDictationLocales;
- (void)clearLinkedAccessoryState;
- (long long)clientDeviceSamplingTimestampMs;
- (void)deleteActiveStatus;
- (void)deleteAggregatedMetrics;
- (void)deleteAssistantRecordPublishTimestampMs;
- (void)deleteAvailableDeviceStorageInMB;
- (void)deleteClientDeviceSamplingTimestampMs;
- (void)deleteDeviceBuild;
- (void)deleteDeviceCapacityInGB;
- (void)deleteDeviceOs;
- (void)deleteDeviceType;
- (void)deleteEnabledDictationLocales;
- (void)deleteEnabledStatus;
- (void)deleteLinkedAccessoryState;
- (void)deleteLocale;
- (void)deleteModelNumber;
- (void)deleteMultiUserSetup;
- (void)deleteMultiUserState;
- (void)deletePersonalization;
- (void)deleteQueuedAtTimestampHourInMs;
- (void)deleteRegionInfo;
- (void)deleteSharedUserId;
- (void)deleteSiriDeviceID;
- (void)deleteSiriInputLocale;
- (void)deleteSiriSpeechID;
- (void)deleteSpokenNotificationsControlCenterModuleEnabled;
- (void)deleteSpokenNotificationsWhitelistSettings;
- (void)deleteSpokenNotificationsproxCardSeen;
- (void)deleteStoreCountryCode;
- (void)deleteStorefrontId;
- (id)deviceBuild;
- (unsigned int)deviceCapacityInGB;
- (id)deviceOs;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (id)enabledDictationLocales;
- (id)enabledDictationLocalesAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledDictationLocalesCount;
- (id)enabledStatus;
- (int)getAnyEventType;
- (bool)hasActiveStatus;
- (bool)hasAggregatedMetrics;
- (bool)hasAssistantRecordPublishTimestampMs;
- (bool)hasAvailableDeviceStorageInMB;
- (bool)hasClientDeviceSamplingTimestampMs;
- (bool)hasDeviceBuild;
- (bool)hasDeviceCapacityInGB;
- (bool)hasDeviceOs;
- (bool)hasDeviceType;
- (bool)hasEnabledStatus;
- (bool)hasLocale;
- (bool)hasModelNumber;
- (bool)hasMultiUserSetup;
- (bool)hasMultiUserState;
- (bool)hasPersonalization;
- (bool)hasQueuedAtTimestampHourInMs;
- (bool)hasRegionInfo;
- (bool)hasSharedUserId;
- (bool)hasSiriDeviceID;
- (bool)hasSiriInputLocale;
- (bool)hasSiriSpeechID;
- (bool)hasSpokenNotificationsControlCenterModuleEnabled;
- (bool)hasSpokenNotificationsWhitelistSettings;
- (bool)hasSpokenNotificationsproxCardSeen;
- (bool)hasStoreCountryCode;
- (bool)hasStorefrontId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkedAccessoryStateAtIndex:(unsigned long long)arg1;
- (unsigned long long)linkedAccessoryStateCount;
- (id)linkedAccessoryStates;
- (id)locale;
- (id)modelNumber;
- (id)multiUserSetup;
- (id)multiUserState;
- (id)personalization;
- (id)qualifiedMessageName;
- (unsigned long long)queuedAtTimestampHourInMs;
- (bool)readFrom:(id)arg1;
- (id)regionInfo;
- (void)setActiveStatus:(id)arg1;
- (void)setAggregatedMetrics:(id)arg1;
- (void)setAssistantRecordPublishTimestampMs:(long long)arg1;
- (void)setAvailableDeviceStorageInMB:(double)arg1;
- (void)setClientDeviceSamplingTimestampMs:(long long)arg1;
- (void)setDeviceBuild:(id)arg1;
- (void)setDeviceCapacityInGB:(unsigned int)arg1;
- (void)setDeviceOs:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setEnabledDictationLocales:(id)arg1;
- (void)setEnabledStatus:(id)arg1;
- (void)setHasActiveStatus:(bool)arg1;
- (void)setHasAggregatedMetrics:(bool)arg1;
- (void)setHasAssistantRecordPublishTimestampMs:(bool)arg1;
- (void)setHasAvailableDeviceStorageInMB:(bool)arg1;
- (void)setHasClientDeviceSamplingTimestampMs:(bool)arg1;
- (void)setHasDeviceBuild:(bool)arg1;
- (void)setHasDeviceCapacityInGB:(bool)arg1;
- (void)setHasDeviceOs:(bool)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEnabledStatus:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setHasModelNumber:(bool)arg1;
- (void)setHasMultiUserSetup:(bool)arg1;
- (void)setHasMultiUserState:(bool)arg1;
- (void)setHasPersonalization:(bool)arg1;
- (void)setHasQueuedAtTimestampHourInMs:(bool)arg1;
- (void)setHasRegionInfo:(bool)arg1;
- (void)setHasSharedUserId:(bool)arg1;
- (void)setHasSiriDeviceID:(bool)arg1;
- (void)setHasSiriInputLocale:(bool)arg1;
- (void)setHasSiriSpeechID:(bool)arg1;
- (void)setHasSpokenNotificationsControlCenterModuleEnabled:(bool)arg1;
- (void)setHasSpokenNotificationsWhitelistSettings:(bool)arg1;
- (void)setHasSpokenNotificationsproxCardSeen:(bool)arg1;
- (void)setHasStoreCountryCode:(bool)arg1;
- (void)setHasStorefrontId:(bool)arg1;
- (void)setLinkedAccessoryStates:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setMultiUserSetup:(id)arg1;
- (void)setMultiUserState:(id)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setQueuedAtTimestampHourInMs:(unsigned long long)arg1;
- (void)setRegionInfo:(id)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setSiriDeviceID:(id)arg1;
- (void)setSiriInputLocale:(int)arg1;
- (void)setSiriSpeechID:(id)arg1;
- (void)setSpokenNotificationsControlCenterModuleEnabled:(bool)arg1;
- (void)setSpokenNotificationsWhitelistSettings:(int)arg1;
- (void)setSpokenNotificationsproxCardSeen:(bool)arg1;
- (void)setStoreCountryCode:(int)arg1;
- (void)setStorefrontId:(id)arg1;
- (id)sharedUserId;
- (id)siriDeviceID;
- (int)siriInputLocale;
- (id)siriSpeechID;
- (bool)spokenNotificationsControlCenterModuleEnabled;
- (int)spokenNotificationsWhitelistSettings;
- (bool)spokenNotificationsproxCardSeen;
- (int)storeCountryCode;
- (id)storefrontId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end