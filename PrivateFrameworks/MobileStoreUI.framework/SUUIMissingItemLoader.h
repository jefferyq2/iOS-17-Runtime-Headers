
@interface SUUIMissingItemLoader : NSObject <SUUIItemRequestDelegate> {
    long long  _batchSize;
    <SUUIMissingItemDelegate> * _delegate;
    NSString * _imageProfile;
    NSString * _keyProfile;
    SUUIResourceLoader * _loader;
    NSMutableDictionary * _requests;
}

@property (nonatomic) long long batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIMissingItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageProfile;
@property (nonatomic, copy) NSString *keyProfile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)_requestItems:(id)arg1 withReason:(long long)arg2;
- (long long)batchSize;
- (id)delegate;
- (id)imageProfile;
- (id)init;
- (id)initWithResourceLoader:(id)arg1;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)keyProfile;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2;
- (void)setBatchSize:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setKeyProfile:(id)arg1;

@end