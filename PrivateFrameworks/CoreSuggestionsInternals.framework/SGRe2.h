
@interface SGRe2 : NSObject {
    unsigned char  _isTrivial;
}

+ (id)re2WithRegexp:(id)arg1;
+ (id)re2WithRegexpData:(id)arg1;
+ (id)re2WithRegexpDataLazy:(id)arg1;
+ (id)re2WithRegexpLazy:(id)arg1;
+ (id)re2WithSubregexps:(id)arg1;
+ (id)re2WithSubregexps:(id)arg1 prefilter:(id)arg2;
+ (void)setCacheLimitForTesting:(unsigned long long)arg1;

- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 blockWithSubregexp:(id /* block */)arg3;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 blockWithSubregexp:(id /* block */)arg4;
- (id)existsInString:(id)arg1;
- (id)existsInUtf8:(const char *)arg1;
- (id)hashId;
- (bool)isTrivial;
- (id)matchesString:(id)arg1;
- (id)matchesUtf8:(const char *)arg1;

@end