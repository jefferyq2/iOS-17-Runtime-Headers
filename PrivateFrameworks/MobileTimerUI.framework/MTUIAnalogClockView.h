
@interface MTUIAnalogClockView : UIView <MTClock> {
    NSCalendar * _calendar;
    UIView * _dayHands;
    UIImage * _faceDayImage;
    UIImage * _faceNightImage;
    UIImageView * _faceView;
    int  _flutterIndex;
    bool  _isRenderStateStale;
    UIImageView * _middleDotDay;
    UIImageView * _middleDotNight;
    UIImageView * _middleRedDot;
    bool  _minuteHourAnimationTriggered;
    UIView * _nightHands;
    bool  _nighttime;
    long long  _runMode;
    double  _seconds;
    NSDate * _time;
}

@property (nonatomic, readonly) UIImageView *faceView;
@property (nonatomic, readonly) long long hour;
@property (nonatomic, readonly) long long minute;
@property (getter=isNighttime, nonatomic, readonly) bool nighttime;
@property (nonatomic) long long runMode;
@property (getter=isStarted, nonatomic, readonly) bool started;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) NSDate *time;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (void)adjustNumberalCenter:(struct CGPoint { double x1; double x2; }*)arg1 forNumeralIndex:(long long)arg2;
+ (id)analogClockWithStyle:(long long)arg1;
+ (double)antialiasPaddingRatio;
+ (id)cacheTopLevelPath;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (Class)classForStyle:(long long)arg1;
+ (id)clockFaceForDaytime:(bool)arg1;
+ (id)clockFaceForDaytime:(bool)arg1 ignoreCache:(bool)arg2;
+ (id)clockHand:(long long)arg1 daytime:(bool)arg2;
+ (struct CGSize { double x1; double x2; })clockSize;
+ (id)dayTimeFaceColor;
+ (id)dayTimeHourHandColor;
+ (id)dayTimeMinuteHandColor;
+ (id)dayTimeOverHourHandDotColor;
+ (id)dayTimeSecondHandColor;
+ (id)dayTimeTextColor;
+ (bool)doesFaceHaveShadow;
+ (double)faceRadius;
+ (struct CGPoint { double x1; double x2; })handRotationalCenterForHand:(long long)arg1;
+ (bool)hasOverHourHandDot;
+ (bool)hasOverSecondHandDot;
+ (double)hourHandLength;
+ (double)hourHandWidth;
+ (id)imageCacheNameForType:(int)arg1 daytime:(bool)arg2;
+ (id)imageForType:(int)arg1 dayTime:(bool)arg2 generation:(id /* block */)arg3;
+ (id)imageForType:(int)arg1 dayTime:(bool)arg2 generation:(id /* block */)arg3 ignoreCache:(bool)arg4;
+ (id)imageInBundleForName:(id)arg1;
+ (void)initialize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForStyle:(long long)arg1;
+ (bool)isClockRegistered:(id)arg1;
+ (id)makeClockFaceForDaytime:(bool)arg1;
+ (id)makeClockHand:(long long)arg1 daytime:(bool)arg2;
+ (id)makeDotImageSize:(double)arg1 color:(id)arg2;
+ (id)makeOverSecondHandDotImage;
+ (double)minuteHandLength;
+ (double)minuteHandWidth;
+ (id)nightTimeFaceColor;
+ (id)nightTimeHourHandColor;
+ (id)nightTimeMinuteHandColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)nightTimeSecondHandColor;
+ (id)nightTimeTextColor;
+ (id)numeralFont;
+ (double)numeralInset;
+ (id)overHourHandDotForDayTime:(bool)arg1;
+ (id)overHourHandDotImageForDaytime:(bool)arg1;
+ (double)overHourHandDotSize;
+ (id)overSecondHandDotColor;
+ (id)overSecondHandDotImage;
+ (double)overSecondHandDotSize;
+ (void)registerClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (id)resourcePath;
+ (double)secondHandLength;
+ (double)secondHandMainLength;
+ (double)secondHandOverhangLength;
+ (double)secondHandWidth;
+ (id)shadowInfoAtIndex:(unsigned long long)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowInsets;
+ (struct CGPoint { double x1; double x2; })shadowRotationalCenterForHand:(long long)arg1;
+ (bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(bool)arg2;
+ (struct CGSize { double x1; double x2; })sizeForStyle:(long long)arg1;
+ (long long)style;
+ (void)unregisterClock:(id)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)updateFlutterForAllTicking;
+ (void)updateTimeForAllSweeping;
+ (void)updateTimeForAllTicking;

- (void).cxx_destruct;
- (double)coarseUpdateInterval;
- (id)faceView;
- (void)handleLocaleChange;
- (long long)hour;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isNighttime;
- (bool)isStarted;
- (long long)minute;
- (void)redrawSecondHand;
- (long long)runMode;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2;
- (void)setHandTransformForHandIndex:(long long)arg1;
- (void)setNighttime:(bool)arg1;
- (void)setRunMode:(long long)arg1;
- (void)setTime:(id)arg1;
- (void)setTime:(id)arg1 animated:(bool)arg2;
- (void)setTimeZone:(id)arg1;
- (void)start;
- (void)stop;
- (long long)style;
- (id)time;
- (id)timeZone;
- (void)updateFlutter;
- (double)updateInterval;
- (void)updateTime;
- (void)updateTimeAnimated:(bool)arg1;
- (void)updateTimeContinuously:(long long)arg1;

@end