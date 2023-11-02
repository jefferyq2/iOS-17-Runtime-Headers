
@interface WiFiSoftError : NSObject {
    SDRDiagnosticReporter * _abcReporter;
    NSMutableArray * _abcSubmissionTimestamps;
    NSMutableArray * _askToLaunchTapToRadarTimestamps;
    double  _creationDate;
    long long  _enabled;
    NSString * _hudOffset;
    NSMutableArray * _hudTimestamps;
    long long  _intervalForMaxNonUIActions;
    long long  _intervalForMaxUIActions;
    NSNumber * _lastTimestamp;
    NSMutableString * _logMessage;
    long long  _maxLogMessageLength;
    long long  _maxNonUIActions;
    long long  _maxOccurrences;
    long long  _maxUIActions;
    NSString * _metricEventName;
    long long  _metricSubmissionSamplingRate;
    long long  _metricsEnabled;
    NSString * _name;
    NSMutableArray * _occurrenceTimestamps;
    NSMutableArray * _simulateCrashTimestamps;
    NSMutableArray * _tapToRadarTimestamps;
}

@property (nonatomic, retain) SDRDiagnosticReporter *abcReporter;
@property (nonatomic, retain) NSMutableArray *abcSubmissionTimestamps;
@property (nonatomic, retain) NSMutableArray *askToLaunchTapToRadarTimestamps;
@property (nonatomic) double creationDate;
@property (nonatomic) long long enabled;
@property (nonatomic) NSString *hudOffset;
@property (nonatomic, retain) NSMutableArray *hudTimestamps;
@property (nonatomic, readonly) long long intervalForMaxNonUIActions;
@property (nonatomic, readonly) long long intervalForMaxUIActions;
@property (nonatomic, retain) NSNumber *lastTimestamp;
@property (nonatomic, retain) NSMutableString *logMessage;
@property (nonatomic, readonly) long long maxLogMessageLength;
@property (nonatomic, readonly) long long maxNonUIActions;
@property (nonatomic, readonly) long long maxOccurrences;
@property (nonatomic, readonly) long long maxUIActions;
@property (nonatomic, retain) NSString *metricEventName;
@property (nonatomic, readonly) long long metricSubmissionSamplingRate;
@property (nonatomic) long long metricsEnabled;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *occurrenceTimestamps;
@property (nonatomic, retain) NSMutableArray *simulateCrashTimestamps;
@property (nonatomic, retain) NSMutableArray *tapToRadarTimestamps;

+ (void)_cloudAssetsFetchHandler:(id)arg1;
+ (void)_submitSummaryReportMetric;
+ (void)_updateHUDWithMessage:(id)arg1;

- (void).cxx_destruct;
- (void)_addConfigurationData:(id)arg1;
- (void)_addGenericMetricData:(id)arg1;
- (long long)_countOf:(id)arg1 withinInterval:(double)arg2;
- (bool)_maxNonUIActionsReachedFor:(id)arg1;
- (bool)_maxUIActionsReachedFor:(id)arg1;
- (void)_recordCurrentTimestampIn:(id)arg1;
- (void)_resetCount;
- (id)abcReporter;
- (id)abcSubmissionTimestamps;
- (id)appendLogMessage:(id)arg1 includeTimestamp:(bool)arg2;
- (id)askToLaunchTapToRadarTimestamps;
- (bool)askToLaunchTapToRadarWithMessage:(id)arg1;
- (bool)askToLaunchTapToRadarWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearLogMessage;
- (long long)count;
- (double)creationDate;
- (void)dealloc;
- (long long)enabled;
- (id)hudOffset;
- (id)hudTimestamps;
- (id)incrementCount;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 andParams:(id)arg2;
- (long long)intervalForMaxNonUIActions;
- (long long)intervalForMaxUIActions;
- (id)lastTimestamp;
- (id)logMessage;
- (long long)maxLogMessageLength;
- (long long)maxNonUIActions;
- (long long)maxOccurrences;
- (long long)maxUIActions;
- (id)metricEventName;
- (long long)metricSubmissionSamplingRate;
- (long long)metricsEnabled;
- (id)name;
- (id)occurrenceTimestamps;
- (long long)recentCountWithinTimeInterval:(double)arg1;
- (void)resetCount;
- (void)setAbcReporter:(id)arg1;
- (void)setAbcSubmissionTimestamps:(id)arg1;
- (void)setAskToLaunchTapToRadarTimestamps:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setEnabled:(long long)arg1;
- (void)setHudOffset:(id)arg1;
- (void)setHudTimestamps:(id)arg1;
- (void)setLastTimestamp:(id)arg1;
- (void)setLogMessage:(id)arg1;
- (void)setMetricEventName:(id)arg1;
- (void)setMetricsEnabled:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOccurrenceTimestamps:(id)arg1;
- (void)setSimulateCrashTimestamps:(id)arg1;
- (void)setTapToRadarTimestamps:(id)arg1;
- (id)simulateCrashTimestamps;
- (id)submitABCReportWithReason:(id)arg1;
- (id)submitMetric;
- (id)submitMetricWithData:(id)arg1;
- (id)tapToRadarTimestamps;
- (id)tapToRadarWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)updateHUDWithMessage:(id)arg1;
- (void)writeLogMessage;

@end