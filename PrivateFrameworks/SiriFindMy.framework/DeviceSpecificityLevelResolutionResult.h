
@interface DeviceSpecificityLevelResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithDeviceSpecificityLevelToConfirm:(long long)arg1;
+ (id)successWithResolvedDeviceSpecificityLevel:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end