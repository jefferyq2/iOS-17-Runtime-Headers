
@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _paymentSetupFeatureState;
    NSString * _referrerIdentifier;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) bool didSucceed;
@property (nonatomic) long long paymentSetupFeatureState;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (id)_paymentSetupFeature;
- (bool)didSucceed;
- (id)initWithViewController:(id)arg1;
- (long long)paymentSetupFeatureState;
- (void)paymentSetupViewControllerDidDismiss;
- (id)referrerIdentifier;
- (void)run;
- (id)semaphore;
- (void)setPaymentSetupFeatureState:(long long)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end