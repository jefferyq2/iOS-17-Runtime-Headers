
@interface PUFeedStackCell : PUFeedCell {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackOffset;
    PUStackView * _stackView;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic, retain) PUStackView *stackView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setStackOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackView:(id)arg1;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (id)stackView;

@end