
@interface MFTransform : NSObject <NSCopying> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_combinedTransform;
    NSObject<MFDeviceDriver> * m_deviceDriver;
    int  m_mapMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_viewportExt;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_viewportOrg;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_windowExt;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_windowOrg;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_world;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })DPtoLP:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })LPtoDP:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)getMapMode;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getTransformMatrix;
- (struct CGPoint { double x1; double x2; })getViewportExtent;
- (struct CGPoint { double x1; double x2; })getViewportOrg;
- (struct CGPoint { double x1; double x2; })getWindowExtent;
- (struct CGPoint { double x1; double x2; })getWindowOrg;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getWorldMatrix;
- (id)initWithDriver:(id)arg1;
- (bool)isUpsideDown;
- (int)modifyWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 in_command:(int)arg2;
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;
- (int)setMapMode:(int)arg1;
- (void)setTransformMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewportExt:(struct CGPoint { double x1; double x2; })arg1;
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;
- (void)setViewportOrg:(struct CGPoint { double x1; double x2; })arg1;
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;
- (void)setWindowExt:(struct CGPoint { double x1; double x2; })arg1;
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;
- (void)setWindowOrg:(struct CGPoint { double x1; double x2; })arg1;
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;
- (void)setWorldMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)setWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (int)updateTransform;

@end