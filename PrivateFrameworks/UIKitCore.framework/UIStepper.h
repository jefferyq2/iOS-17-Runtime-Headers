
@interface UIStepper : UIControl <UIStepperControl> {
    bool  _autorepeat;
    NSMutableDictionary * _backgroundImages;
    bool  _continuous;
    NSMutableDictionary * _decrementImages;
    NSMutableDictionary * _dividerImages;
    NSMutableDictionary * _incrementImages;
    double  _maximumValue;
    double  _minimumValue;
    double  _stepValue;
    double  _value;
    UIView<UIStepperVisualElement> * _visualElement;
    bool  _wraps;
}

@property (nonatomic) bool autorepeat;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) double stepValue;
@property (nonatomic) double value;
@property (nonatomic, retain) UIView<UIStepperVisualElement> *visualElement;
@property (nonatomic) bool wraps;

+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (Class)_fallbackVisualElementClass;
+ (void)_registerVisualElementClass:(Class)arg1 forIdiom:(long long)arg2;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;
+ (Class)visualElementClassForTraitCollection:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_commonStepperInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_emitValueChanged;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)autorepeat;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)decrementImageForState:(unsigned long long)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContinuous;
- (double)maximumValue;
- (double)minimumValue;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)setAutorepeat:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setContinuous:(bool)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setVisualElement:(id)arg1;
- (void)setWraps:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)stepValue;
- (void)tintColorDidChange;
- (double)value;
- (id)visualElement;
- (void)visualElementDidSetValue:(id)arg1;
- (void)visualElementSendValueChangedEvent:(id)arg1;
- (bool)wraps;

@end