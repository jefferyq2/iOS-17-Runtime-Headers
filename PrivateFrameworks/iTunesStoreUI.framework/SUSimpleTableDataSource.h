
@interface SUSimpleTableDataSource : SUTableDataSource {
    Class  _cellConfigurationClass;
    NSArray * _objects;
}

@property (nonatomic, retain) Class cellConfigurationClass;
@property (nonatomic, retain) NSArray *objects;

- (Class)cellConfigurationClass;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectForIndexPath:(id)arg1;
- (id)objects;
- (void)reloadCellContexts;
- (void)setCellConfigurationClass:(Class)arg1;
- (void)setObjects:(id)arg1;

@end