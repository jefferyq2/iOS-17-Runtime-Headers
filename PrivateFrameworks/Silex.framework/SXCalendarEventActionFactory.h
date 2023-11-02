
@interface SXCalendarEventActionFactory : NSObject <SXActionFactory> {
    <SXDateParser> * _dateParser;
}

@property (nonatomic, readonly) <SXDateParser> *dateParser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionForAddition:(id)arg1;
- (id)actionForStartDate:(id)arg1 endDate:(id)arg2;
- (id)actionForURL:(id)arg1;
- (id)dateParser;
- (id)initWithDateParser:(id)arg1;

@end