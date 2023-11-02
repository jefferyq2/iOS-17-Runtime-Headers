
@interface SUUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    long long  _metricsLocationPosition;
    SUUIViewElement * _viewElement;
}

@property (nonatomic, readonly) long long componentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *metricsElementName;
@property (setter=_setMetricsLocationPosition:, nonatomic) long long metricsLocationPosition;
@property (getter=isMissingItemData, nonatomic, readonly) bool missingItemData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUUIViewElement *viewElement;

- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_setMetricsLocationPosition:(long long)arg1;
- (long long)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (long long)metricsLocationPosition;
- (id)valueForMetricsField:(id)arg1;
- (id)viewElement;

@end