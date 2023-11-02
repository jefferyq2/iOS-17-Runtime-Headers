
@interface VUIDebugMetricsArrayViewController : UITableViewController {
    NSArray * _array;
    NSDictionary * _cachedKeysOrder;
}

@property (nonatomic, retain) NSArray *array;
@property (nonatomic, retain) NSDictionary *cachedKeysOrder;

- (void).cxx_destruct;
- (id)array;
- (id)cachedKeysOrder;
- (void)generateCachedKeys;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)object;
- (void)setArray:(id)arg1;
- (void)setCachedKeysOrder:(id)arg1;
- (void)setObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end