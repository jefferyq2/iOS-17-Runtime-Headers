
@interface FCFeedTransformationUnreadFirst : NSObject <FCFeedTransforming> {
    FCReadingHistory * _history;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCReadingHistory *history;
@property (readonly) Class superclass;

+ (id)transformationWithReadingHistory:(id)arg1;

- (void).cxx_destruct;
- (id)history;
- (void)setHistory:(id)arg1;
- (id)transformFeedItems:(id)arg1;

@end