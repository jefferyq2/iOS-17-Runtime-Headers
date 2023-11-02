
@interface SKPhysicsWorld : NSObject <NSSecureCoding> {
    <SKPhysicsContactDelegate> * _contactDelegate;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _gravity;
    double  speed;
}

@property (nonatomic) <SKPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) struct CGVector { double x1; double x2; } gravity;
@property (nonatomic) double speed;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void)addBody:(id)arg1;
- (void)addJoint:(id)arg1;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contactDelegate;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)fields;
- (struct CGVector { double x1; double x2; })gravity;
- (bool)hasBodies;
- (bool)hasFields;
- (id)initWithCoder:(id)arg1;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeJoint:(id)arg1;
- (void)sampleFields;
- (void)sampleFieldsAt;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { double x1; double x2; })arg1;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;

@end