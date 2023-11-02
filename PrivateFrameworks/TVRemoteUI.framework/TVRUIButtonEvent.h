
@interface TVRUIButtonEvent : NSObject {
    long long  _buttonType;
    long long  _eventType;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (id)createButtonEvent:(long long)arg1 buttonType:(long long)arg2;

- (void).cxx_destruct;
- (id)_initWithButtonType:(long long)arg1 eventType:(long long)arg2;
- (long long)buttonType;
- (id)description;
- (long long)eventType;
- (id)timestamp;

@end