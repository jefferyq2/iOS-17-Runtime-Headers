
@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching> {
    NSMutableArray * _completionQueue;
    <CRKInternetDateFetching> * _dateFetchingProvider;
    NSDate * _internetDateAndTime;
    double  _uptimeAtInternetDateAndTimeFetch;
}

@property (nonatomic, retain) NSMutableArray *completionQueue;
@property (nonatomic, retain) <CRKInternetDateFetching> *dateFetchingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *internetDateAndTime;
@property (readonly) Class superclass;
@property (nonatomic) double uptimeAtInternetDateAndTimeFetch;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)completionQueue;
- (id)dateFetchingProvider;
- (id)fetchExistingInternetDate;
- (void)fetchInternetDateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)internetDateAndTime;
- (void)setCompletionQueue:(id)arg1;
- (void)setDateFetchingProvider:(id)arg1;
- (void)setInternetDateAndTime:(id)arg1;
- (void)setUptimeAtInternetDateAndTimeFetch:(double)arg1;
- (double)uptimeAtInternetDateAndTimeFetch;

@end