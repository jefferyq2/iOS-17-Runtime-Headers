
@interface CMCameraFitnessMachineSample : NSObject {
    float  _averageCadence;
    float  _averageHeartRate;
    float  _averagePace;
    float  _averagePower;
    float  _averageSpeed;
    float  _crossTrainerDistance;
    double  _elapsedTime;
    float  _elevationGain;
    float  _energy;
    int  _floors;
    double  _globalMachtime;
    float  _inclination;
    float  _indoorBikeDistance;
    float  _instantaneousCadence;
    float  _instantaneousHeartRate;
    float  _instantaneousPace;
    float  _instantaneousPower;
    float  _instantaneousSpeed;
    double  _localMachtime;
    float  _resistanceLevel;
    int  _stepCount;
    float  _strideCount;
    float  _treadmillDistance;
}

@property (nonatomic) float averageCadence;
@property (nonatomic) float averageHeartRate;
@property (nonatomic) float averagePace;
@property (nonatomic) float averagePower;
@property (nonatomic) float averageSpeed;
@property (nonatomic) float crossTrainerDistance;
@property (nonatomic) double elapsedTime;
@property (nonatomic) float elevationGain;
@property (nonatomic) float energy;
@property (nonatomic) int floors;
@property (nonatomic) double globalMachtime;
@property (nonatomic) float inclination;
@property (nonatomic) float indoorBikeDistance;
@property (nonatomic) float instantaneousCadence;
@property (nonatomic) float instantaneousHeartRate;
@property (nonatomic) float instantaneousPace;
@property (nonatomic) float instantaneousPower;
@property (nonatomic) float instantaneousSpeed;
@property (nonatomic) double localMachtime;
@property (nonatomic) float resistanceLevel;
@property (nonatomic) int stepCount;
@property (nonatomic) float strideCount;
@property (nonatomic) float treadmillDistance;

- (float)averageCadence;
- (float)averageHeartRate;
- (float)averagePace;
- (float)averagePower;
- (float)averageSpeed;
- (float)crossTrainerDistance;
- (double)elapsedTime;
- (float)elevationGain;
- (float)energy;
- (int)floors;
- (double)globalMachtime;
- (float)inclination;
- (float)indoorBikeDistance;
- (float)instantaneousCadence;
- (float)instantaneousHeartRate;
- (float)instantaneousPace;
- (float)instantaneousPower;
- (float)instantaneousSpeed;
- (double)localMachtime;
- (float)resistanceLevel;
- (void)setAverageCadence:(float)arg1;
- (void)setAverageHeartRate:(float)arg1;
- (void)setAveragePace:(float)arg1;
- (void)setAveragePower:(float)arg1;
- (void)setAverageSpeed:(float)arg1;
- (void)setCrossTrainerDistance:(float)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElevationGain:(float)arg1;
- (void)setEnergy:(float)arg1;
- (void)setFloors:(int)arg1;
- (void)setGlobalMachtime:(double)arg1;
- (void)setInclination:(float)arg1;
- (void)setIndoorBikeDistance:(float)arg1;
- (void)setInstantaneousCadence:(float)arg1;
- (void)setInstantaneousHeartRate:(float)arg1;
- (void)setInstantaneousPace:(float)arg1;
- (void)setInstantaneousPower:(float)arg1;
- (void)setInstantaneousSpeed:(float)arg1;
- (void)setLocalMachtime:(double)arg1;
- (void)setResistanceLevel:(float)arg1;
- (void)setStepCount:(int)arg1;
- (void)setStrideCount:(float)arg1;
- (void)setTreadmillDistance:(float)arg1;
- (int)stepCount;
- (float)strideCount;
- (float)treadmillDistance;

@end