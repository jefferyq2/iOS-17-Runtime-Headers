
@protocol _UIDICActivityViewControllerDelegate <NSObject>

@required

- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPerformingActivityType:(NSString *)arg2 completed:(bool)arg3 items:(NSArray *)arg4 error:(NSError *)arg5;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPresentingActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(_UIDICActivityViewController *)arg1 mailSubjectForActivityType:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityDidEndSendingToApplication:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityWillBeginSendingToApplication:(NSString *)arg2;

@end