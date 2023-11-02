
@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {
    NSArray * _bucketNames;
    NSArray * _currentItems;
    NSArray * _hardFailureItems;
    long long  _maxItemCount;
    NSArray * _nextItems;
    NSArray * _skippedItems;
    NSArray * _softFailureItems;
}

@property (copy) NSArray *bucketNames;
@property (readonly) NSArray *currentItems;
@property (copy) NSArray *hardFailureItems;
@property (nonatomic) long long maxItemCount;
@property (copy) NSArray *nextItems;
@property (copy) NSArray *skippedItems;
@property (copy) NSArray *softFailureItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bucketNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentItems;
- (void)encodeWithCoder:(id)arg1;
- (id)hardFailureItems;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (long long)maxItemCount;
- (id)nextItems;
- (void)setBucketNames:(id)arg1;
- (void)setHardFailureItems:(id)arg1;
- (void)setMaxItemCount:(long long)arg1;
- (void)setNextItems:(id)arg1;
- (void)setSkippedItems:(id)arg1;
- (void)setSoftFailureItems:(id)arg1;
- (id)skippedItems;
- (id)softFailureItems;

@end