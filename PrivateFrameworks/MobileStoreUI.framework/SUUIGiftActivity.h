
@interface SUUIGiftActivity : UIActivity <SUUIGiftViewControllerDelegate> {
    SUUIClientContext * _clientContext;
    SUUIProductPageItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)giftViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end