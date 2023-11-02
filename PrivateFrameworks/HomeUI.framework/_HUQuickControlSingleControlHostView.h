
@interface _HUQuickControlSingleControlHostView : UIView {
    NAUILayoutConstraintSet * _constraintSet;
    UIView * _contentView;
    <HULayoutAnchorProviding> * _preferredFrameLayoutGuide;
}

@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) <HULayoutAnchorProviding> *preferredFrameLayoutGuide;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraintSet;
- (id)constraintSet;
- (id)contentView;
- (void)didMoveToWindow;
- (bool)hasSingleControlView;
- (id)initWithContentView:(id)arg1;
- (id)preferredFrameLayoutGuide;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)updateConstraints;

@end