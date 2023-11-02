
@interface WeatherView : UIView <CityUpdateObserver> {
    City * _city;
    NSLocale * _lastLocale;
    bool  _showWind;
    bool  _showingDay;
    UIView * _windView;
}

@property (setter=showCity:, nonatomic, retain) City *city;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_setCity:(id)arg1 associateAsDelegate:(bool)arg2;
- (id)bundle;
- (id)city;
- (void)cityDidFinishWeatherUpdate:(id)arg1;
- (void)cityDidStartWeatherUpdate:(id)arg1;
- (void)cleanupWindView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)refreshLocalization;
- (void)resetLocale:(id)arg1;
- (void)showCity:(id)arg1;
- (bool)updateWeatherDisplayForCity:(id)arg1;

@end