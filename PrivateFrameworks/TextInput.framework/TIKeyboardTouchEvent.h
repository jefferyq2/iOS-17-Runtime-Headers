
@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    int  _fingerID;
    long long  _forcedKeyCode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    union { 
        long long integerValue; 
        struct { 
            unsigned int continuousPathState : 4; 
        } fields; 
    }  _mask;
    long long  _pathIndex;
    double  _radius;
    int  _stage;
    double  _timestamp;
}

@property (nonatomic, readonly) int continuousPathState;
@property (nonatomic, readonly) int fingerID;
@property (nonatomic, readonly) long long forcedKeyCode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) long long pathIndex;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) int stage;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;

- (int)continuousPathState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)fingerID;
- (long long)forcedKeyCode;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 continuousPathState:(int)arg8;
- (struct CGPoint { double x1; double x2; })location;
- (long long)pathIndex;
- (double)radius;
- (id)shortDescription;
- (int)stage;
- (double)timestamp;

@end