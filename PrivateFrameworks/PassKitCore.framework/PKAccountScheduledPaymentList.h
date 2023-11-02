
@interface PKAccountScheduledPaymentList : NSObject <NSSecureCoding> {
    NSMutableArray * _scheduledPayments;
}

@property (nonatomic, readonly) NSArray *scheduledPayments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addScheduledPayment:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduledPayment:(id)arg1;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1;
- (id)scheduledPaymentOfFundingSourceType:(long long)arg1;
- (id)scheduledPayments;

@end