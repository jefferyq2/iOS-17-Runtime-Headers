
@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {
    NSData * _compressedData;
    unsigned long long  _uncompressedLength;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end