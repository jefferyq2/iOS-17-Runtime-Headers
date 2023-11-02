
@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    <SUMenuViewControllerDelegate> * _delegate;
    long long  _selectedIndex;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUMenuViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;

- (bool)_sendDidCancel;
- (id)_tableView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })maximumViewSize;
- (struct CGSize { double x1; double x2; })minimumViewSize;
- (long long)numberOfMenuItems;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (void)reload;
- (long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;

@end