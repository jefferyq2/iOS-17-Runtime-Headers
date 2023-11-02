
@interface CUAudioRequest : NSObject {
    AVAudioPlayer * _audioPlayer;
    id /* block */  _completion;
    NSString * _label;
}

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (id)audioPlayer;
- (id /* block */)completion;
- (id)label;
- (void)setAudioPlayer:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLabel:(id)arg1;

@end