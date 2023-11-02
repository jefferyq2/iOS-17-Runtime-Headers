
@interface EKEventDetailGroup : NSObject {
    NSString * _headerTitle;
    NSArray * _items;
    long long  _tag;
}

@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) long long tag;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (id)description;
- (bool)hasSubitemForIndexPathRow:(unsigned long long)arg1;
- (id)headerTitle;
- (id)initWithTag:(long long)arg1 headerTitle:(id)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2;
- (id)items;
- (unsigned long long)numberOfRows;
- (void)setHeaderTitle:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1;

@end