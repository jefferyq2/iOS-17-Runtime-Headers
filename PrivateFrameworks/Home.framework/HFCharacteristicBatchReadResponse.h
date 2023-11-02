
@interface HFCharacteristicBatchReadResponse : NSObject <NAIdentifiable> {
    NSSet * _allCharacteristicTypes;
    NSSet * _allCharacteristics;
    NSSet * _allReadResponses;
    NSSet * _allServices;
    <HFCharacteristicOperationContextProviding> * _contextProvider;
    NSDictionary * _responseKeyedByCharacteristicUUID;
    NSDictionary * _responsesKeyedByCharacteristicType;
}

@property (nonatomic, readonly) NSSet *allCharacteristicTypes;
@property (nonatomic, readonly) NSSet *allCharacteristics;
@property (nonatomic, readonly) NSSet *allFailedReadResponses;
@property (nonatomic, readonly) NSSet *allReadResponses;
@property (nonatomic, readonly) NSSet *allServices;
@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *responseKeyedByCharacteristicUUID;
@property (nonatomic, readonly) NSDictionary *responsesKeyedByCharacteristicType;
@property (readonly) Class superclass;

+ (id)_aggregatedValueForValues:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 metadata:(id)arg3;
+ (id)_averageValueForValues:(id)arg1 metadata:(id)arg2;
+ (id)_mostAbnormalValueForValues:(id)arg1;
+ (id)_mostCommonValueForValues:(id)arg1;
+ (id)aggregatedMetadataForCharacteristics:(id)arg1;
+ (id)aggregatedReadResponseFromResponses:(id)arg1 withAggregationPolicy:(unsigned long long)arg2;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)_aggregatedMetadataForCharacteristicType:(id)arg1;
- (id)_responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2 filter:(id /* block */)arg3;
- (id)allCharacteristicTypes;
- (id)allCharacteristics;
- (id)allFailedReadResponses;
- (id)allReadResponses;
- (id)allResponsesForCharacteristicRecipe:(id)arg1;
- (id)allResponsesForCharacteristicType:(id)arg1;
- (id)allResponsesForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (id)allResponsesForCharacteristicTypes:(id)arg1;
- (id)allServices;
- (id)batchResponseForService:(id)arg1;
- (id)batchResponseForService:(id)arg1 includeChildServices:(bool)arg2;
- (id)contextProvider;
- (unsigned long long)defaultAggregationPolicyForCharacteristicType:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithReadResponses:(id)arg1 contextProvider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)responseForCharacteristic:(id)arg1;
- (id)responseForCharacteristicRecipe:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2 aggregationPolicy:(unsigned long long)arg3;
- (id)responseForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (id)responseKeyedByCharacteristicUUID;
- (id)responsesKeyedByCharacteristicType;
- (id)servicesWithErrorForCharacteristicType:(id)arg1;
- (id)servicesWithValue:(id)arg1 forCharacteristicType:(id)arg2;
- (id)servicesWithValuesPassingTest:(id /* block */)arg1 forCharacteristicType:(id)arg2;

@end