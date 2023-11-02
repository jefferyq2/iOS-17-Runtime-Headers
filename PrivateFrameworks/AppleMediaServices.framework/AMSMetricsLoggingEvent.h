
@interface AMSMetricsLoggingEvent : AMSMetricsEvent <NSMutableCopying> {
    NSDictionary * _breadcrumbs;
    NSError * _error;
    NSDictionary * _jsVersions;
}

@property (nonatomic, copy) NSDictionary *breadcrumbs;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, copy) NSString *clientApp;
@property (nonatomic, copy) NSString *clientBuildType;
@property (nonatomic, copy) NSString *currentProcess;
@property (nonatomic, copy) NSString *engagementEventType;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic, copy) NSString *errorTitle;
@property (nonatomic) long long errorUserInfoCryptoCode;
@property (nonatomic) bool errorUserInfoEngagementPresented;
@property (nonatomic) long long errorUserInfoServerErrorCode;
@property (nonatomic) long long errorUserInfoStatusCode;
@property (nonatomic, copy) NSArray *eventDestinations;
@property (nonatomic) double eventEndTime;
@property (nonatomic) bool eventInlineInterruption;
@property (nonatomic, copy) NSString *eventParamEventType;
@property (nonatomic, copy) NSString *eventParamItemId;
@property (nonatomic, copy) NSString *eventParamProductType;
@property (nonatomic, copy) NSString *eventParamSource;
@property (nonatomic, copy) NSString *eventParamSuccess;
@property (nonatomic, copy) NSString *eventPlacement;
@property (nonatomic, copy) NSString *eventServiceType;
@property (nonatomic) double eventStartTime;
@property (nonatomic, copy) NSArray *jsVersionMap;
@property (nonatomic, copy) NSDictionary *jsVersions;
@property (nonatomic, readonly) NSString *lastBreadcrumb;
@property (nonatomic, readonly) double lastBreadcrumbDuration;
@property (nonatomic) long long logLevel;
@property (nonatomic, copy) NSString *originatingURL;
@property (nonatomic, copy) NSString *originatingURLParamBagProfile;
@property (nonatomic, copy) NSString *originatingURLParamBagProfileVersion;
@property (nonatomic, copy) NSString *releaseVersion;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) NSMutableDictionary *underlyingDictionaryForSentry;
@property (nonatomic) long long underlyingErrorCode;
@property (nonatomic, copy) NSString *underlyingErrorDomain;
@property (nonatomic, copy) NSString *underlyingErrorMessage;
@property (nonatomic, copy) NSString *underlyingErrorTitle;
@property (nonatomic) long long underlyingErrorUserInfoCryptoCode;
@property (nonatomic) bool underlyingErrorUserInfoEngagementPresented;
@property (nonatomic) long long underlyingErrorUserInfoServerErrorCode;
@property (nonatomic) long long underlyingErrorUserInfoStatusCode;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *urlParamBagProfile;
@property (nonatomic, copy) NSString *urlParamBagProfileVersion;

+ (id)_propertyValueClassesForKnownProperties;
+ (id)shouldSampleErrorsWithBag:(id)arg1;

- (void).cxx_destruct;
- (id)breadcrumbs;
- (id)category;
- (id)clientApp;
- (id)clientBuildType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentProcess;
- (id)engagementEventType;
- (id)error;
- (long long)errorCode;
- (id)errorDomain;
- (id)errorMessage;
- (id)errorTitle;
- (long long)errorUserInfoCryptoCode;
- (bool)errorUserInfoEngagementPresented;
- (long long)errorUserInfoServerErrorCode;
- (long long)errorUserInfoStatusCode;
- (id)eventDestinations;
- (double)eventEndTime;
- (bool)eventInlineInterruption;
- (id)eventParamEventType;
- (id)eventParamItemId;
- (id)eventParamProductType;
- (id)eventParamSource;
- (id)eventParamSuccess;
- (id)eventPlacement;
- (id)eventServiceType;
- (double)eventStartTime;
- (id)getBuildType;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 error:(id)arg3;
- (id)jsVersionMap;
- (id)jsVersions;
- (id)lastBreadcrumb;
- (double)lastBreadcrumbDuration;
- (long long)logLevel;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingURL;
- (id)originatingURLParamBagProfile;
- (id)originatingURLParamBagProfileVersion;
- (void)prepareEvent;
- (id)releaseVersion;
- (void)setBreadcrumbs:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setClientApp:(id)arg1;
- (void)setClientBuildType:(id)arg1;
- (void)setCurrentProcess:(id)arg1;
- (void)setEngagementEventType:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setErrorUserInfoCryptoCode:(long long)arg1;
- (void)setErrorUserInfoEngagementPresented:(bool)arg1;
- (void)setErrorUserInfoServerErrorCode:(long long)arg1;
- (void)setErrorUserInfoStatusCode:(long long)arg1;
- (void)setEventDestinations:(id)arg1;
- (void)setEventEndTime:(double)arg1;
- (void)setEventInlineInterruption:(bool)arg1;
- (void)setEventParamEventType:(id)arg1;
- (void)setEventParamItemId:(id)arg1;
- (void)setEventParamProductType:(id)arg1;
- (void)setEventParamSource:(id)arg1;
- (void)setEventParamSuccess:(id)arg1;
- (void)setEventPlacement:(id)arg1;
- (void)setEventServiceType:(id)arg1;
- (void)setEventStartTime:(double)arg1;
- (void)setJsVersionMap:(id)arg1;
- (void)setJsVersions:(id)arg1;
- (void)setLogLevel:(long long)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setOriginatingURLParamBagProfile:(id)arg1;
- (void)setOriginatingURLParamBagProfileVersion:(id)arg1;
- (void)setReleaseVersion:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (void)setUnderlyingErrorCode:(long long)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (void)setUnderlyingErrorMessage:(id)arg1;
- (void)setUnderlyingErrorTitle:(id)arg1;
- (void)setUnderlyingErrorUserInfoCryptoCode:(long long)arg1;
- (void)setUnderlyingErrorUserInfoEngagementPresented:(bool)arg1;
- (void)setUnderlyingErrorUserInfoServerErrorCode:(long long)arg1;
- (void)setUnderlyingErrorUserInfoStatusCode:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlParamBagProfile:(id)arg1;
- (void)setUrlParamBagProfileVersion:(id)arg1;
- (id)stringForLogLevel:(long long)arg1;
- (id)subsystem;
- (id)underlyingDictionaryForSentry;
- (id)underlyingDictionaryOverride;
- (long long)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (id)underlyingErrorMessage;
- (id)underlyingErrorTitle;
- (long long)underlyingErrorUserInfoCryptoCode;
- (bool)underlyingErrorUserInfoEngagementPresented;
- (long long)underlyingErrorUserInfoServerErrorCode;
- (long long)underlyingErrorUserInfoStatusCode;
- (id)url;
- (id)urlParamBagProfile;
- (id)urlParamBagProfileVersion;

@end