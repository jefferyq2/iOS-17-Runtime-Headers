
@interface _CKAcknowledgmentVoteCountView : UIView {
    UIImageView * _ackIconImageView;
    UILabel * _voteCountLabel;
}

@property (nonatomic, retain) UIImageView *ackIconImageView;
@property (nonatomic, retain) UILabel *voteCountLabel;

- (void).cxx_destruct;
- (id)ackIconImageView;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAckIconImageView:(id)arg1;
- (void)setVoteCountLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)voteCountLabel;

@end