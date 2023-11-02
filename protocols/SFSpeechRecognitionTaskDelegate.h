
@protocol SFSpeechRecognitionTaskDelegate <NSObject>

@optional

- (void)speechRecognitionDidDetectSpeech:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishRecognition:(SFSpeechRecognitionResult *)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTaskWasCancelled:(SFSpeechRecognitionTask *)arg1;

@end