
@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _sharingBadgeOffset;
    NSIndexPath * _zoomingCellIndexPath;
}

@property (nonatomic) <PUAvalancheReviewCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) struct UIOffset { double x1; double x2; } sharingBadgeOffset;
@property (nonatomic, retain) NSIndexPath *zoomingCellIndexPath;

- (void).cxx_destruct;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atIndexPath:(id)arg3;
- (bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_supportsAdvancedTransitionAnimations;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setSharingBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setZoomingCellIndexPath:(id)arg1;
- (struct UIOffset { double x1; double x2; })sharingBadgeOffset;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)zoomingCellIndexPath;

@end