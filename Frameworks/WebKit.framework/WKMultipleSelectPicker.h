
@interface WKMultipleSelectPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, WKFormControl> {
    bool  _allowsMultipleSelection;
    double  _fontSize;
    double  _layoutWidth;
    double  _maximumTextWidth;
    unsigned long long  _singleSelectionIndex;
    long long  _textAlignment;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (long long)findItemIndexAt:(int)arg1;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(bool)arg4;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;

@end