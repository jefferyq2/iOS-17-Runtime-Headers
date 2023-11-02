
@interface SXDOMModifierManager : NSObject <SXDOMModifierManager, SXLayoutProcessor> {
    <SXDOMFactory> * _DOMFactory;
    NSCache * _cache;
    <SXDOMCacheKeyFactory> * _cacheKeyFactory;
    <SXDOMModificationContextFactory> * _contextFactory;
    NSMutableArray * _modifiers;
}

@property (nonatomic, readonly) <SXDOMFactory> *DOMFactory;
@property (nonatomic, readonly) NSCache *cache;
@property (nonatomic, readonly) <SXDOMCacheKeyFactory> *cacheKeyFactory;
@property (nonatomic, readonly) <SXDOMModificationContextFactory> *contextFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMFactory;
- (void)addModifier:(id)arg1;
- (id)cache;
- (id)cacheKeyFactory;
- (id)contextFactory;
- (id)initWithDOMFactory:(id)arg1 contextFactory:(id)arg2 cacheKeyFactory:(id)arg3;
- (id)modifiers;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;

@end