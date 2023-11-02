
@interface PXWidgetCompositionSpec : NSObject {
    PXWidgetBarSpec * __defaultHeaderSpec;
    PXWidgetBarSpec * __headerSpecForFlushedContent;
    long long  _disclosureLocation;
    PXWidgetBarSpec * _footerSpec;
    long long  _maximumNumberOfColumns;
    PXWidgetSpec * _widgetSpec;
}

@property (nonatomic, readonly) PXWidgetBarSpec *_defaultHeaderSpec;
@property (nonatomic, readonly) PXWidgetBarSpec *_headerSpecForFlushedContent;
@property (nonatomic, readonly) long long disclosureLocation;
@property (nonatomic, readonly) PXWidgetBarSpec *footerSpec;
@property (nonatomic, readonly) long long maximumNumberOfColumns;
@property (nonatomic, readonly) PXWidgetSpec *widgetSpec;

- (void).cxx_destruct;
- (id)_defaultHeaderSpec;
- (id)_headerSpecForFlushedContent;
- (long long)disclosureLocation;
- (id)footerSpec;
- (id)headerSpecForWidgetContentLayoutStyle:(long long)arg1;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2;
- (long long)maximumNumberOfColumns;
- (id)widgetSpec;

@end