
@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate> {
    id /* block */  _currentRequestCompletionBlock;
    AVSpeechSynthesizer * _synthesizer;
}

@property (nonatomic, copy) id /* block */ currentRequestCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVSpeechSynthesizer *synthesizer;

+ (bool)isSupported;

- (void).cxx_destruct;
- (bool)canHandleRequest:(id)arg1;
- (id /* block */)currentRequestCompletionBlock;
- (void)handleRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setCurrentRequestCompletionBlock:(id /* block */)arg1;
- (void)setSynthesizer:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)stopSpeakingAtNextWord;
- (void)stopSpeakingImmediately;
- (id)synthesizer;

@end