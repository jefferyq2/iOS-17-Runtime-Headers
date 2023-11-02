
@interface SXCollectionRowLayout : NSObject {
    double  _componentWidth;
    unsigned long long  _componentsPerRow;
    unsigned long long  _intendedComponentsPerRow;
    double  _leftMargin;
    double  _rightMargin;
    double  _spaceBetweenComponents;
}

@property (nonatomic) double componentWidth;
@property (nonatomic) unsigned long long componentsPerRow;
@property (nonatomic) unsigned long long intendedComponentsPerRow;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double spaceBetweenComponents;

- (double)componentWidth;
- (unsigned long long)componentsPerRow;
- (id)description;
- (unsigned long long)intendedComponentsPerRow;
- (double)leftMargin;
- (double)rightMargin;
- (void)setComponentWidth:(double)arg1;
- (void)setComponentsPerRow:(unsigned long long)arg1;
- (void)setIntendedComponentsPerRow:(unsigned long long)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setSpaceBetweenComponents:(double)arg1;
- (double)spaceBetweenComponents;

@end