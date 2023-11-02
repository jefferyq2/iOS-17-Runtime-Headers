
@protocol SXImageViewDelegate <NSObject>

@optional

- (void)imageView:(SXImageView *)arg1 didLoadAnimatedImage:(SXAnimatedImage *)arg2;
- (void)imageView:(SXImageView *)arg1 didLoadImage:(UIImage *)arg2 ofQuality:(int)arg3;

@end