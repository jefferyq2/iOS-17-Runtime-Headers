
@interface HDDataCollectorState : NSObject <NSCopying> {
    unsigned long long  _collectionType;
    long long  _priority;
    unsigned long long  _sourceType;
}

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long sourceType;

- (unsigned long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)priority;
- (void)setCollectionType:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (unsigned long long)sourceType;

@end