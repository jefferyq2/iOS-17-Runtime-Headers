
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {
    struct _filesec { } * _filesec;
}

+ (id)__new:(struct _filesec { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (struct _filesec { }*)_filesec;
- (bool)clearProperties:(unsigned long long)arg1;
- (bool)copyAccessControlList:(struct _acl {}**)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)getGroup:(unsigned int*)arg1;
- (bool)getGroupUUID:(unsigned char*)arg1;
- (bool)getMode:(unsigned short*)arg1;
- (bool)getOwner:(unsigned int*)arg1;
- (bool)getOwnerUUID:(unsigned char*)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)setAccessControlList:(struct _acl { }*)arg1;
- (bool)setGroup:(unsigned int)arg1;
- (bool)setGroupUUID:(unsigned char)arg1;
- (bool)setMode:(unsigned short)arg1;
- (bool)setOwner:(unsigned int)arg1;
- (bool)setOwnerUUID:(unsigned char)arg1;

@end