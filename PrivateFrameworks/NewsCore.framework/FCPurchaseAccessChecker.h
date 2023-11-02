
@interface FCPurchaseAccessChecker : FCAccessChecker {
    <FCPaidAccessCheckerType> * _paidAccessChecker;
}

@property (nonatomic, readonly) <FCPaidAccessCheckerType> *paidAccessChecker;

- (void).cxx_destruct;
- (bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithPaidAccessChecker:(id)arg1;
- (id)paidAccessChecker;

@end