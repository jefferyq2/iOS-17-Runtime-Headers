
@interface ISVitalityFilter : NSObject {
    bool  __isPerformingInputChanges;
    bool  __isPerformingOutputChanges;
    bool  __outputDidChange;
    NSDate * _estimatedScrollEndDate;
    bool  _hasTargetVisibilityOffset;
    bool  _isDecelerating;
    bool  _isScrolling;
    bool  _isVisible;
    id /* block */  _outputChangeHandler;
    double  _playRate;
    double  _scrubOffset;
    bool  _scrubbing;
    <ISVitalitySettings> * _settings;
    double  _targetVisibilityOffset;
    double  _visibilityOffset;
}

@property (setter=_setPerformingInputChanges:, nonatomic) bool _isPerformingInputChanges;
@property (setter=_setPerformingOutputChanges:, nonatomic) bool _isPerformingOutputChanges;
@property (setter=_setOutputDidChange:, nonatomic) bool _outputDidChange;
@property (nonatomic, retain) NSDate *estimatedScrollEndDate;
@property (nonatomic) bool hasTargetVisibilityOffset;
@property (setter=setDecelerating:, nonatomic) bool isDecelerating;
@property (setter=setScrolling:, nonatomic) bool isScrolling;
@property (setter=setVisible:, nonatomic) bool isVisible;
@property (nonatomic, copy) id /* block */ outputChangeHandler;
@property (nonatomic) double playRate;
@property (nonatomic) double scrubOffset;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic, readonly) <ISVitalitySettings> *settings;
@property (nonatomic) double targetVisibilityOffset;
@property (nonatomic) double visibilityOffset;

- (void).cxx_destruct;
- (void)_invalidateOutput;
- (bool)_isPerformingInputChanges;
- (bool)_isPerformingOutputChanges;
- (bool)_outputDidChange;
- (void)_setOutputDidChange:(bool)arg1;
- (void)_setPerformingInputChanges:(bool)arg1;
- (void)_setPerformingOutputChanges:(bool)arg1;
- (id)estimatedScrollEndDate;
- (bool)hasTargetVisibilityOffset;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)inputDidChange;
- (bool)isDecelerating;
- (bool)isScrolling;
- (bool)isScrubbing;
- (bool)isVisible;
- (id /* block */)outputChangeHandler;
- (void)performInputChanges:(id /* block */)arg1;
- (void)performOutputChanges:(id /* block */)arg1;
- (double)playRate;
- (double)scrubOffset;
- (void)setDecelerating:(bool)arg1;
- (void)setEstimatedScrollEndDate:(id)arg1;
- (void)setHasTargetVisibilityOffset:(bool)arg1;
- (void)setOutputChangeHandler:(id /* block */)arg1;
- (void)setPlayRate:(double)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setScrubOffset:(double)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setTargetVisibilityOffset:(double)arg1;
- (void)setVisibilityOffset:(double)arg1;
- (void)setVisible:(bool)arg1;
- (id)settings;
- (double)targetVisibilityOffset;
- (double)visibilityOffset;

@end