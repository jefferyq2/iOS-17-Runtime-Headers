
@interface NTPBPersonalizationProfile : PBCodable <NSCopying> {
    NSMutableArray * _aggregates;
    NSMutableArray * _histories;
}

@property (nonatomic, retain) NSMutableArray *aggregates;
@property (nonatomic, readonly) NSDictionary *aggregatesByFeatureKey;
@property (nonatomic, retain) NSMutableArray *histories;
@property (nonatomic, readonly) NSDictionary *historiesByInstanceIdentifier;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)aggregatesType;
+ (Class)historiesType;

- (void)addAggregates:(id)arg1;
- (void)addHistories:(id)arg1;
- (id)aggregates;
- (id)aggregatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregatesCount;
- (void)clearAggregates;
- (void)clearHistories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)histories;
- (id)historiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)historiesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregates:(id)arg1;
- (void)setHistories:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)aggregatesByFeatureKey;
- (id)historiesByInstanceIdentifier;
- (id)historyForInstanceIdentifier:(id)arg1;
- (unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1;

@end