
@interface _TVOrganizerCellView : UIView {
    NSArray * _components;
    long long  _contentVerticalAlignment;
    NSArray * _filteredComponents;
}

@property (nonatomic, copy) NSArray *components;
@property (nonatomic) long long contentVerticalAlignment;
@property (nonatomic, readonly, copy) NSArray *filteredComponents;

- (void).cxx_destruct;
- (long long)_alignmentFromView:(id)arg1;
- (void)_resetSubviews;
- (struct CGSize { double x1; double x2; })_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_updateView:(id)arg1 maxViewWidth:(double)arg2;
- (void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2;
- (bool)canBecomeFocused;
- (id)components;
- (long long)contentVerticalAlignment;
- (id)filteredComponents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setComponents:(id)arg1;
- (void)setComponentsNeedUpdate;
- (void)setContentVerticalAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end