
@interface VMHandle : NSObject <NSCopying, VMSecureCoding> {
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (long long)type;
- (id)value;

@end