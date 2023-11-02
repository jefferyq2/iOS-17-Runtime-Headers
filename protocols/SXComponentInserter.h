
@protocol SXComponentInserter <NSObject>

@required

- (SXComponentInsert *)componentInsertForMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;
- (unsigned long long)componentTraits;
- (<SXComponentInsertionConditionEngine> *)conditionEngine;
- (NSArray *)conditionsForDOMObjectProvider:(id <SXDOMObjectProviding>)arg1;
- (bool)validateMarker:(id <SXBlueprintMarker>)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;

@optional

- (<SXComponentInsertionCacheValidator> *)cacheValidatorForCache:(NSArray *)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2;
- (void)componentInsertionCompleted;

@end