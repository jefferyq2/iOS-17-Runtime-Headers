
@interface CMSensorRecorder : NSObject

+ (long long)authorizationStatus;
+ (bool)isAccelerometerRecordingAvailable;
+ (bool)isAuthorizedForRecording;
+ (bool)isGyroRecordingAvailable;
+ (bool)isPressureRecordingAvailable;
+ (bool)isRecordingAvailableForType:(int)arg1;

- (id)accelerometerDataFrom:(id)arg1 to:(id)arg2;
- (id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)accelerometerDataSince:(unsigned long long)arg1;
- (id)accelerometerDataSinceId:(unsigned long long)arg1;
- (id)gyroDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)gyroDataSinceId:(unsigned long long)arg1;
- (id)pressureDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)pressureDataSinceId:(unsigned long long)arg1;
- (void)recordAccelerometerFor:(double)arg1;
- (void)recordAccelerometerForDuration:(double)arg1;
- (void)recordDataType:(int)arg1 forDuration:(double)arg2;
- (void)recordGyroForDuration:(double)arg1;
- (void)recordPressureForDuration:(double)arg1;
- (bool)sendAccelDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (bool)sendGyroDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (bool)sendPressureDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (bool)sendSensorDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 forType:(int)arg4;
- (id)sensorDataFromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3;
- (bool)setAccelSampleRate:(unsigned int)arg1;
- (bool)setGyroSampleRate:(unsigned int)arg1;
- (bool)setPressureSampleRate:(unsigned int)arg1;
- (bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (bool)validateTimesFromDate:(id*)arg1 toDate:(id)arg2;

@end