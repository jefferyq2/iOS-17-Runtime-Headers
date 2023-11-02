
@interface TKPage : NSObject {
    TMLContext * _context;
    bool  _dataLoading;
    TMLJSONObject * _dataObject;
    NSURLRequest * _dataRequest;
    UIViewController * _loadingViewController;
    <TKNetworkTask> * _networkTask;
    bool  _ready;
    bool  _shouldShowLoading;
    NSString * _viewName;
    UIViewController * _weakViewController;
}

@property (nonatomic, copy) NSDictionary *data;
@property (nonatomic, readonly) bool dataLoading;
@property (nonatomic, copy) NSURLRequest *dataRequest;
@property (nonatomic) bool shouldShowLoading;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) NSString *viewName;

- (void).cxx_destruct;
- (id)createViewController;
- (id)data;
- (void)dataError;
- (void)dataLoaded:(id)arg1 withError:(id)arg2;
- (bool)dataLoading;
- (id)dataRequest;
- (void)dealloc;
- (void)didFinishLoading:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)didLoadData:(bool)arg1;
- (void)dispose;
- (void)hideLoadingViewController;
- (id)initWithViewName:(id)arg1;
- (void)load;
- (void)loadData:(id)arg1 postData:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)reload;
- (void)reloadWithDelayedShowLoading:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDataRequest:(id)arg1;
- (void)setShouldShowLoading:(bool)arg1;
- (bool)shouldShowLoading;
- (void)showLoadingViewController;
- (id)viewController;
- (id)viewName;

@end