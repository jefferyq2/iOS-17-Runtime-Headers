
@interface SUScriptGiftViewController : SUScriptViewController {
    long long  _giftCategory;
    SUUIItem * _item;
}

@property (nonatomic, readonly) long long giftCategoryApps;
@property (nonatomic, readonly) long long giftCategoryBooks;
@property (nonatomic, readonly) long long giftCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (long long)giftCategoryApps;
- (long long)giftCategoryBooks;
- (long long)giftCategoryMedia;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (void)setCreditGiftStyle:(long long)arg1;
- (void)setProductGiftItem:(id)arg1;

@end