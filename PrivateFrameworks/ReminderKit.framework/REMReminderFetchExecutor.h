
@interface REMReminderFetchExecutor : _REMFetchExecutor {
    unsigned long long  _options;
    REMReminderPredicateDescriptor * _predicateDescriptor;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, retain) REMReminderPredicateDescriptor *predicateDescriptor;
@property (nonatomic, retain) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (id)predicateDescriptor;
- (id)resultsFromFetchResult:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)resultsFromFetchResult:(id)arg1 inParentReminder:(id)arg2 error:(id*)arg3;
- (id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
- (void)setPredicateDescriptor:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end