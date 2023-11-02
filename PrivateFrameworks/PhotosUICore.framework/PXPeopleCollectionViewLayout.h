
@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout {
    unsigned long long  _firstVisibleCellIndex;
}

@property (nonatomic) unsigned long long firstVisibleCellIndex;

- (unsigned long long)firstVisibleCellIndex;
- (void)setFirstVisibleCellIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end