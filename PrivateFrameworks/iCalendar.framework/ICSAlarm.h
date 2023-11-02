
@interface ICSAlarm : ICSComponent

@property (nonatomic, retain) ICSDateTimeUTCValue *acknowledged;
@property (nonatomic) int action;
@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (nonatomic, retain) NSData *bookmark;
@property (retain) NSString *description;
@property (nonatomic, retain) NSString *relatedTo;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (nonatomic) bool x_apple_default_alarm;
@property (nonatomic) bool x_apple_local_default_alarm;
@property (nonatomic, retain) NSString *x_apple_proximity;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (nonatomic) bool x_apple_travel_default_alarm;
@property (nonatomic, retain) NSString *x_wr_alarmuid;

+ (id)ICSStringFromAction:(int)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)createNoneAlarm;
+ (id)name;
+ (id)parseableDocumentFromICS:(id)arg1;
+ (id)parseableDocumentFromICS:(id)arg1 options:(unsigned long long)arg2;

- (id)acknowledged;
- (int)action;
- (id)bookmark;
- (void)fixAlarm;
- (bool)isNoneAlarm;
- (id)relatedTo;
- (void)setAcknowledged:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setBookmark:(id)arg1;
- (void)setRelatedTo:(id)arg1;
- (void)setX_apple_default_alarm:(bool)arg1;
- (void)setX_apple_local_default_alarm:(bool)arg1;
- (void)setX_apple_proximity:(id)arg1;
- (void)setX_apple_travel_default_alarm:(bool)arg1;
- (void)setX_wr_alarmuid:(id)arg1;
- (bool)x_apple_default_alarm;
- (bool)x_apple_local_default_alarm;
- (id)x_apple_proximity;
- (bool)x_apple_travel_default_alarm;
- (id)x_wr_alarmuid;

@end