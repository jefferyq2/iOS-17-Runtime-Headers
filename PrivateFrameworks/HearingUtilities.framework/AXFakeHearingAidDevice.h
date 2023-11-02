
@interface AXFakeHearingAidDevice : AXHearingAidDevice {
    bool  _connected;
    unsigned long long  _excludedProperties;
    bool  _isConnecting;
    double  _leftBatteryLevel;
    NSDate * _leftBatteryLowDate;
    NSMutableArray * _leftFakePrograms;
    NSString * _leftFirmwareVersion;
    NSString * _leftHardwareVersion;
    short  _leftMicrophoneVolumeSteps;
    NSString * _leftUUID;
    NSArray * _manufacturer;
    NSArray * _model;
    NSString * _name;
    double  _rightBatteryLevel;
    NSDate * _rightBatteryLowDate;
    NSMutableArray * _rightFakePrograms;
    NSString * _rightFirmwareVersion;
    NSString * _rightHardwareVersion;
    short  _rightMicrophoneVolumeSteps;
    NSString * _rightUUID;
    int  _type;
    id /* block */  _writeBlock;
    CBPeripheral * leftPeripheral;
    CBPeripheral * rightPeripheral;
}

@property (nonatomic) bool connected;
@property (nonatomic) unsigned long long excludedProperties;
@property (nonatomic) bool isConnecting;
@property (nonatomic) double leftBatteryLevel;
@property (nonatomic, retain) NSDate *leftBatteryLowDate;
@property (nonatomic, retain) NSString *leftFirmwareVersion;
@property (nonatomic, retain) NSString *leftHardwareVersion;
@property (nonatomic) short leftMicrophoneVolumeSteps;
@property (nonatomic, retain) CBPeripheral *leftPeripheral;
@property (nonatomic, retain) NSString *leftUUID;
@property (nonatomic, retain) NSArray *manufacturer;
@property (nonatomic, retain) NSArray *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double rightBatteryLevel;
@property (nonatomic, retain) NSDate *rightBatteryLowDate;
@property (nonatomic, retain) NSString *rightFirmwareVersion;
@property (nonatomic, retain) NSString *rightHardwareVersion;
@property (nonatomic) short rightMicrophoneVolumeSteps;
@property (nonatomic, retain) CBPeripheral *rightPeripheral;
@property (nonatomic, retain) NSString *rightUUID;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (void)connect;
- (bool)connected;
- (void)createPrograms;
- (void)dealloc;
- (bool)deviceSupportsProperty:(unsigned long long)arg1;
- (bool)didLoadBasicProperties;
- (bool)didLoadRequiredProperties;
- (void)disconnect;
- (unsigned long long)excludedProperties;
- (bool)hasConnection;
- (id)initWithDeviceType:(int)arg1;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isFakeDevice;
- (bool)isLeftConnected;
- (bool)isPersistent;
- (bool)isRightConnected;
- (bool)leftAvailable;
- (double)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (short)leftMicrophoneVolumeSteps;
- (id)leftPeripheral;
- (id)leftPrograms;
- (id)leftUUID;
- (id)manufacturer;
- (id)manufacturerForType;
- (id)model;
- (id)modelForType;
- (id)name;
- (void)persist;
- (id)persistentRepresentation;
- (bool)programsListsAreEqual;
- (bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (void)registerWriteBlock:(id /* block */)arg1;
- (bool)rightAvailable;
- (double)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (short)rightMicrophoneVolumeSteps;
- (id)rightPeripheral;
- (id)rightPrograms;
- (id)rightUUID;
- (void)setConnected:(bool)arg1;
- (void)setExcludedProperties:(unsigned long long)arg1;
- (void)setIsConnecting:(bool)arg1;
- (void)setLeftBatteryLevel:(double)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftMicrophoneVolumeSteps:(short)arg1;
- (void)setLeftPeripheral:(id)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNewName:(id)arg1;
- (void)setRightBatteryLevel:(double)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightMicrophoneVolumeSteps:(short)arg1;
- (void)setRightPeripheral:(id)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (bool)showCombinedPrograms;
- (bool)supportsCombinedVolumesForProperty:(unsigned long long)arg1;
- (int)type;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;

@end