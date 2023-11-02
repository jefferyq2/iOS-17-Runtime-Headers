
@interface MOVReaderInterface : MOVStreamReader <MOVStreamReaderDelegate> {
    bool  _accelLocation0;
    bool  _accelLocationNil;
    NSString * _accelTrackName;
    NSString * _alsTrackName;
    NSString * _bundleID;
    bool  _compassLocation0;
    bool  _compassLocationNil;
    NSString * _compassTrackName;
    NSNumber * _depthOutputFrameRate;
    NSString * _depthTOFTrackName;
    bool  _deviceMotionLocation0;
    bool  _deviceMotionLocationNil;
    NSString * _deviceMotionTrackName;
    NSString * _deviceName;
    NSString * _deviceString;
    NSDictionary * _enforcedVideoTrackFormat;
    CIContext * _filterContext;
    bool  _gyroLocation0;
    bool  _gyroLocationNil;
    NSString * _gyroTrackName;
    bool  _imuLocation0;
    bool  _imuLocationNil;
    int  _jasperCounter;
    NSString * _jasperDepthPCStreamID;
    bool  _jasperEnabled;
    CVAJasperDepthFrameProcessor * _jdfp;
    double  _lastDepthTOFTimestamp;
    NSError * _lastError;
    bool  _locationLocation0;
    bool  _locationLocationNil;
    NSString * _locationTrackName;
    double  _machTimeSince1970;
    bool  _motionLocation0;
    bool  _motionLocationNil;
    NSString * _motionTrackName;
    NSString * _osVersion;
    NSString * _prDeviceTrackName;
    NSString * _productConfig;
    NSString * _productVersion;
    NSString * _ryfTimedValueTrackName;
    NSString * _serialNumber;
    NSString * _spuIMUTrackName;
    NSMutableDictionary * _spuVersions;
    NSMutableDictionary * _streamFilters;
    NSString * _userEventTrackName;
    NSString * _version;
    NSString * _wifiTrackName;
}

@property (nonatomic, retain) NSString *accelTrackName;
@property (nonatomic, retain) NSString *alsTrackName;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *compassTrackName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *depthOutputFrameRate;
@property (readonly) NSNumber *depthSourceFrameRate;
@property (readonly) NSNumber *depthSourceMaxPoints;
@property (nonatomic, retain) NSString *depthTOFTrackName;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceMotionTrackName;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *deviceString;
@property (nonatomic, retain) NSDictionary *enforcedVideoTrackFormat;
@property (nonatomic, retain) CIContext *filterContext;
@property (nonatomic, retain) NSString *gyroTrackName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, retain) NSString *locationTrackName;
@property (nonatomic, retain) NSString *motionTrackName;
@property (nonatomic, retain) NSString *prDeviceTrackName;
@property (nonatomic, retain) NSString *productConfig;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *ryfTimedValueTrackName;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) NSString *spuIMUTrackName;
@property (nonatomic, retain) NSMutableDictionary *streamFilters;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userEventTrackName;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) NSString *wifiTrackName;

+ (id)grabCMSessionID:(id)arg1;
+ (id)grabJasperExtrinsics:(id)arg1 backExtrinsics:(id)arg2;
+ (bool)grabSWToWExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 summary:(id)arg2 backExtrinsics:(id)arg3;
+ (bool)isSuperWideStream:(id)arg1;

- (void).cxx_destruct;
- (id)accelTrackName;
- (void)addStreamFilter:(id)arg1 obj:(id)arg2;
- (void)addStreamFilters:(id)arg1;
- (id)alsTrackName;
- (id)applyFlip:(id)arg1 f:(id)arg2;
- (id)bundleID;
- (id)compassTrackName;
- (struct __CVBuffer { }*)copyNextFrameForStream:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (id)depthOutputFrameRate;
- (id)depthSourceFrameRate;
- (id)depthSourceMaxPoints;
- (id)depthTOFTrackName;
- (id)deviceMotionTrackName;
- (id)deviceName;
- (id)deviceString;
- (id)deviceStringFromPlatformID:(id)arg1;
- (id)enforcedVideoTrackFormat;
- (id)filterContext;
- (id)grabCalibration;
- (id)grabCalibration:(long long*)arg1;
- (id)grabJasperExtrinsics;
- (id)grabMovieMetadataForKey:(id)arg1;
- (id)grabMovieMetadataItem:(id)arg1;
- (id)grabMovieMetadataRawForKey:(id)arg1;
- (id)grabNextCLLocation;
- (id)grabNextCLLocation:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextCLLocation:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2 timestamps:(out id*)arg3;
- (id)grabNextCMData;
- (id)grabNextCMData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextCMDeviceMotion;
- (id)grabNextCMDeviceMotion:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextCVACameraCalibrationData;
- (id)grabNextCVACameraCalibrationData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextClass:(id)arg1 class:(Class)arg2;
- (id)grabNextClass:(id)arg1 class:(Class)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3;
- (id)grabNextDepthIR;
- (id)grabNextDepthIR:(id)arg1;
- (id)grabNextDepthIR:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)grabNextDepthTOF;
- (id)grabNextDepthTOF:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextDepthTOF:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 sampleDropped:(bool*)arg2;
- (id)grabNextDeviceMotionData;
- (id)grabNextDeviceMotionData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextDeviceMotionData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextDictionary:(id)arg1;
- (id)grabNextDictionary:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)grabNextFastPathMUData:(long long*)arg1;
- (id)grabNextFeatureBuffer;
- (id)grabNextFeatureBuffer:(id)arg1;
- (id)grabNextFeatureBuffer:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 streamName:(id)arg2;
- (id)grabNextMotionData;
- (id)grabNextMotionData:(long long*)arg1;
- (id)grabNextMotionData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2;
- (id)grabNextNSCoderObject:(id)arg1 class:(Class)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3;
- (id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2;
- (id)grabNextNSCoderObject:(id)arg1 classes:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3;
- (id)grabNextPRDevice;
- (id)grabNextPRDevice:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextRawALSData:(long long*)arg1;
- (id)grabNextRawALSData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextRawAccelData;
- (id)grabNextRawAccelData:(long long*)arg1;
- (id)grabNextRawAccelData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextRawCompassData;
- (id)grabNextRawCompassData:(long long*)arg1;
- (id)grabNextRawCompassData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextRawGyroData;
- (id)grabNextRawGyroData:(long long*)arg1;
- (id)grabNextRawGyroData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextRawWiFiData:(long long*)arg1;
- (id)grabNextRawWiFiData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextSpuIMUData:(long long*)arg1;
- (id)grabNextSpuIMUData:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 location:(long long*)arg2;
- (id)grabNextStreamData:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)grabNextTimedValue;
- (id)grabNextTimedValue:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (id)grabNextUserEvent;
- (id)grabNextUserEvent:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (bool)grabSWToWExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1;
- (id)grabSummary;
- (id)gyroTrackName;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithFileURL:(id)arg1 enforcedVideoTrackFormat:(id)arg2 error:(id*)arg3;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)lastError;
- (id)locationTrackName;
- (id)mapProductToDevice:(id)arg1;
- (id)motionTrackName;
- (id)prDeviceTrackName;
- (id)productConfig;
- (id)productVersion;
- (unsigned int)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned int)arg3;
- (bool)resetReaderTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (id)resolvedAccelStreamName:(long long*)arg1;
- (id)resolvedCalibration:(long long*)arg1;
- (id)resolvedCompassStreamName:(long long*)arg1;
- (id)resolvedDeviceMotionStreamName:(long long*)arg1;
- (id)resolvedGyroStreamName:(long long*)arg1;
- (id)resolvedLocationStreamName:(long long*)arg1;
- (id)resolvedMotionStreamName:(long long*)arg1;
- (id)resolvedSpuIMUStreamName:(long long*)arg1;
- (id)ryfTimedValueTrackName;
- (id)serialNumber;
- (void)setAccelTrackName:(id)arg1;
- (void)setAlsTrackName:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCompassTrackName:(id)arg1;
- (void)setDepthOutputFrameRate:(id)arg1;
- (void)setDepthTOFTrackName:(id)arg1;
- (void)setDeviceMotionTrackName:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceString:(id)arg1;
- (void)setEnforcedVideoTrackFormat:(id)arg1;
- (void)setFilterContext:(id)arg1;
- (void)setGyroTrackName:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setLocationTrackName:(id)arg1;
- (void)setMotionTrackName:(id)arg1;
- (void)setPrDeviceTrackName:(id)arg1;
- (void)setProductConfig:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setRyfTimedValueTrackName:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSpuIMUTrackName:(id)arg1;
- (void)setStreamFilters:(id)arg1;
- (void)setUserEventTrackName:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setWifiTrackName:(id)arg1;
- (id)spuIMUTrackName;
- (id)streamFilters;
- (id)userEventTrackName;
- (id)version;
- (id)wifiTrackName;

@end