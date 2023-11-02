
@interface EAWiFiUnconfiguredAccessory : NSObject {
    NSString * _macAddress;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    unsigned long long  _properties;
    NSString * _ssid;
}

@property (nonatomic, readonly, copy) NSString *macAddress;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long properties;
@property (nonatomic, readonly, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAirPortAssistantWACDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (id)manufacturer;
- (id)model;
- (id)name;
- (unsigned long long)properties;
- (id)ssid;

@end