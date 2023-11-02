
@interface Foundation.__NSSwiftData : NSData {
    void _backing;
    void _range;
}

@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) long long length;

- (void).cxx_destruct;
- (bool)_isCompact;
- (bool)_providesConcreteBacking;
- (void*)bytes;
- (id)copyWithZone:(void*)arg1;
- (id)init;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (long long)length;
- (id)mutableCopyWithZone:(void*)arg1;

@end