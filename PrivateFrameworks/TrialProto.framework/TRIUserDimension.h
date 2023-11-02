
@interface TRIUserDimension : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _value;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *value;

+ (id)dimensionWithName:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end