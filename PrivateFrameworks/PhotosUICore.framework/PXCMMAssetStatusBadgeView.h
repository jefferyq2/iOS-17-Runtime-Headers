
@interface PXCMMAssetStatusBadgeView : UIView <PXReusableObject, PXUIViewBasicTile> {
    UIView * _glyphView;
    struct { 
        bool imageView; 
    }  _needsUpdateFlags;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *glyphView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize { double x1; double x2; })preferredSize;

- (void).cxx_destruct;
- (void)_invalidateImageView;
- (void)_updateImageViewIfNeeded;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)glyphView;
- (void)prepareForReuse;
- (void)setGlyphView:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)view;

@end