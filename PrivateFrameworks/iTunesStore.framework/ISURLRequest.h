
@interface ISURLRequest : NSObject <NSCopying, NSSecureCoding> {
    NSLock * _lock;
    SSMutableURLRequestProperties * _properties;
}

@property (retain) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (retain) NSString *HTTPMethod;
@property long long URLBagType;
@property (retain) NSArray *URLs;
@property long long allowedRetryCount;
@property (retain) NSString *appleClientApplication;
@property unsigned long long cachePolicy;
@property (retain) NSDictionary *customHeaders;
@property long long expectedContentLength;
@property (readonly) NSURL *primaryURL;
@property (retain) NSDictionary *queryStringDictionary;
@property double timeoutInterval;

+ (id)requestWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPMethod;
- (long long)URLBagType;
- (id)URLs;
- (id)_initCommon;
- (long long)allowedRetryCount;
- (id)appleClientApplication;
- (unsigned long long)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHeaders;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)primaryURL;
- (id)queryStringDictionary;
- (id)requestProperties;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setAppleClientApplication:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURLBagType:(long long)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (double)timeoutInterval;

@end