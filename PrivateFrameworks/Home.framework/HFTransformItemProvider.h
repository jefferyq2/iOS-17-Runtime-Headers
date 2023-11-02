
@interface HFTransformItemProvider : HFItemProvider {
    HFItemProvider * _sourceProvider;
    id /* block */  _transformationBlock;
    NSMutableDictionary * _transformedItems;
}

@property (nonatomic, retain) HFItemProvider *sourceProvider;
@property (nonatomic, copy) id /* block */ transformationBlock;
@property (nonatomic, retain) NSMutableDictionary *transformedItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSourceProvider:(id)arg1 transformationBlock:(id /* block */)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setSourceProvider:(id)arg1;
- (void)setTransformationBlock:(id /* block */)arg1;
- (void)setTransformedItems:(id)arg1;
- (id)sourceProvider;
- (id /* block */)transformationBlock;
- (id)transformedItems;

@end