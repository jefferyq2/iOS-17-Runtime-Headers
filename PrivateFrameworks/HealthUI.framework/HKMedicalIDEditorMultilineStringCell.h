
@interface HKMedicalIDEditorMultilineStringCell : HKMedicalIDEditorCell <HKMultilineCellHeightEstimatable, UITextViewDelegate> {
    <HKMedicalIDEditorCellHeightChangeDelegate> * _heightChangeDelegate;
    UILabel * _labelLabel;
    double  _lastSeenTextViewContentHeight;
    UILabel * _placeholderLabel;
    UITextView * _textView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textViewExtraMargins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HKMedicalIDEditorCellHeightChangeDelegate> *heightChangeDelegate;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textViewExtraMargins;

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cursorRectForTextView:(id)arg1;
- (void)_labelTapped:(id)arg1;
- (void)commitEditing;
- (void)dealloc;
- (double)estimatedHeightWithWidth:(double)arg1;
- (id)heightChangeDelegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (id)placeholder;
- (id)placeholderLabel;
- (void)setHeightChangeDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTextViewExtraMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stringValue;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textViewExtraMargins;

@end