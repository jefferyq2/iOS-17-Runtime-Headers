
@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (unsigned char)_getValue:(void*)arg1 forType:(long long)arg2;
- (bool)_isDeallocating;
- (long long)_reverseCompare:(id)arg1;
- (bool)_tryRetain;
- (bool)boolValue;
- (BOOL)charValue;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (unsigned long long)hash;
- (int)intValue;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end