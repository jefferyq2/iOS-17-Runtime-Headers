
@interface CNEqualsBuilder : NSObject

+ (bool)evaluateBuilderBlock:(id /* block */)arg1 remainingBlocks:(char *)arg2;
+ (bool)isBool:(bool)arg1 equalToOther:(bool)arg2;
+ (bool)isDouble:(double)arg1 equalToOther:(double)arg2 withAccuracy:(double)arg3;
+ (bool)isInteger:(long long)arg1 equalToOther:(long long)arg2;
+ (bool)isObject:(id)arg1 equalToOther:(id)arg2;
+ (bool)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(id /* block */)arg3;
+ (bool)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(id /* block */)arg4;
+ (bool)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(id /* block */)arg4;
+ (bool)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(id /* block */)arg3;
+ (bool)isString:(id)arg1 localizedCaseInsensitiveEqualToOther:(id)arg2;

@end