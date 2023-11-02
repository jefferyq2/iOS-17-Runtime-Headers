
@interface AFAggregator : NSObject {
    bool  _hasActiveRequest;
    bool  _retryPrefersWWAN;
    bool  _sessionIsRetrying;
    double  _startTime;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) bool hasActiveRequest;

+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2;
+ (void)logCreateAssistant;
+ (void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logEnabledState:(unsigned long long)arg1;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logLoadAssistant;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logPingTimeout;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)logRequestLaunchedApp;
+ (void)logSiriInvokedVia:(long long)arg1;
+ (void)logSiriMediaVolumeAction:(long long)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriPausedMedia;
+ (void)logSiriQuickStopAction:(unsigned long long)arg1;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)logUILockCanceledVTActivation;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)arg1 inCar:(bool)arg2;

- (void)beginSessionRetryPreferringWWAN:(bool)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (unsigned long long)connectionType;
- (bool)hasActiveRequest;
- (void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2;
- (void)recordSessionRetrySuccess;
- (void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(bool)arg2 forTimeInterval:(double)arg3;
- (void)setConnectionType:(unsigned long long)arg1;
- (void)setHasActiveRequest:(bool)arg1;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;

@end