
@interface UIPushBehavior : UIDynamicBehavior {
    bool  _active;
    double  _angle;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _forceVector;
    int  _i;
    double  _magnitude;
    long long  _mode;
    NSMutableDictionary * _targetPoints;
    double  _timeInterval;
}

@property (nonatomic) bool active;
@property (nonatomic) double angle;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) double magnitude;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) struct CGVector { double x1; double x2; } pushDirection;

+ (bool)_isPrimitiveBehavior;

- (void).cxx_destruct;
- (void)_associate;
- (void)_dissociate;
- (void)_step;
- (bool)active;
- (void)addItem:(id)arg1;
- (double)angle;
- (id)description;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 mode:(long long)arg2;
- (id)items;
- (double)magnitude;
- (long long)mode;
- (struct CGVector { double x1; double x2; })pushDirection;
- (void)removeItem:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAngle:(double)arg1;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)setMagnitude:(double)arg1;
- (void)setPushDirection:(struct CGVector { double x1; double x2; })arg1;
- (void)setTargetOffsetFromCenter:(struct UIOffset { double x1; double x2; })arg1 forItem:(id)arg2;
- (void)setTargetPoint:(struct CGPoint { double x1; double x2; })arg1 forItem:(id)arg2;
- (void)setXComponent:(double)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setYComponent:(double)arg1;
- (struct UIOffset { double x1; double x2; })targetOffsetFromCenterForItem:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetPointForItem:(id)arg1;
- (double)xComponent;
- (double)yComponent;

@end