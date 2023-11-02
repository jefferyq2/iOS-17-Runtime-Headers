
@protocol SXLayouterFactory <NSObject>

@required

- (<SXLayouter> *)layouterForContainerComponentBlueprint:(SXContainerComponentBlueprint *)arg1 delegate:(id <SXLayouterDelegate>)arg2;

@end