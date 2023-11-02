
@interface NSLayoutRect : NSObject <NSCoding, NSCopying> {
    NSLayoutDimension * _heightAnchor;
    NSLayoutXAxisAnchor * _leadingAnchor;
    NSString * _name;
    id  _reserved1;
    NSLayoutYAxisAnchor * _topAnchor;
    NSLayoutDimension * _widthAnchor;
}

@property (readonly, copy) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSLayoutPoint *centerLayoutPoint;
@property (readonly, copy) NSLayoutXAxisAnchor *centerXAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, copy) NSLayoutDimension *heightAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *leadingAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *topAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *trailingAnchor;
@property (readonly, copy) NSLayoutDimension *widthAnchor;

+ (id)layoutRectWithCenterLayoutPoint:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3;
+ (id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 trailingAnchor:(id)arg3 bottomAnchor:(id)arg4;
+ (id)layoutRectWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4;

- (id)_equationDescriptionInParent;
- (id)bottomAnchor;
- (id)centerLayoutPoint;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (id)constraintsContainingWithinLayoutRect:(id)arg1;
- (id)constraintsEqualToLayoutRect:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)heightAnchor;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeadingAnchor:(id)arg1 topAnchor:(id)arg2 widthAnchor:(id)arg3 heightAnchor:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)layoutRectByInsettingTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4;
- (id)layoutRectByInsettingTopWithDimension:(id)arg1 leadingWithDimension:(id)arg2 bottomWithDimension:(id)arg3 trailingWithDimension:(id)arg4;
- (id)layoutRectBySlicingWithDimension:(id)arg1 fromEdge:(long long)arg2;
- (id)layoutRectBySlicingWithDistance:(double)arg1 fromEdge:(long long)arg2;
- (id)layoutRectBySlicingWithProportion:(double)arg1 fromEdge:(long long)arg2;
- (id)layoutRectWithName:(id)arg1;
- (id)leadingAnchor;
- (bool)nsli_isLegalConstraintItem;
- (id)nsli_superitem;
- (id)observableValueInItem:(id)arg1;
- (id)ruleContainingLayoutRect:(id)arg1;
- (id)ruleEqualToLayoutRect:(id)arg1;
- (id)topAnchor;
- (id)trailingAnchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueInItem:(id)arg1;
- (id)widthAnchor;

@end