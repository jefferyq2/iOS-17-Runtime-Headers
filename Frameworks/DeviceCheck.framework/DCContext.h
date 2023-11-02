
@interface DCContext : NSObject <NSSecureCoding> {
    NSString * _clientAppID;
}

@property (copy) NSString *clientAppID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientAppID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClientAppID:(id)arg1;

@end