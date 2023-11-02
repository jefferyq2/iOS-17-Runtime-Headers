
@interface FTNormalizedToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct NormalizedToken { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *nbest_variants;
@property (nonatomic, readonly) NSString *original_token;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::NormalizedToken> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)nbest_variants;
- (unsigned long long)nbest_variants_count;
- (void)nbest_variants_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)nbest_variants_objectAtIndex:(unsigned long long)arg1;
- (id)original_token;

@end