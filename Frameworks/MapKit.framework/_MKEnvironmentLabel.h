
@interface _MKEnvironmentLabel : UIView {
    UILabel * _label;
}

@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (id)text;

@end