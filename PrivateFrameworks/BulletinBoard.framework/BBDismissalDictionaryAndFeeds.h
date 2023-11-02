
@interface BBDismissalDictionaryAndFeeds : BBDismissalItem {
    NSString * _dismissalHash;
    double  _dismissalTimeInterval;
}

@property (nonatomic, readonly, copy) NSString *dismissalHash;
@property (nonatomic, readonly) double dismissalTimeInterval;

- (void).cxx_destruct;
- (id)description;
- (id)dismissalHash;
- (double)dismissalTimeInterval;
- (id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2;
- (bool)matchDismissalDictionary:(id)arg1;

@end