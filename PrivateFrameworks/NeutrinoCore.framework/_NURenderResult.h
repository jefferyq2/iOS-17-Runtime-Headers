
@interface _NURenderResult : NSObject <NURenderResult> {
    <NURenderStatistics> * _statistics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end