
@protocol GEOServerFormattedStepStringFormatter <NSObject>

@required

- (NSString *)listInstructionForStep:(GEOComposedRouteStep *)arg1;
- (NSArray *)signInstructionsForStep:(GEOComposedRouteStep *)arg1;

@end