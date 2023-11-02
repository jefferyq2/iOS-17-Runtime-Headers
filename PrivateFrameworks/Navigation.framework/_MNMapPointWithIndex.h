
@interface _MNMapPointWithIndex : NSObject {
    unsigned long long  _index;
    bool  _isFlipped;
    bool  _isPolylineA;
    bool  _isStartOfSegment;
    struct Matrix<double, 2, 1> { 
        double _e[2]; 
    }  _point;
    struct LineSegment<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _origin; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _direction; 
    }  _segment;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) bool isFlipped;
@property (nonatomic) bool isPolylineA;
@property (nonatomic) bool isStartOfSegment;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  point; /* unknown property attribute:  1>=[2d]} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{LineSegment<double' */ struct  segment; /* unknown property attribute:  1>=[2d]}} */

- (id).cxx_construct;
- (unsigned long long)index;
- (bool)isFlipped;
- (bool)isPolylineA;
- (bool)isStartOfSegment;
- (struct Matrix<double, 2, 1> { double x1[2]; })point;
- (struct LineSegment<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })segment;
- (void)setIndex:(unsigned long long)arg1;
- (void)setIsFlipped:(bool)arg1;
- (void)setIsPolylineA:(bool)arg1;
- (void)setIsStartOfSegment:(bool)arg1;
- (void)setPoint:(struct Matrix<double, 2, 1> { double x1[2]; })arg1;
- (void)setSegment:(struct LineSegment<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg1;

@end