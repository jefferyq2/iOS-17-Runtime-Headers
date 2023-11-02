
@interface WBUAlertController : UIAlertController <UITableViewDataSource, UITableViewDelegate> {
    WebUIAlert * _alert;
    bool  _automaticallyDismiss;
    id /* block */  _handler;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpAlert;
- (id)initWithAlert:(id)arg1 automaticallyDismiss:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end