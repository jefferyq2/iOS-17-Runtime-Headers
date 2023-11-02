
@interface CAMSharedLibraryBadge : CEKBadgeTextView {
    long long  _sharedLibraryMode;
}

@property (nonatomic) long long sharedLibraryMode;

- (void)_updateTextAndColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSharedLibraryMode:(long long)arg1;
- (long long)sharedLibraryMode;

@end