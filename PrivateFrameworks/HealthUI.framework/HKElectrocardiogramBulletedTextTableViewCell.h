
@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell {
    NSMutableArray * _bodyFirstBaselineConstraints;
    UILabel * _detailLabel;
    NSLayoutConstraint * _detailLabelLastBaselineConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSMutableArray *bodyFirstBaselineConstraints;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) NSLayoutConstraint *detailLabelLastBaselineConstraint;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setUpUI;
- (void)_setupConstraints;
- (void)_updateLeadingDetailAttributedTextSize;
- (id)bodyFirstBaselineConstraints;
- (id)detailLabel;
- (id)detailLabelLastBaselineConstraint;
- (id)detailText;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setBodyFirstBaselineConstraints:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setDetailLabelLastBaselineConstraint:(id)arg1;
- (void)setDetailTextWithBullets:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end