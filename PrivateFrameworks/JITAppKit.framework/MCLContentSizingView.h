
@interface MCLContentSizingView : UIView {
    UIScrollView * _contentView;
    TKKeyPathObserver * _observer;
}

@property (nonatomic, retain) UIScrollView *contentView;

- (void).cxx_destruct;
- (id)contentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setContentView:(id)arg1;

@end