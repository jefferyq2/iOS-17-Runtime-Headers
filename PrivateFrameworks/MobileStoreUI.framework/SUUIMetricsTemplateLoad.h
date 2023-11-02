
@interface SUUIMetricsTemplateLoad : NSObject <NSCopying> {
    double  _requestStartTime;
    double  _responseEndTime;
    double  _responseStartTime;
    bool  _responseWasCached;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) bool responseWasCached;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (bool)responseWasCached;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setResponseWasCached:(bool)arg1;

@end