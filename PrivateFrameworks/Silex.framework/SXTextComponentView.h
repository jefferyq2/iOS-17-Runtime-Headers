
@interface SXTextComponentView : SXComponentView <SXTextViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _calculatedSize;
    SXTangierController * _tangierController;
    SXTextView * _textView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } calculatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTangierController *tangierController;
@property (nonatomic, retain) SXTextView *textView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteTextViewFrame;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (struct CGSize { double x1; double x2; })calculatedSize;
- (id)componentIdentifierForTextView:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 tangierController:(id)arg5;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCalculatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setupTextView;
- (id)tangierController;
- (id)textRulesForTextView:(id)arg1;
- (id)textSource;
- (id)textView;
- (bool)userInteractable;

@end