
@interface PBUIParallaxSettings : PTSettings {
    long long  _distanceFromScreen;
    bool  _increaseEnabled;
    long long  _slideDirectionX;
    long long  _slideDirectionY;
    bool  _slideEnabled;
    double  _slideIncreaseX;
    double  _slideIncreaseY;
    double  _slidePixelsX;
    double  _slidePixelsY;
    double  _tiltDegreesX;
    double  _tiltDegreesY;
    long long  _tiltDirectionX;
    long long  _tiltDirectionY;
    bool  _tiltEnabled;
}

@property long long distanceFromScreen;
@property bool increaseEnabled;
@property long long slideDirectionX;
@property long long slideDirectionY;
@property bool slideEnabled;
@property double slideIncreaseX;
@property double slideIncreaseY;
@property double slidePixelsX;
@property double slidePixelsY;
@property double tiltDegreesX;
@property double tiltDegreesY;
@property long long tiltDirectionX;
@property long long tiltDirectionY;
@property bool tiltEnabled;

+ (id)settingsControllerModule;

- (long long)distanceFromScreen;
- (bool)increaseEnabled;
- (void)setDefaultValues;
- (void)setDistanceFromScreen:(long long)arg1;
- (void)setIncreaseEnabled:(bool)arg1;
- (void)setSlideDirectionX:(long long)arg1;
- (void)setSlideDirectionY:(long long)arg1;
- (void)setSlideEnabled:(bool)arg1;
- (void)setSlideIncreaseX:(double)arg1;
- (void)setSlideIncreaseY:(double)arg1;
- (void)setSlidePixelsX:(double)arg1;
- (void)setSlidePixelsY:(double)arg1;
- (void)setTiltDegreesX:(double)arg1;
- (void)setTiltDegreesY:(double)arg1;
- (void)setTiltDirectionX:(long long)arg1;
- (void)setTiltDirectionY:(long long)arg1;
- (void)setTiltEnabled:(bool)arg1;
- (long long)slideDirectionX;
- (long long)slideDirectionY;
- (bool)slideEnabled;
- (double)slideIncreaseX;
- (double)slideIncreaseY;
- (double)slidePixelsX;
- (double)slidePixelsY;
- (double)tiltDegreesX;
- (double)tiltDegreesY;
- (long long)tiltDirectionX;
- (long long)tiltDirectionY;
- (bool)tiltEnabled;

@end