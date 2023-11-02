
@interface HRElectrocardiogramSessionScreenView : UIView {
    UILabel * _countdownUnitLabel;
    UILabel * _countdownValueLabel;
    bool  _isLargeDevice;
    UIImageView * _waveformView;
}

@property (nonatomic, readonly) UILabel *countdownUnitLabel;
@property (nonatomic, readonly) UILabel *countdownValueLabel;
@property (nonatomic, readonly) bool isLargeDevice;
@property (nonatomic, readonly) UIImageView *waveformView;

- (void).cxx_destruct;
- (void)_setUpUI;
- (id)countdownUnitLabel;
- (id)countdownValueLabel;
- (id)initWithLargeDevice:(bool)arg1;
- (bool)isLargeDevice;
- (id)waveformView;

@end