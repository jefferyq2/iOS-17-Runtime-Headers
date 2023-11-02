
@interface SXDOMObjectProvider : NSObject <SXDOMObjectProviding> {
    SXDOM * _DOM;
    SXJSONObjectMerger * _componentStyleMerger;
    SXJSONObjectMerger * _componentTextStyleMerger;
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (nonatomic, retain) SXDOM *DOM;
@property (nonatomic, readonly) <SXAutoPlacement> *autoPlacement;
@property (nonatomic, readonly) SXComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentStyle> *documentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOM;
- (id)autoPlacement;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForComponent:(id)arg1;
- (id)componentStyleForIdentifiers:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2 component:(id)arg3;
- (id)componentTextStyleForIdentifier:(id)arg1 component:(id)arg2;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 component:(id)arg3;
- (id)componentTextStyleForIdentifiers:(id)arg1 component:(id)arg2;
- (id)components;
- (id)documentStyle;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3;
- (id)resourceForIdentifier:(id)arg1;
- (void)setDOM:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1 component:(id)arg2;

@end