
@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {
    UIView * _line1View;
    CLKUIColoringLabel * _line2Label;
}

@property (nonatomic, readonly) CLKUIColoringLabel *line2Label;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (long long)_line2FilterStyle;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)line1View;
- (id)line2Label;
- (id)line2TextProviderFromTemplate:(id)arg1;
- (bool)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end