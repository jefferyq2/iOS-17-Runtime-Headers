
@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {
    int  _cacheState;
    long long  _connectDuration;
    long long  _dnsDuration;
    long long  _errorCode;
    struct { 
        unsigned int connectDuration : 1; 
        unsigned int dnsDuration : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatusCode : 1; 
        unsigned int requestDuration : 1; 
        unsigned int responseDuration : 1; 
        unsigned int responseSize : 1; 
        unsigned int startTime : 1; 
        unsigned int cacheState : 1; 
    }  _has;
    long long  _httpStatusCode;
    long long  _requestDuration;
    long long  _responseDuration;
    long long  _responseSize;
    long long  _startTime;
}

@property (nonatomic) int cacheState;
@property (nonatomic) long long connectDuration;
@property (nonatomic) long long dnsDuration;
@property (nonatomic) long long errorCode;
@property (nonatomic) bool hasCacheState;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasDnsDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasHttpStatusCode;
@property (nonatomic) bool hasRequestDuration;
@property (nonatomic) bool hasResponseDuration;
@property (nonatomic) bool hasResponseSize;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) long long httpStatusCode;
@property (nonatomic) long long requestDuration;
@property (nonatomic) long long responseDuration;
@property (nonatomic) long long responseSize;
@property (nonatomic) long long startTime;

- (int)cacheState;
- (long long)connectDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)dnsDuration;
- (long long)errorCode;
- (bool)hasCacheState;
- (bool)hasConnectDuration;
- (bool)hasDnsDuration;
- (bool)hasErrorCode;
- (bool)hasHttpStatusCode;
- (bool)hasRequestDuration;
- (bool)hasResponseDuration;
- (bool)hasResponseSize;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (long long)httpStatusCode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)requestDuration;
- (long long)responseDuration;
- (long long)responseSize;
- (void)setCacheState:(int)arg1;
- (void)setConnectDuration:(long long)arg1;
- (void)setDnsDuration:(long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setHasCacheState:(bool)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasDnsDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasHttpStatusCode:(bool)arg1;
- (void)setHasRequestDuration:(bool)arg1;
- (void)setHasResponseDuration:(bool)arg1;
- (void)setHasResponseSize:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHttpStatusCode:(long long)arg1;
- (void)setRequestDuration:(long long)arg1;
- (void)setResponseDuration:(long long)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)writeTo:(id)arg1;

@end