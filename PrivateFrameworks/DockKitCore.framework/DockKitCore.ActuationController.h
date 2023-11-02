
@interface DockKitCore.ActuationController : DockKitCore.System <DockKitCore.XPCActuatorClientProtocol> {
    void abortTrajectory;
    void executingTrajectory;
    void feedbackLock;
    void feedbackStarted;
    void imu;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFeedbackRequest;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFeedbackTime;
    void lastTrajectoryProgress;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void motionModel;
    void rotateCameraAngle;
    void trajectoryController;
    void trajectoryProgressCallback;
    void yawOffset;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)actuatorFeedbackWithInfo:(id)arg1 system:(id)arg2 actuators:(id)arg3 positions:(id)arg4 velocities:(id)arg5 timestamp:(double)arg6;
- (void)disconnectedWithErr:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getActuatorFeedbackWithActuators:(void *)arg1 delegate:(void *)arg2 occurrence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 54: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, unsigned char, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, out const unsigned char, long, int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, out BOOL, out long, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)getCurrentFeedbackWithActuators:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 46: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, out const /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, double, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)initWithAccessory:(id)arg1 id:(long long)arg2 motionModel:(long long)arg3 name:(id)arg4 actuators:(id)arg5;
- (id)initWithAccessory:(id)arg1 id:(long long)arg2 type:(long long)arg3 name:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)setActuatorPositionsWithActuators:(void *)arg1 positions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 24: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setActuatorVelocitiesWithActuatorNames:(void *)arg1 velocities:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 24: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setActuatorVelocitiesWithActuators:(void *)arg1 velocities:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 24: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setRotationWithYaw:(void *)arg1 pitch:(void *)arg2 roll:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 13: double, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setRotationalVelocityWithYaw:(void *)arg1 pitch:(void *)arg2 roll:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 13: double, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)stopActuatorFeedbackWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)trajectoryProgressFeedbackWithInfo:(id)arg1 system:(id)arg2 progress:(id)arg3;

@end