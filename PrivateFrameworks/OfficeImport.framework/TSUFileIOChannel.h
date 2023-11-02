
@interface TSUFileIOChannel : NSObject <TSURandomWriteChannel, TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel> {
    NSObject<OS_dispatch_io> * _channel;
    bool  _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (id)createRandomAccessChannel;
- (id)initForRandomWritingURL:(id)arg1;
- (id)initForReadingURL:(id)arg1;
- (id)initForStreamWritingURL:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4;
- (id)initWithType:(unsigned long long)arg1 channel:(id)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)writeData:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

@end