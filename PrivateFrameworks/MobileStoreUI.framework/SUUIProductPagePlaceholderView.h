
@interface SUUIProductPagePlaceholderView : UIView {
    UIImageView * _imageView;
    UILabel * _label;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)initWithPlaceholderString:(id)arg1 isPad:(bool)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;

@end