
@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
    const char * mCurrent;
    NSData * mData;
    const char * mEnd;
    const char * mStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;
- (bool)seekWithinBufferToOffset:(long long)arg1;

@end