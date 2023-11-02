
@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    _UIBackdropView * _backdropView;
    <SKUIPickerViewDelegate> * _delegate;
    UIPickerView * _pickerView;
    UIView * _separatorView;
    NSArray * _titles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitles:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)selectedItemIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end