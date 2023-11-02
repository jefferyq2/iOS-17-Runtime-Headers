
@interface SACalendar : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timeZoneId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)calendar;
+ (id)calendarWithDictionary:(id)arg1 context:(id)arg2;

- (id)date;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDate:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_timeZone;

@end