
@interface WKQuadObject : NSObject {
    struct _WKQuad { 
        struct CGPoint { 
            double x; 
            double y; 
        } p1; 
        struct CGPoint { 
            double x; 
            double y; 
        } p2; 
        struct CGPoint { 
            double x; 
            double y; 
        } p3; 
        struct CGPoint { 
            double x; 
            double y; 
        } p4; 
    }  _quad;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)initWithQuad:(struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })quad;

@end