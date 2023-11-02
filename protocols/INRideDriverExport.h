
@protocol INRideDriverExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)phoneNumber;
- (NSString *)rating;
- (void)setPhoneNumber:(NSString *)arg1;
- (void)setRating:(NSString *)arg1;

@end