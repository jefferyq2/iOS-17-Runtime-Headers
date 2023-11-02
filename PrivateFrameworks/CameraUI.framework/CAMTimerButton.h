
@interface CAMTimerButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    UIImageView * __glyphView;
    <CAMTimerButtonDelegate> * _delegate;
    bool  _hideOffWhenCollapsed;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMTimerButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideOffWhenCollapsed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonCAMTimerButtonInitialization;
- (id)_currentGlyphImageForAccessibiliyHUD:(bool)arg1;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)delegate;
- (long long)duration;
- (id)headerView;
- (bool)hideOffWhenCollapsed;
- (id)imageForAccessibilityHUD;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setDuration:(long long)arg1 animated:(bool)arg2;
- (void)setHideOffWhenCollapsed:(bool)arg1;
- (void)setHideOffWhenCollapsed:(bool)arg1 needsReloadData:(bool)arg2;
- (id)shownIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end