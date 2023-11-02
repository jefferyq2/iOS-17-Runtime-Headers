
@interface TVMonogramViewConfiguration : NSObject <NSCopying> {
    UIColor * _focusedBgColor;
    double  _focusedShadowAlpha;
    UIImage * _focusedShadowImage;
    double  _focusedSizeIncrease;
    long long  _style;
    UIColor * _subtitleFocusedColor;
    NSString * _subtitleTextStyle;
    UIColor * _subtitleUnfocusedColor;
    UIColor * _titleFocusedColor;
    NSString * _titleTextStyle;
    UIColor * _titleUnfocusedColor;
    UIColor * _unfocusedBgColor;
    double  _unfocusedShadowAlpha;
    UIImage * _unfocusedShadowImage;
}

@property (nonatomic, retain) UIColor *focusedBgColor;
@property (nonatomic) double focusedShadowAlpha;
@property (nonatomic, retain) UIImage *focusedShadowImage;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *subtitleFocusedColor;
@property (nonatomic, copy) NSString *subtitleTextStyle;
@property (nonatomic, retain) UIColor *subtitleUnfocusedColor;
@property (nonatomic, retain) UIColor *titleFocusedColor;
@property (nonatomic, copy) NSString *titleTextStyle;
@property (nonatomic, retain) UIColor *titleUnfocusedColor;
@property (nonatomic, retain) UIColor *unfocusedBgColor;
@property (nonatomic, readonly) double unfocusedImageAlpha;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic, retain) UIImage *unfocusedShadowImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)focusedBgColor;
- (double)focusedShadowAlpha;
- (id)focusedShadowImage;
- (double)focusedSizeIncrease;
- (id)initWithShadowImages:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setFocusedBgColor:(id)arg1;
- (void)setFocusedShadowAlpha:(double)arg1;
- (void)setFocusedShadowImage:(id)arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitleFocusedColor:(id)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setSubtitleUnfocusedColor:(id)arg1;
- (void)setTitleFocusedColor:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (void)setTitleUnfocusedColor:(id)arg1;
- (void)setUnfocusedBgColor:(id)arg1;
- (void)setUnfocusedShadowAlpha:(double)arg1;
- (void)setUnfocusedShadowImage:(id)arg1;
- (long long)style;
- (id)subtitleFocusedColor;
- (id)subtitleTextStyle;
- (id)subtitleUnfocusedColor;
- (id)titleFocusedColor;
- (id)titleTextStyle;
- (id)titleUnfocusedColor;
- (id)unfocusedBgColor;
- (double)unfocusedImageAlpha;
- (double)unfocusedShadowAlpha;
- (id)unfocusedShadowImage;

@end