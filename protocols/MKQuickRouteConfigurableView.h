
@protocol MKQuickRouteConfigurableView <NSObject>

@required

- (void)quickRouteManager:(_MKQuickRouteManager *)arg1 didUpdateETA:(_MKRouteETA *)arg2 error:(NSError *)arg3 animated:(bool)arg4;

@end