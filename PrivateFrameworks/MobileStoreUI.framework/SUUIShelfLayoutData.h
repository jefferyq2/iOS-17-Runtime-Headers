
@interface SUUIShelfLayoutData : NSObject {
    double  _columnSpacing;
    NSMutableArray * _columnWidths;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    long long  _numberOfRows;
    double * _rowHeights;
}

@property (nonatomic, readonly) double columnSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } totalContentSize;

- (void).cxx_destruct;
- (double)columnSpacing;
- (double)columnWidthForIndex:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (void)enumerateColumnsUsingBlock:(id /* block */)arg1;
- (void)enumerateRowsUsingBlock:(id /* block */)arg1;
- (id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)reloadWithItemCount:(long long)arg1 sizeBlock:(id /* block */)arg2;
- (double)rowHeightForIndex:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })totalContentSize;

@end