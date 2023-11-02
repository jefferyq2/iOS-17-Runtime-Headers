
@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _interval;
    NSDictionary * _microLocationProbabilityVector;
    NSString * _outputDeviceID;
}

@property (nonatomic, readonly, copy) NSDateInterval *interval;
@property (nonatomic, readonly) NSDictionary *microLocationProbabilityVector;
@property (nonatomic, readonly, copy) NSString *outputDeviceID;

+ (double)microLocationCorrelationGracePeriod;
+ (double)minimumRoutingEventDuration;
+ (double)routingSessionTimeout;
+ (id)routingSessionsFromNowPlayingEvents:(id)arg1 microLocationEvents:(id)arg2 routingSessionTimeout:(double)arg3;
+ (bool)supportsSecureCoding;
+ (void)writeSessions:(id)arg1 routingSessionTimeout:(double)arg2 file:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputDeviceID:(id)arg1 interval:(id)arg2 microLocationProbabilityVector:(id)arg3;
- (id)interval;
- (id)microLocationProbabilityVector;
- (id)outputDeviceID;

@end