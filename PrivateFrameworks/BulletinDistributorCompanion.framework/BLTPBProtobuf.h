
@interface BLTPBProtobuf : IDSProtobuf {
    IDSProtobuf * _idsProtobuf;
    PBCodable * _protobuf;
    long long  _sequenceNumberError;
    unsigned long long  _sessionState;
}

@property (nonatomic, retain) IDSProtobuf *idsProtobuf;
@property (nonatomic, retain) PBCodable *protobuf;
@property (nonatomic, readonly) long long sequenceNumberError;
@property (nonatomic, readonly) unsigned long long sessionState;

- (void).cxx_destruct;
- (id)idsProtobuf;
- (id)initWithIDSProtobuf:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(bool)arg3 sequenceNumberManager:(id)arg4;
- (id)protobuf;
- (long long)sequenceNumberError;
- (unsigned long long)sessionState;
- (void)setIdsProtobuf:(id)arg1;
- (void)setProtobuf:(id)arg1;

@end