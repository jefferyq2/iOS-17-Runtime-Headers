
@interface SGNLEventSuggestionsMetrics : NSObject {
    SGMDDLinkShown * _ddLinkShown;
    SGMNLEventInBanner * _nlEvent;
}

@property (nonatomic, retain) SGMDDLinkShown *ddLinkShown;
@property (nonatomic, retain) SGMNLEventInBanner *nlEvent;

+ (unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3;
+ (struct SGMEventDurationAdj_ { unsigned long long x1; })diffEventDurationChangedFrom:(double)arg1 to:(double)arg2;
+ (struct SGMEventLocationAdj_ { unsigned long long x1; })diffEventLocationFrom:(id)arg1 to:(id)arg2;
+ (struct SGMEventDateAdj_ { unsigned long long x1; })diffEventStartDateChangedFrom:(id)arg1 oldTimeZone:(id)arg2 to:(id)arg3 newTimeZone:(id)arg4;
+ (struct SGMEventStringAdj_ { unsigned long long x1; })diffEventTitleChangedFrom:(id)arg1 to:(id)arg2;
+ (id)getAddedAttendeesCountFromEKEvent:(id)arg1;
+ (id)instance;
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 eventType:(id)arg3 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x1; })arg4 harvestedEKEvent:(id)arg5 curatedEKEvent:(id)arg6;
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 eventType:(id)arg3 languageID:(id)arg4 startDate:(id)arg5 confidenceScore:(float)arg6 participantCount:(BOOL)arg7 significantSender:(struct SGMBoolOption_ { unsigned long long x1; })arg8 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x1; })arg9 usedBubblesCount:(BOOL)arg10 titleSource:(struct SGMEventTitleSource_ { unsigned long long x1; })arg11 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x1; })arg12 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x1; })arg13 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x1; })arg14 locationAdj:(struct SGMEventLocationAdj_ { unsigned long long x1; })arg15 addedAttendeesCount:(id)arg16 calendarAppUsageLevel:(float)arg17 mailAppUsageLevel:(BOOL)arg18 messagesAppUsageLevel:(BOOL)arg19;
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 harvestedEKEvent:(id)arg3 curatedEKEvent:(id)arg4;
+ (void)recordInteractionForEventWithInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 harvestedSGEvent:(id)arg3 curatedEKEvent:(id)arg4;
+ (void)recordUserInteraction:(unsigned long long)arg1 withLinkInApplication:(long long)arg2 eventPrefillMode:(unsigned long long)arg3 eventTypeClassification:(id)arg4 proposedEvent:(id)arg5 confirmedEvent:(id)arg6;
+ (double)round:(double)arg1 toSignificantFigures:(long long)arg2;
+ (void)shownViaDataDetectorsLinkInApp:(long long)arg1;

- (void).cxx_destruct;
- (id)ddLinkShown;
- (id)init;
- (id)nlEvent;
- (void)setDdLinkShown:(id)arg1;
- (void)setNlEvent:(id)arg1;

@end