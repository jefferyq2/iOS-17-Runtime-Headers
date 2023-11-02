
@interface QSSMutableMultilingualStreamingRequest : QSSMultilingualStreamingRequest

@property (nonatomic, copy) QSSAudioPacket *contentAsQSSAudioPacket;
@property (nonatomic, copy) QSSFinishAudio *contentAsQSSFinishAudio;
@property (nonatomic, copy) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (nonatomic, copy) QSSSetRequestOrigin *contentAsQSSSetRequestOrigin;
@property (nonatomic, copy) QSSSetSpeechContext *contentAsQSSSetSpeechContext;
@property (nonatomic, copy) QSSSetSpeechProfile *contentAsQSSSetSpeechProfile;
@property (nonatomic, copy) QSSStartMultilingualSpeechRequest *contentAsQSSStartMultilingualSpeechRequest;
@property (nonatomic, copy) QSSUpdateAudioInfo *contentAsQSSUpdateAudioInfo;
@property (nonatomic) long long content_type;

- (id)contentAsQSSAudioPacket;
- (id)contentAsQSSFinishAudio;
- (id)contentAsQSSLanguageDetected;
- (id)contentAsQSSSetRequestOrigin;
- (id)contentAsQSSSetSpeechContext;
- (id)contentAsQSSSetSpeechProfile;
- (id)contentAsQSSStartMultilingualSpeechRequest;
- (id)contentAsQSSUpdateAudioInfo;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSAudioPacket:(id)arg1;
- (void)setContentAsQSSFinishAudio:(id)arg1;
- (void)setContentAsQSSLanguageDetected:(id)arg1;
- (void)setContentAsQSSSetRequestOrigin:(id)arg1;
- (void)setContentAsQSSSetSpeechContext:(id)arg1;
- (void)setContentAsQSSSetSpeechProfile:(id)arg1;
- (void)setContentAsQSSStartMultilingualSpeechRequest:(id)arg1;
- (void)setContentAsQSSUpdateAudioInfo:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end