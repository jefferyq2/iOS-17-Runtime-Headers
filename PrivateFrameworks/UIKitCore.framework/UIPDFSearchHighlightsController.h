
@interface UIPDFSearchHighlightsController : NSObject <CALayerDelegate> {
    struct CGColor { } * _borderColor;
    struct CGColor { } * _highlightColor;
    bool  _pageRendered;
    UIPDFPageView * _pageView;
    NSMutableArray * _rectangles;
    NSMutableArray * _searchHighlightLayers;
    UIPDFSelection * _selection;
    struct CGColor { } * _shadowColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addAnimation2:(id)arg1;
- (void)_addAnimation:(id)arg1;
- (void)addLayer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 path:(struct CGPath { }*)arg2 shadowPath:(struct CGPath { }*)arg3 animated:(bool)arg4;
- (void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(bool)arg2;
- (void)addSearchHighlightForSelection:(id)arg1 animated:(bool)arg2;
- (void)clearSearchHighlights;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (bool)hasSearchHighlights;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)indexOfColumnBreakStartingAt:(unsigned long long)arg1;
- (id)initWithPageView:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)makeType1Path:(struct CGPath { }*)arg1 shadowPath:(struct CGPath { }*)arg2;
- (void)makeType1Shadow:(struct CGPath { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inset:(struct CGPoint { double x1; double x2; })arg3;
- (void)makeType2Path:(struct CGPath { }*)arg1 to:(unsigned long long)arg2 shadowPath:(struct CGPath { }*)arg3;
- (void)makeType2Shadow:(struct CGPath { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)makeType3Path:(struct CGPath { }*)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath { }*)arg4;
- (void)makeType4Path:(struct CGPath { }*)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath { }*)arg4;
- (void)pageDidRender:(id)arg1;
- (void)setNeedsDisplay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;

@end