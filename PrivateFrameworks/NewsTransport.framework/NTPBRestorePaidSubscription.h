
@interface NTPBRestorePaidSubscription : PBCodable <NSCopying> {
    NSMutableArray * _items;
    NSMutableArray * _restoredPaidSubscriptionChannelIds;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSMutableArray *restoredPaidSubscriptionChannelIds;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)clearItems;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restoredPaidSubscriptionChannelIds;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (void)setItems:(id)arg1;
- (void)setRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end