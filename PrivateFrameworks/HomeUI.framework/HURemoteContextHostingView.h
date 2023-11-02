
@interface HURemoteContextHostingView : UIView {
    UIView * _contentView;
    UIView * _destinationOutContainerView;
    UIView * _destinationOutView;
    UIView * _destinationOverView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UIView *destinationOutContainerView;
@property (nonatomic, readonly) UIView *destinationOutView;
@property (nonatomic, readonly) UIView *destinationOverView;
@property (nonatomic) unsigned long long maskedCorners;

- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (id)contentView;
- (id)destinationOutContainerView;
- (id)destinationOutView;
- (id)destinationOverView;
- (id)initWithContentView:(id)arg1;
- (unsigned long long)maskedCorners;
- (void)setContentView:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end