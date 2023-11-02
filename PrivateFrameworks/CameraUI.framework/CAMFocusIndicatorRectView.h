
@interface CAMFocusIndicatorRectView : UIView {
    UIImageView * __imageView;
    long long  _style;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (getter=isInactive, nonatomic) bool inactive;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (id)_imageView;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInactive;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setInactive:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (long long)style;

@end