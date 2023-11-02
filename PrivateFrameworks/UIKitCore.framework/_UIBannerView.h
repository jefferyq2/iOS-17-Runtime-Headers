
@interface _UIBannerView : UIView {
    CALayer * _backgroundLayer;
    UILabel * _bodyLabel;
    _UIBannerContent * _content;
    UIView * _highlightView;
    bool  _highlighted;
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) CALayer *backgroundLayer;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) _UIBannerContent *content;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)backgroundLayer;
- (id)bodyLabel;
- (id)content;
- (id)highlightView;
- (bool)highlighted;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundLayer:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 initialPress:(bool)arg2;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;

@end