
@interface _UIPopoverView : UIView {
    double  _animationOvershootHeight;
    UIPopoverBackgroundView * _backgroundView;
    Class  _backgroundViewClass;
    bool  _chromeHidden;
    bool  _chromeHiddenForSizeTransition;
    UIView * _clipView;
    bool  _contentExtendsOverArrow;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentView;
    UIPopoverController * _popoverController;
    UIActionSheet * _presentedActionSheet;
    _UICutoutShadowView * _shadowView;
    bool  _showsBackgroundComponentHighlights;
    bool  _showsBackgroundViewHighlight;
    bool  _showsContentViewHighlight;
    UIImageView * _toolbarShine;
}

@property (nonatomic) double animationOvershootHeight;
@property (nonatomic, copy) UIColor *arrowBackgroundColor;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) bool chromeHidden;
@property (nonatomic) bool chromeHiddenForSizeTransition;
@property (nonatomic, readonly) bool contentExtendsOverArrow;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) UIColor *popoverBackgroundColor;
@property (nonatomic) UIPopoverController *popoverController;
@property (nonatomic, retain) UIActionSheet *presentedActionSheet;
@property (nonatomic, retain) _UICutoutShadowView *shadowView;
@property (nonatomic) bool showsBackgroundComponentHighlights;
@property (nonatomic) bool showsBackgroundViewHighlight;
@property (nonatomic) bool showsContentViewHighlight;

+ (id)popoverViewContainingView:(id)arg1;

- (void).cxx_destruct;
- (bool)_allowsCustomizationOfContent;
- (bool)_definesTintColor;
- (void)_hideArrow;
- (void)_layoutToolbarShine;
- (bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_normalInheritedTintColor;
- (void)_performBlockCheckingDefinesTintColor:(id /* block */)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowOffset:(double)arg2;
- (void)_setPopoverContentView:(id)arg1;
- (void)_showArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotBounds;
- (int)_style;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateAlphaForChromeHidden;
- (double)animationOvershootHeight;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (id)backgroundView;
- (bool)chromeHidden;
- (bool)chromeHiddenForSizeTransition;
- (bool)contentExtendsOverArrow;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2 embeddedInView:(bool)arg3 contentExtendsOverArrow:(bool)arg4;
- (void)layoutSubviews;
- (id)popoverBackgroundColor;
- (id)popoverController;
- (id)presentedActionSheet;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForContentView;
- (void)setAnimationOvershootHeight:(double)arg1;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setChromeHidden:(bool)arg1;
- (void)setChromeHiddenForSizeTransition:(bool)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentedActionSheet:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setShowsBackgroundComponentHighlights:(bool)arg1;
- (void)setShowsBackgroundViewHighlight:(bool)arg1;
- (void)setShowsContentViewHighlight:(bool)arg1;
- (void)setUseToolbarShine:(bool)arg1;
- (id)shadowView;
- (bool)showsBackgroundComponentHighlights;
- (bool)showsBackgroundViewHighlight;
- (bool)showsContentViewHighlight;
- (id)standardChromeView;
- (id)toolbarShine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;

@end