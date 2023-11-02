
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
    bool  _enableRSSI;
    bool  _showFailure;
    bool  _showRSSI;
    int  _signalStrengthBars;
    int  _signalStrengthRaw;
    bool  _useSmallBars;
}

- (id)_signalStrengthBarsImageName;
- (id)_stringForRSSI;
- (bool)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(bool)arg3 showFailure:(bool)arg4 useSmallBars:(bool)arg5;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end