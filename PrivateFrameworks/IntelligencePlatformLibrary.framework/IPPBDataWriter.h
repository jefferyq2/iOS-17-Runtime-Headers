
@interface IPPBDataWriter : NSObject {
    IPPBMutableData * _data;
}

- (void).cxx_destruct;
- (id)immutableData;
- (id)init;
- (id)initWithInitialCapacity:(unsigned long long)arg1;
- (unsigned long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)writeBOOL:(bool)arg1 forTag:(unsigned int)arg2;
- (bool)writeData:(id)arg1;
- (void)writeData:(id)arg1 forTag:(unsigned int)arg2;
- (void)writeDouble:(double)arg1 forTag:(unsigned int)arg2;
- (void)writeFixed32:(unsigned int)arg1 forTag:(unsigned int)arg2;
- (void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned int)arg2;
- (void)writeFloat:(float)arg1 forTag:(unsigned int)arg2;
- (void)writeInt32:(int)arg1 forTag:(unsigned int)arg2;
- (void)writeInt64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeSfixed32:(int)arg1 forTag:(unsigned int)arg2;
- (void)writeSfixed64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeSint32:(int)arg1 forTag:(unsigned int)arg2;
- (void)writeSint64:(long long)arg1 forTag:(unsigned int)arg2;
- (void)writeString:(id)arg1 forTag:(unsigned int)arg2;
- (void)writeUint32:(unsigned int)arg1 forTag:(unsigned int)arg2;
- (void)writeUint64:(unsigned long long)arg1 forTag:(unsigned int)arg2;

@end