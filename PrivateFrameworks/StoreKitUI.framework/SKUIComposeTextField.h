
@interface SKUIComposeTextField : UIView <UITextFieldDelegate> {
    SKUIComposeTextFieldConfiguration * _configuration;
    long long  _currentTextLength;
    id  _delegate;
    UILabel * _label;
    long long  _style;
    UITextField * _textField;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (nonatomic, readonly) SKUIComposeTextFieldConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UITextField *textField;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)labelColorForStyle:(long long)arg1;
+ (id)labelFontForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_textChanged:(id)arg1;
- (long long)composeReviewStyle;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2;
- (bool)isValid;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textField;
- (bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end