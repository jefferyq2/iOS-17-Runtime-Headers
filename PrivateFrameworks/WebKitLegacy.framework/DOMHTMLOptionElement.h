
@interface DOMHTMLOptionElement : DOMHTMLElement

@property bool defaultSelected;
@property bool disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) int index;
@property (copy) NSString *label;
@property bool selected;
@property (readonly, copy) NSString *text;
@property (copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (bool)defaultSelected;
- (bool)disabled;
- (id)form;
- (int)index;
- (id)label;
- (bool)selected;
- (void)setDefaultSelected:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)text;
- (id)value;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)createPickerCell;
- (id)createSelectedItem;
- (id)itemTitle;
- (void)populateCell:(id)arg1;

@end