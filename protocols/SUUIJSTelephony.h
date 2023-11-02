
@protocol SUUIJSTelephony <JSExport>

@required

- (void)beginObserving;
- (NSString *)countryCode;
- (NSString *)formattedPhoneNumber:(NSString *)arg1;
- (bool)isCellularRoaming;
- (NSString *)mobileCountryCode;
- (NSString *)mobileNetworkCode;
- (NSString *)operatorName;
- (NSString *)phoneNumber;
- (NSString *)providerName;
- (void)sendSMSWithBodyText:(NSString *)arg1 :(NSString *)arg2 :(NSString *)arg3;

@end