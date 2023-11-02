
@interface NURenderJobStatistics : NSObject <NURenderStatistics> {
    NSArray * _dependencies;
    double  _didCompleteTime;
    double  _didPrepareTime;
    double  _didRenderTime;
    double  _requestTime;
    double  _responseTime;
    double  _willCompleteTime;
    double  _willPrepareTime;
    double  _willRenderTime;
}

@property (readonly) double completeDuration;
@property (readonly) double completeLatency;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property double didCompleteTime;
@property double didPrepareTime;
@property double didRenderTime;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) double latency;
@property (readonly) double prepareDuration;
@property (readonly) double prepareLatency;
@property (readonly) double renderDuration;
@property (readonly) double renderLatency;
@property (readonly) double replyLatency;
@property double requestTime;
@property double responseTime;
@property (readonly) Class superclass;
@property (readonly) double totalDuration;
@property double willCompleteTime;
@property double willPrepareTime;
@property double willRenderTime;

+ (void)addStatisticsToHistory:(id)arg1 forJob:(id)arg2 wasCanceled:(bool)arg3;
+ (id)aggregateStatistics:(id)arg1;
+ (id)history;
+ (void)recordJobCreatedToHistory:(id)arg1;

- (void).cxx_destruct;
- (double)completeDuration;
- (double)completeLatency;
- (id)dependencies;
- (id)description;
- (double)didCompleteTime;
- (double)didPrepareTime;
- (double)didRenderTime;
- (double)duration;
- (double)lastRecordedTime;
- (double)latency;
- (double)prepareDuration;
- (double)prepareLatency;
- (double)renderDuration;
- (void)renderJob:(id)arg1 didRunStage:(long long)arg2;
- (void)renderJob:(id)arg1 willRunStage:(long long)arg2;
- (double)renderLatency;
- (double)replyLatency;
- (double)requestTime;
- (double)responseTime;
- (void)setDependencies:(id)arg1;
- (void)setDidCompleteTime:(double)arg1;
- (void)setDidPrepareTime:(double)arg1;
- (void)setDidRenderTime:(double)arg1;
- (void)setRequestTime:(double)arg1;
- (void)setResponseTime:(double)arg1;
- (void)setWillCompleteTime:(double)arg1;
- (void)setWillPrepareTime:(double)arg1;
- (void)setWillRenderTime:(double)arg1;
- (double)totalDuration;
- (double)willCompleteTime;
- (double)willPrepareTime;
- (double)willRenderTime;

@end