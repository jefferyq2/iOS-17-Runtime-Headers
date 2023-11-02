
@interface _UIDatePickerComponent : NSObject {
    unsigned long long  _calendarUnit;
    unsigned long long  _equivalentUnit;
    NSString * _formatString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _unitRange;
    double  _width;
}

@property (nonatomic, readonly) unsigned long long calendarUnit;
@property (nonatomic, readonly) unsigned long long equivalentUnit;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } unitRange;
@property (nonatomic) double width;

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(bool)arg3;
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(bool)arg3 desiredUnits:(long long)arg4;

- (void).cxx_destruct;
- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (unsigned long long)calendarUnit;
- (id)description;
- (unsigned long long)equivalentUnit;
- (id)formatString;
- (void)setUnitRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setWidth:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })unitRange;
- (double)width;

@end