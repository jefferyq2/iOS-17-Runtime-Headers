
@interface HKHealthChartPoint : NSObject <HKChartPoint> {
    NSNumber * _avg;
    NSDate * _date;
    NSNumber * _max;
    NSNumber * _min;
    NSNumber * _mostRecent;
    NSNumber * _sum;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (id)initWithDataSourceValue:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4;
- (id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4 sourceTimeZone:(id)arg5;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end