
@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic, readonly) double a;
@property (nonatomic, readonly) double b;
@property (nonatomic, readonly) double c;
@property (nonatomic, readonly) double d;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) double tx;
@property (nonatomic, readonly) double ty;

+ (void)initializeJSContext:(id)arg1;

- (id)CGAffineTransformValue;
- (double)a;
- (double)b;
- (double)c;
- (double)d;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (double)tx;
- (double)ty;

@end