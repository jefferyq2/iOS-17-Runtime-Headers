
@interface HKNumericChartPoint : NSObject <HKChartPoint> {
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSDate * _xValue;
    id  _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end