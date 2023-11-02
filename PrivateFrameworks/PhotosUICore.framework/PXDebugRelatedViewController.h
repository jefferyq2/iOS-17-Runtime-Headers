
@interface PXDebugRelatedViewController : UIViewController <MFMailComposeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSCountedSet * _countedKeywords;
    double  _curationScore;
    NSMutableDictionary * _currentKeywords;
    NSString * _debugDescription;
    double  _graphScore;
    bool  _isInteresting;
    NSDictionary * _matchingKeywords;
    double  _matchingScore;
    NSDictionary * _matchingWeight;
    double  _neighborScore;
    NSDictionary * _referenceKeywords;
    NSDictionary * _relatedKeywords;
    double  _relatedScore;
    unsigned long long  _relatedType;
    UISegmentedControl * _segmentedControl;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (void)_initDataSourceWithKeywords:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end