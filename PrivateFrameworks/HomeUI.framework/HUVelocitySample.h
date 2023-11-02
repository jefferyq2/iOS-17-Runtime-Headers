
@interface HUVelocitySample : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _end;
    double  _endTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _start;
    double  _startTime;
}

@property (nonatomic, readonly) double dt;
@property (nonatomic) struct CGPoint { double x1; double x2; } end;
@property (nonatomic) double endTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } start;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } translation;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;

+ (id)sampleWithStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 startTime:(double)arg3 endTime:(double)arg4;

- (double)dt;
- (struct CGPoint { double x1; double x2; })end;
- (double)endTime;
- (bool)isSampleDistinctFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnd:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEndTime:(double)arg1;
- (void)setStart:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartTime:(double)arg1;
- (struct CGPoint { double x1; double x2; })start;
- (double)startTime;
- (struct CGVector { double x1; double x2; })translation;
- (struct CGVector { double x1; double x2; })velocity;

@end