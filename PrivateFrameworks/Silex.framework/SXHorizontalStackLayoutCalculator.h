
@interface SXHorizontalStackLayoutCalculator : NSObject <SXHorizontalStackLayoutCalculator> {
    double  _combinedMaximumWidth;
    double  _combinedMinimumWidth;
    NSMutableDictionary * _componentsGroupedByMaximumWidth;
    NSMutableDictionary * _componentsGroupedByMinimumWidth;
    NSMutableArray * _flexibleItems;
    NSMutableArray * _items;
    NSMutableDictionary * _maximumWidths;
    NSMutableDictionary * _minimumWidths;
    NSMutableArray * _sortedItems;
}

@property (nonatomic) double combinedMaximumWidth;
@property (nonatomic) double combinedMinimumWidth;
@property (nonatomic, readonly) NSMutableDictionary *componentsGroupedByMaximumWidth;
@property (nonatomic, readonly) NSMutableDictionary *componentsGroupedByMinimumWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *flexibleItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSMutableDictionary *maximumWidths;
@property (nonatomic, readonly) NSMutableDictionary *minimumWidths;
@property (nonatomic, readonly) NSMutableArray *sortedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFlexibleItemWithIdentifier:(id)arg1;
- (void)addItemWithMinimumWidth:(double)arg1 maximumWidth:(double)arg2 identifier:(id)arg3;
- (double)combinedMaximumWidth;
- (double)combinedMinimumWidth;
- (id)componentsGroupedByMaximumWidth;
- (id)componentsGroupedByMinimumWidth;
- (id)flexibleItems;
- (id)init;
- (id)items;
- (id)layoutForComponentWidth:(double)arg1;
- (id)maximumWidths;
- (id)minimumWidths;
- (void)setCombinedMaximumWidth:(double)arg1;
- (void)setCombinedMinimumWidth:(double)arg1;
- (id)sortedItems;

@end