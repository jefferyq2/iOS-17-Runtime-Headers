
@protocol INSetRadioStationIntentExport <NSObject, JSExport>

@required

- (NSString *)channel;
- (NSNumber *)frequency;
- (id)init;
- (NSNumber *)presetNumber;
- (long long)radioType;
- (void)setChannel:(NSString *)arg1;
- (void)setFrequency:(NSNumber *)arg1;
- (void)setPresetNumber:(NSNumber *)arg1;
- (void)setRadioType:(long long)arg1;
- (void)setStationName:(NSString *)arg1;
- (NSString *)stationName;

@end