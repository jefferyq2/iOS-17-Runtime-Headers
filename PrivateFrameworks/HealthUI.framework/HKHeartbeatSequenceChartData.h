
@interface HKHeartbeatSequenceChartData : NSObject {
    double  _initialXAxisOffset;
    NSMutableArray * _sections;
}

@property (nonatomic) double initialXAxisOffset;
@property (nonatomic, readonly) NSMutableArray *sections;

- (void).cxx_destruct;
- (void)_expandToSection:(long long)arg1;
- (void)addSequencePoint:(id)arg1 section:(long long)arg2;
- (void)enumerateSequences:(id /* block */)arg1;
- (id)init;
- (double)initialXAxisOffset;
- (long long)sectionCount;
- (id)sections;
- (void)setInitialXAxisOffset:(double)arg1;

@end