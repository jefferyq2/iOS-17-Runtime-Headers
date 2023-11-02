
@interface ALCity : NSObject {
    NSString * _countryName;
    NSString * _countryOverride;
    bool  _displayNameIncludingCountryShowsOnlyCountry;
    int  _identifier;
    NSString * _identifierForCPCity;
    float  _latitude;
    NSString * _localeCode;
    bool  _localizationAttempted;
    float  _longitude;
    NSString * _name;
    NSString * _timeZone;
    NSString * _unlocalizedCountryName;
    NSString * _unlocalizedCountryOverride;
    NSString * _unlocalizedName;
    NSString * _yahooCode;
}

@property (nonatomic, readonly) NSString *classicIdentifier;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic, retain) NSString *countryOverride;
@property (nonatomic) bool displayNameIncludingCountryShowsOnlyCountry;
@property (nonatomic) int identifier;
@property (nonatomic) float latitude;
@property (nonatomic, retain) NSString *localeCode;
@property (nonatomic) float longitude;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, retain) NSString *timeZone;
@property (nonatomic, retain) NSString *unlocalizedCountryName;
@property (nonatomic, retain) NSString *unlocalizedCountryOverride;
@property (nonatomic, retain) NSString *unlocalizedName;
@property (nonatomic, retain) NSString *yahooCode;

- (id)classicIdentifier;
- (id)countryName;
- (id)countryOverride;
- (void)dealloc;
- (id)description;
- (id)displayNameIncludingCountry:(bool)arg1;
- (id)displayNameIncludingCountry:(bool)arg1 withFormat:(id)arg2;
- (bool)displayNameIncludingCountryShowsOnlyCountry;
- (void)ensureLocalized;
- (unsigned long long)hash;
- (int)identifier;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)initWithSQLRow:(char **)arg1;
- (bool)isEqual:(id)arg1;
- (float)latitude;
- (id)localeCode;
- (float)longitude;
- (id)name;
- (id)properties;
- (void)setCountryName:(id)arg1;
- (void)setCountryOverride:(id)arg1;
- (void)setDisplayNameIncludingCountryShowsOnlyCountry:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocaleCode:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (void)setYahooCode:(id)arg1;
- (id)timeZone;
- (id)unlocalizedCountryName;
- (id)unlocalizedCountryOverride;
- (id)unlocalizedName;
- (id)yahooCode;

@end