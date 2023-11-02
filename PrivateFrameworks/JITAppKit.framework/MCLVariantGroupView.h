
@interface MCLVariantGroupView : UIView {
    bool  _actionVariant;
    Class  _buttonClass;
    NSMutableArray * _buttonConstraints;
    long long  _buttonType;
    NSMutableArray * _buttons;
    long long  _selectedIndex;
    long long  _variantCount;
    long long  _variantsPerLine;
}

@property (nonatomic) bool actionVariant;
@property (nonatomic, retain) Class buttonClass;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long variantCount;
@property (nonatomic) long long variantsPerLine;

- (void).cxx_destruct;
- (bool)actionVariant;
- (Class)buttonClass;
- (long long)buttonType;
- (void)clearVariants;
- (id)createVariantButton:(Class)arg1 type:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reloadData;
- (void)selectItemAtIndex:(long long)arg1;
- (void)selectVariant:(id)arg1;
- (void)setActionVariant:(bool)arg1;
- (void)setButtonClass:(Class)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setVariantCount:(long long)arg1;
- (void)setVariantsPerLine:(long long)arg1;
- (long long)variantCount;
- (long long)variantsPerLine;

@end