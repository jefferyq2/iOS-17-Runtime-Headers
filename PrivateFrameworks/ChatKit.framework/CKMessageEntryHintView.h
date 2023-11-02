
@interface CKMessageEntryHintView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _coverInsets;
    UILabel * _hintLabel;
    UIButton * _referenceButton;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } coverInsets;
@property (nonatomic, retain) UILabel *hintLabel;
@property (nonatomic, retain) UIButton *referenceButton;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })coverInsets;
- (id)hintLabel;
- (id)initWithReferenceButton:(id)arg1 coverInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)layoutSubviews;
- (id)referenceButton;
- (void)setCoverInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setHintLabel:(id)arg1;
- (void)setReferenceButton:(id)arg1;

@end