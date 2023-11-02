
@interface HKCodableDateComponents : PBCodable <NSCopying> {
    NSString * _calendar;
    long long  _day;
    long long  _era;
    struct APPLE_HKCodableDateComponents_1 { 
        unsigned int day : 1; 
        unsigned int era : 1; 
        unsigned int hour : 1; 
        unsigned int minute : 1; 
        unsigned int month : 1; 
        unsigned int nanosecond : 1; 
        unsigned int quarter : 1; 
        unsigned int second : 1; 
        unsigned int weekOfMonth : 1; 
        unsigned int weekOfYear : 1; 
        unsigned int weekday : 1; 
        unsigned int weekdayOrdinal : 1; 
        unsigned int year : 1; 
        unsigned int yearForWeekOfYear : 1; 
    }  _has;
    long long  _hour;
    long long  _minute;
    long long  _month;
    long long  _nanosecond;
    long long  _quarter;
    long long  _second;
    NSString * _timeZone;
    long long  _weekOfMonth;
    long long  _weekOfYear;
    long long  _weekday;
    long long  _weekdayOrdinal;
    long long  _year;
    long long  _yearForWeekOfYear;
}

@property (nonatomic, retain) NSString *calendar;
@property (nonatomic) long long day;
@property (nonatomic) long long era;
@property (nonatomic, readonly) bool hasCalendar;
@property (nonatomic) bool hasDay;
@property (nonatomic) bool hasEra;
@property (nonatomic) bool hasHour;
@property (nonatomic) bool hasMinute;
@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasNanosecond;
@property (nonatomic) bool hasQuarter;
@property (nonatomic) bool hasSecond;
@property (nonatomic, readonly) bool hasTimeZone;
@property (nonatomic) bool hasWeekOfMonth;
@property (nonatomic) bool hasWeekOfYear;
@property (nonatomic) bool hasWeekday;
@property (nonatomic) bool hasWeekdayOrdinal;
@property (nonatomic) bool hasYear;
@property (nonatomic) bool hasYearForWeekOfYear;
@property (nonatomic) long long hour;
@property (nonatomic) long long minute;
@property (nonatomic) long long month;
@property (nonatomic) long long nanosecond;
@property (nonatomic) long long quarter;
@property (nonatomic) long long second;
@property (nonatomic, retain) NSString *timeZone;
@property (nonatomic) long long weekOfMonth;
@property (nonatomic) long long weekOfYear;
@property (nonatomic) long long weekday;
@property (nonatomic) long long weekdayOrdinal;
@property (nonatomic) long long year;
@property (nonatomic) long long yearForWeekOfYear;

- (void).cxx_destruct;
- (id)calendar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)day;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)era;
- (bool)hasCalendar;
- (bool)hasDay;
- (bool)hasEra;
- (bool)hasHour;
- (bool)hasMinute;
- (bool)hasMonth;
- (bool)hasNanosecond;
- (bool)hasQuarter;
- (bool)hasSecond;
- (bool)hasTimeZone;
- (bool)hasWeekOfMonth;
- (bool)hasWeekOfYear;
- (bool)hasWeekday;
- (bool)hasWeekdayOrdinal;
- (bool)hasYear;
- (bool)hasYearForWeekOfYear;
- (unsigned long long)hash;
- (long long)hour;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (bool)readFrom:(id)arg1;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHasDay:(bool)arg1;
- (void)setHasEra:(bool)arg1;
- (void)setHasHour:(bool)arg1;
- (void)setHasMinute:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasNanosecond:(bool)arg1;
- (void)setHasQuarter:(bool)arg1;
- (void)setHasSecond:(bool)arg1;
- (void)setHasWeekOfMonth:(bool)arg1;
- (void)setHasWeekOfYear:(bool)arg1;
- (void)setHasWeekday:(bool)arg1;
- (void)setHasWeekdayOrdinal:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setHasYearForWeekOfYear:(bool)arg1;
- (void)setHour:(long long)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (void)writeTo:(id)arg1;
- (long long)year;
- (long long)yearForWeekOfYear;

@end