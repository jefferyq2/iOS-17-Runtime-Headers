
@interface UIDictationATVLinearView : UIDictationView

- (bool)drawsOwnBackground;
- (void)finishReturnToKeyboard;
- (bool)isShowing;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)returnToKeyboard;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1;

@end