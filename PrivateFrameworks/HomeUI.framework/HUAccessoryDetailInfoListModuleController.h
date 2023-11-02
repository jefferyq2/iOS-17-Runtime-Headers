
@interface HUAccessoryDetailInfoListModuleController : HUItemModuleController {
    void delegate;
}

- (void).cxx_destruct;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)init:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end