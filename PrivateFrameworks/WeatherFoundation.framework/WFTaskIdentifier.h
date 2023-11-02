
@interface WFTaskIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    int  _pid;
    NSString * _processName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;

+ (id)defaultIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)processName;

@end