
@protocol AFAnalyticsContextVending <NSObject>

@required

- (void)af_addEntriesToAnalyticsContext:(NSMutableDictionary *)arg1;
- (NSDictionary *)af_analyticsContext;
- (NSArray *)af_dialogIdentifiersForAnalyticsContext;

@end