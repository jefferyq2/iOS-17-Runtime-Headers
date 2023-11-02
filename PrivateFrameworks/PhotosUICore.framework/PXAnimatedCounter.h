
@interface PXAnimatedCounter : UIView {
    unsigned long long  _animationsInProgress;
    UILabel * _backingLabel;
    NSMutableArray * _digitLabels;
    UIFont * _font;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxDigitSize;
    unsigned long long  _number;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
}

@property unsigned long long animationsInProgress;
@property (readonly) UILabel *backingLabel;
@property (readonly) NSMutableArray *digitLabels;
@property (nonatomic, retain) UIFont *font;
@property struct CGSize { double x1; double x2; } maxDigitSize;
@property (nonatomic) unsigned long long number;
@property struct CGSize { double x1; double x2; } previousSize;

- (void).cxx_destruct;
- (void)_calculateLargestDigitSize;
- (id)_labelForDigit:(unsigned long long)arg1;
- (unsigned long long)_numDigitsForNumber:(long long)arg1;
- (id)_numberStringForNumber:(long long)arg1;
- (void)_setCounterToNumber:(unsigned long long)arg1;
- (void)_updateFramesForShownDigits;
- (void)_updateSizeIfNeeded;
- (double)_xOffsetForBackingLabel:(id)arg1;
- (unsigned long long)animationsInProgress;
- (id)backingLabel;
- (void)commonInit;
- (id)digitLabels;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithNumber:(unsigned long long)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxDigitSize;
- (unsigned long long)number;
- (long long)preferredAnimationStyleForNumber:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })previousSize;
- (struct CGSize { double x1; double x2; })requiredSizeForNumber:(unsigned long long)arg1;
- (void)setAnimationsInProgress:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaxDigitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumber:(unsigned long long)arg1;
- (void)setNumber:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setNumber:(unsigned long long)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setNumber:(unsigned long long)arg1 withAnimationStyle:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)setPreviousSize:(struct CGSize { double x1; double x2; })arg1;

@end