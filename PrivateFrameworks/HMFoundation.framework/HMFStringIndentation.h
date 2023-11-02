
@interface HMFStringIndentation : HMFObject {
    unsigned long long  _level;
    unsigned long long  _width;
}

@property (readonly) unsigned long long level;
@property (readonly) unsigned long long width;

+ (id)indentation;
+ (id)indentationWithWidth:(unsigned long long)arg1;

- (id)description;
- (id)indentationByLevels:(long long)arg1;
- (id)init;
- (id)initWithWidth:(unsigned long long)arg1;
- (unsigned long long)level;
- (unsigned long long)width;

@end