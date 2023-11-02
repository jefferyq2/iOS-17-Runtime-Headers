
@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding> {
    NSData * _destinationStation;
    NSData * _originStation;
    bool  _refunded;
    NSNumber * _validityStartDate;
}

@property (nonatomic, readonly, copy) NSData *destinationStation;
@property (nonatomic, readonly, copy) NSData *originStation;
@property (getter=isRefunded, nonatomic, readonly) bool refunded;
@property (nonatomic, readonly, copy) NSNumber *validityStartDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationStation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isRefunded;
- (id)originStation;
- (id)validityStartDate;

@end