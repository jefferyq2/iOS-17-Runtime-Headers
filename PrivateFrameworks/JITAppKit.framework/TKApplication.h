
@interface TKApplication : NSObject {
    NSURL * _baseURL;
    NSURL * _bundleURL;
    <TKApplicationDelegate> * _delegate;
    bool  _ready;
    TKRepository * _repository;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic) <TKApplicationDelegate> *delegate;
@property (nonatomic, readonly) bool ready;
@property (nonatomic, readonly) TKRepository *repository;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (id)absoluteURL:(id)arg1;
- (id)baseURL;
- (id)bundleURL;
- (id)bundleVersion;
- (void)clearBundleCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)didLoadRepository:(id)arg1;
- (void)loadBundle:(id)arg1 completion:(id /* block */)arg2;
- (Class)loadClass:(id)arg1;
- (id)loadPage:(id)arg1;
- (id)loadPage:(id)arg1 withData:(id)arg2;
- (id)loadPage:(id)arg1 withDataRequest:(id)arg2;
- (id)loadPageWithDataRequest:(id)arg1;
- (id)loadView:(id)arg1;
- (id)newErrorViewController:(id)arg1;
- (id)newLoadingViewController;
- (bool)ready;
- (id)repository;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)viewPathForName:(id)arg1;

@end