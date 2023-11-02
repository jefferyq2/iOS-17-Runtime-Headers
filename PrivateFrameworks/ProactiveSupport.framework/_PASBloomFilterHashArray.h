
@interface _PASBloomFilterHashArray : NSObject {
    int * _data;
    unsigned long long  _size;
}

@property (nonatomic, readonly) int*hashes;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int*)hashes;
- (id)initInternal;
- (id)initWithCapacity:(unsigned long long)arg1;

@end