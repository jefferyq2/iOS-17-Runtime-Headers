
@interface BFFPaneHeaderView_RemoteUI : BFFPaneHeaderView <RUIHeader> {
    <RUIHeaderDelegate> * _rui_headerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)headerLabel;
- (id)initWithAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;

@end