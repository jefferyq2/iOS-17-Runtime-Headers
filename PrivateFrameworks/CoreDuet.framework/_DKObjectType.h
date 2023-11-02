
@interface _DKObjectType : NSObject <NSCopying, NSSecureCoding> {
    Class  _objectClass;
    long long  _typeCode;
}

@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) long long typeCode;

+ (Class)associatedObjectClass;
+ (id)objectTypeFromClass:(Class)arg1;
+ (id)objectTypeWithName:(id)arg1;
+ (id)objectTypeWithTypeCode:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeCodeFromName:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (long long)typeCode;

@end