
@interface CAMExposureCommand : CAMCaptureCommand {
    long long  __exposureMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  __exposurePointOfInterest;
}

@property (nonatomic, readonly) long long _exposureMode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _exposurePointOfInterest;

- (long long)_exposureMode;
- (struct CGPoint { double x1; double x2; })_exposurePointOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExposureMode:(long long)arg1;
- (id)initWithExposureMode:(long long)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2;

@end