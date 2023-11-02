
@interface QSSFinishAudio : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct FinishAudio { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *features_at_endpoint;
@property (nonatomic, readonly) int packet_count;
@property (nonatomic, readonly) NSArray *server_feature_latency_distribution;
@property (nonatomic, readonly) float total_audio_recorded_seconds;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::FinishAudio> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)features_at_endpoint;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinishAudio { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)packet_count;
- (id)server_feature_latency_distribution;
- (float)total_audio_recorded_seconds;

@end