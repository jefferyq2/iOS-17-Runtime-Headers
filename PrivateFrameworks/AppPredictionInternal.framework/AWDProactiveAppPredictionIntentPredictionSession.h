
@interface AWDProactiveAppPredictionIntentPredictionSession : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSMutableArray * _actionDatas;
    int  _appActionCoreMotionCurrentMotionLaunches;
    AWDProactiveAppPredictionAppActionSequence * _appActionSequence;
    int  _appForAllActionsCoreMotionCurrentMotionLaunches;
    AWDProactiveAppPredictionAppLaunchSequence * _appSequence;
    int  _consumerSubType;
    int  _currentLOIType;
    int  _dayOfWeek;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engagedActionCacheIndices;
    int  _engagementType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int appActionCoreMotionCurrentMotionLaunches : 1; 
        unsigned int appForAllActionsCoreMotionCurrentMotionLaunches : 1; 
        unsigned int consumerSubType : 1; 
        unsigned int currentLOIType : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int engagementType : 1; 
        unsigned int intentDonationDelay : 1; 
        unsigned int locationDistanceFromHome : 1; 
        unsigned int locationDistanceFromWork : 1; 
        unsigned int logType : 1; 
        unsigned int predictionAge : 1; 
        unsigned int sessionLogVersion : 1; 
        unsigned int timeOfDayInterval : 1; 
        unsigned int totalAppActionAirplaneModeLaunches : 1; 
        unsigned int totalAppActionCoarseTimeOfDayLaunches : 1; 
        unsigned int totalAppActionCurrentDayOfWeekLaunches : 1; 
        unsigned int totalAppActionTimeOfDayLaunches : 1; 
        unsigned int totalAppForAllActionTimeOfDayLaunches : 1; 
        unsigned int totalAppForAllActionsAirplaneModeLaunches : 1; 
        unsigned int totalAppForAllActionsCoarseTimeOfDayLaunches : 1; 
        unsigned int totalAppForAllActionsCurrentDayOfWeekLaunches : 1; 
        unsigned int uiFeedbackDelay : 1; 
        unsigned int inAirplaneMode : 1; 
        unsigned int isInternalBuild : 1; 
    }  _has;
    bool  _inAirplaneMode;
    int  _intentDonationDelay;
    bool  _isInternalBuild;
    int  _locationDistanceFromHome;
    int  _locationDistanceFromWork;
    int  _logType;
    int  _predictionAge;
    NSString * _sessionId;
    int  _sessionLogVersion;
    int  _timeOfDayInterval;
    unsigned long long  _timestamp;
    int  _totalAppActionAirplaneModeLaunches;
    int  _totalAppActionCoarseTimeOfDayLaunches;
    int  _totalAppActionCurrentDayOfWeekLaunches;
    int  _totalAppActionTimeOfDayLaunches;
    int  _totalAppForAllActionTimeOfDayLaunches;
    int  _totalAppForAllActionsAirplaneModeLaunches;
    int  _totalAppForAllActionsCoarseTimeOfDayLaunches;
    int  _totalAppForAllActionsCurrentDayOfWeekLaunches;
    int  _uiFeedbackDelay;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSMutableArray *actionDatas;
@property (nonatomic) int appActionCoreMotionCurrentMotionLaunches;
@property (nonatomic, retain) AWDProactiveAppPredictionAppActionSequence *appActionSequence;
@property (nonatomic) int appForAllActionsCoreMotionCurrentMotionLaunches;
@property (nonatomic, retain) AWDProactiveAppPredictionAppLaunchSequence *appSequence;
@property (nonatomic) int consumerSubType;
@property (nonatomic) int currentLOIType;
@property (nonatomic) int dayOfWeek;
@property (nonatomic, readonly) int*engagedActionCacheIndices;
@property (nonatomic, readonly) unsigned long long engagedActionCacheIndicesCount;
@property (nonatomic) int engagementType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasAppActionCoreMotionCurrentMotionLaunches;
@property (nonatomic, readonly) bool hasAppActionSequence;
@property (nonatomic) bool hasAppForAllActionsCoreMotionCurrentMotionLaunches;
@property (nonatomic, readonly) bool hasAppSequence;
@property (nonatomic) bool hasConsumerSubType;
@property (nonatomic) bool hasCurrentLOIType;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasEngagementType;
@property (nonatomic) bool hasInAirplaneMode;
@property (nonatomic) bool hasIntentDonationDelay;
@property (nonatomic) bool hasIsInternalBuild;
@property (nonatomic) bool hasLocationDistanceFromHome;
@property (nonatomic) bool hasLocationDistanceFromWork;
@property (nonatomic) bool hasLogType;
@property (nonatomic) bool hasPredictionAge;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasSessionLogVersion;
@property (nonatomic) bool hasTimeOfDayInterval;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalAppActionAirplaneModeLaunches;
@property (nonatomic) bool hasTotalAppActionCoarseTimeOfDayLaunches;
@property (nonatomic) bool hasTotalAppActionCurrentDayOfWeekLaunches;
@property (nonatomic) bool hasTotalAppActionTimeOfDayLaunches;
@property (nonatomic) bool hasTotalAppForAllActionTimeOfDayLaunches;
@property (nonatomic) bool hasTotalAppForAllActionsAirplaneModeLaunches;
@property (nonatomic) bool hasTotalAppForAllActionsCoarseTimeOfDayLaunches;
@property (nonatomic) bool hasTotalAppForAllActionsCurrentDayOfWeekLaunches;
@property (nonatomic) bool hasUiFeedbackDelay;
@property (nonatomic) bool inAirplaneMode;
@property (nonatomic) int intentDonationDelay;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic) int locationDistanceFromHome;
@property (nonatomic) int locationDistanceFromWork;
@property (nonatomic) int logType;
@property (nonatomic) int predictionAge;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) int sessionLogVersion;
@property (nonatomic) int timeOfDayInterval;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int totalAppActionAirplaneModeLaunches;
@property (nonatomic) int totalAppActionCoarseTimeOfDayLaunches;
@property (nonatomic) int totalAppActionCurrentDayOfWeekLaunches;
@property (nonatomic) int totalAppActionTimeOfDayLaunches;
@property (nonatomic) int totalAppForAllActionTimeOfDayLaunches;
@property (nonatomic) int totalAppForAllActionsAirplaneModeLaunches;
@property (nonatomic) int totalAppForAllActionsCoarseTimeOfDayLaunches;
@property (nonatomic) int totalAppForAllActionsCurrentDayOfWeekLaunches;
@property (nonatomic) int uiFeedbackDelay;

+ (Class)actionDataType;

- (void).cxx_destruct;
- (int)StringAsConsumerSubType:(id)arg1;
- (int)StringAsCurrentLOIType:(id)arg1;
- (int)StringAsEngagementType:(id)arg1;
- (id)abGroup;
- (id)actionDataAtIndex:(unsigned long long)arg1;
- (id)actionDatas;
- (unsigned long long)actionDatasCount;
- (void)addActionData:(id)arg1;
- (void)addEngagedActionCacheIndices:(int)arg1;
- (int)appActionCoreMotionCurrentMotionLaunches;
- (id)appActionSequence;
- (int)appForAllActionsCoreMotionCurrentMotionLaunches;
- (id)appSequence;
- (void)clearActionDatas;
- (void)clearEngagedActionCacheIndices;
- (int)consumerSubType;
- (id)consumerSubTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)currentLOIType;
- (id)currentLOITypeAsString:(int)arg1;
- (int)dayOfWeek;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)engagedActionCacheIndices;
- (int)engagedActionCacheIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagedActionCacheIndicesCount;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (bool)hasAbGroup;
- (bool)hasAppActionCoreMotionCurrentMotionLaunches;
- (bool)hasAppActionSequence;
- (bool)hasAppForAllActionsCoreMotionCurrentMotionLaunches;
- (bool)hasAppSequence;
- (bool)hasConsumerSubType;
- (bool)hasCurrentLOIType;
- (bool)hasDayOfWeek;
- (bool)hasEngagementType;
- (bool)hasInAirplaneMode;
- (bool)hasIntentDonationDelay;
- (bool)hasIsInternalBuild;
- (bool)hasLocationDistanceFromHome;
- (bool)hasLocationDistanceFromWork;
- (bool)hasLogType;
- (bool)hasPredictionAge;
- (bool)hasSessionId;
- (bool)hasSessionLogVersion;
- (bool)hasTimeOfDayInterval;
- (bool)hasTimestamp;
- (bool)hasTotalAppActionAirplaneModeLaunches;
- (bool)hasTotalAppActionCoarseTimeOfDayLaunches;
- (bool)hasTotalAppActionCurrentDayOfWeekLaunches;
- (bool)hasTotalAppActionTimeOfDayLaunches;
- (bool)hasTotalAppForAllActionTimeOfDayLaunches;
- (bool)hasTotalAppForAllActionsAirplaneModeLaunches;
- (bool)hasTotalAppForAllActionsCoarseTimeOfDayLaunches;
- (bool)hasTotalAppForAllActionsCurrentDayOfWeekLaunches;
- (bool)hasUiFeedbackDelay;
- (unsigned long long)hash;
- (bool)inAirplaneMode;
- (int)intentDonationDelay;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (int)locationDistanceFromHome;
- (int)locationDistanceFromWork;
- (int)logType;
- (void)mergeFrom:(id)arg1;
- (int)predictionAge;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (int)sessionLogVersion;
- (void)setAbGroup:(id)arg1;
- (void)setActionDatas:(id)arg1;
- (void)setAppActionCoreMotionCurrentMotionLaunches:(int)arg1;
- (void)setAppActionSequence:(id)arg1;
- (void)setAppForAllActionsCoreMotionCurrentMotionLaunches:(int)arg1;
- (void)setAppSequence:(id)arg1;
- (void)setConsumerSubType:(int)arg1;
- (void)setCurrentLOIType:(int)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setEngagedActionCacheIndices:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEngagementType:(int)arg1;
- (void)setHasAppActionCoreMotionCurrentMotionLaunches:(bool)arg1;
- (void)setHasAppForAllActionsCoreMotionCurrentMotionLaunches:(bool)arg1;
- (void)setHasConsumerSubType:(bool)arg1;
- (void)setHasCurrentLOIType:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)setHasInAirplaneMode:(bool)arg1;
- (void)setHasIntentDonationDelay:(bool)arg1;
- (void)setHasIsInternalBuild:(bool)arg1;
- (void)setHasLocationDistanceFromHome:(bool)arg1;
- (void)setHasLocationDistanceFromWork:(bool)arg1;
- (void)setHasLogType:(bool)arg1;
- (void)setHasPredictionAge:(bool)arg1;
- (void)setHasSessionLogVersion:(bool)arg1;
- (void)setHasTimeOfDayInterval:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalAppActionAirplaneModeLaunches:(bool)arg1;
- (void)setHasTotalAppActionCoarseTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalAppActionCurrentDayOfWeekLaunches:(bool)arg1;
- (void)setHasTotalAppActionTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalAppForAllActionTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalAppForAllActionsAirplaneModeLaunches:(bool)arg1;
- (void)setHasTotalAppForAllActionsCoarseTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalAppForAllActionsCurrentDayOfWeekLaunches:(bool)arg1;
- (void)setHasUiFeedbackDelay:(bool)arg1;
- (void)setInAirplaneMode:(bool)arg1;
- (void)setIntentDonationDelay:(int)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setLocationDistanceFromHome:(int)arg1;
- (void)setLocationDistanceFromWork:(int)arg1;
- (void)setLogType:(int)arg1;
- (void)setPredictionAge:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionLogVersion:(int)arg1;
- (void)setTimeOfDayInterval:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAppActionAirplaneModeLaunches:(int)arg1;
- (void)setTotalAppActionCoarseTimeOfDayLaunches:(int)arg1;
- (void)setTotalAppActionCurrentDayOfWeekLaunches:(int)arg1;
- (void)setTotalAppActionTimeOfDayLaunches:(int)arg1;
- (void)setTotalAppForAllActionTimeOfDayLaunches:(int)arg1;
- (void)setTotalAppForAllActionsAirplaneModeLaunches:(int)arg1;
- (void)setTotalAppForAllActionsCoarseTimeOfDayLaunches:(int)arg1;
- (void)setTotalAppForAllActionsCurrentDayOfWeekLaunches:(int)arg1;
- (void)setUiFeedbackDelay:(int)arg1;
- (int)timeOfDayInterval;
- (unsigned long long)timestamp;
- (int)totalAppActionAirplaneModeLaunches;
- (int)totalAppActionCoarseTimeOfDayLaunches;
- (int)totalAppActionCurrentDayOfWeekLaunches;
- (int)totalAppActionTimeOfDayLaunches;
- (int)totalAppForAllActionTimeOfDayLaunches;
- (int)totalAppForAllActionsAirplaneModeLaunches;
- (int)totalAppForAllActionsCoarseTimeOfDayLaunches;
- (int)totalAppForAllActionsCurrentDayOfWeekLaunches;
- (int)uiFeedbackDelay;
- (void)writeTo:(id)arg1;

@end