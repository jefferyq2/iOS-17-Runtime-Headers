
@interface AMSUserNotificationAction : NSObject {
    NSURL * _defaultURL;
    NSString * _identifier;
    AMSMetricsEvent * _metricsEvent;
    NSURLRequest * _request;
    long long  _style;
    NSString * _systemImageName;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSURL *defaultURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *systemImageName;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long un_ActionOptions;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)defaultURL;
- (id)generateUserInfoAction;
- (id)identifier;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithUserInfoAction:(id)arg1;
- (id)metricsEvent;
- (id)request;
- (void)setDefaultURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)style;
- (id)systemImageName;
- (id)title;
- (unsigned long long)un_ActionOptions;
- (id)userInfo;

@end