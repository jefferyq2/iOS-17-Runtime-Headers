
@interface _DT_GCDAsyncWritePacket : NSObject {
    NSData * buffer;
    unsigned long long  bytesDone;
    long long  tag;
    double  timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end