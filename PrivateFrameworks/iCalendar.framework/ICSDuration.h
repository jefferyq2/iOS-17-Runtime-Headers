
@interface ICSDuration : NSObject <NSSecureCoding> {
    double  _duration;
}

+ (id)durationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
+ (id)generateDurationFromICSString:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (long long)days;
- (void)encodeWithCoder:(id)arg1;
- (long long)hours;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5;
- (bool)isNegative;
- (long long)minutes;
- (long long)seconds;
- (double)timeInterval;
- (long long)weeks;

@end