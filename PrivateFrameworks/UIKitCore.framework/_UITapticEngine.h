
@interface _UITapticEngine : NSObject {
    bool  _feedbackActivated;
    _UIStatesFeedbackGenerator * _feedbackGenerator;
}

@property (nonatomic) bool feedbackActivated;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *feedbackGenerator;

- (void).cxx_destruct;
- (id)_stateForFeedback:(long long)arg1;
- (void)actuateFeedback:(long long)arg1;
- (void)endUsingFeedback:(long long)arg1;
- (bool)feedbackActivated;
- (id)feedbackGenerator;
- (id)init;
- (void)prepareUsingFeedback:(long long)arg1;
- (void)setFeedbackActivated:(bool)arg1;
- (void)setFeedbackGenerator:(id)arg1;

@end