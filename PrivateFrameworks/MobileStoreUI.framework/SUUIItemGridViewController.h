
@interface SUUIItemGridViewController : UIViewController <SUUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SUUIClientContext * _clientContext;
    UICollectionView * _collectionView;
    <SUUIItemGridDelegate> * _delegate;
    NSMutableIndexSet * _hiddenIconIndexSet;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageBoundingSize;
    SUUIItemCollectionController * _itemCollectionController;
    NSMutableArray * _items;
    NSOperationQueue * _operationQueue;
    UIImage * _placeholderImage;
    double  _rowHeight;
    NSMutableIndexSet * _selectedItemIndexSet;
    SUUIUber * _uber;
}

@property (nonatomic, retain) SUUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIItemGridDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) struct CGSize { double x1; double x2; } imageBoundingSize;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) double rowHeight;
@property (readonly) Class superclass;
@property (nonatomic, retain) SUUIUber *uber;

- (void).cxx_destruct;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (id)_itemCollectionController;
- (void)_reloadLayout;
- (id)artworkContext;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)dealloc;
- (id)delegate;
- (id)iconDataConsumer;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (id)initWithRowHeight:(double)arg1;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;
- (id)items;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (double)rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setArtworkContext:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)setItems:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setUber:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)uber;
- (void)unhideIcons;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemRangeForItemCollectionController:(id)arg1;

@end