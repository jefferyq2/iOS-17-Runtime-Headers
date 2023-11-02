
@interface AWDWiFiMetricRssiHistory : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnPerHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxPerHistorys;
    unsigned int  _gatewayARPHistory;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int gatewayARPHistory : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rssiHistorys;
    unsigned long long  _timestamp;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txPerHistorys;
}

@property (nonatomic, readonly) int*bcnFrmsHistorys;
@property (nonatomic, readonly) unsigned long long bcnFrmsHistorysCount;
@property (nonatomic, readonly) int*bcnPerHistorys;
@property (nonatomic, readonly) unsigned long long bcnPerHistorysCount;
@property (nonatomic, readonly) int*fwTxFrmsHistorys;
@property (nonatomic, readonly) unsigned long long fwTxFrmsHistorysCount;
@property (nonatomic, readonly) int*fwTxPerHistorys;
@property (nonatomic, readonly) unsigned long long fwTxPerHistorysCount;
@property (nonatomic) unsigned int gatewayARPHistory;
@property (nonatomic) bool hasGatewayARPHistory;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) int*rssiHistorys;
@property (nonatomic, readonly) unsigned long long rssiHistorysCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) int*txFrmsHistorys;
@property (nonatomic, readonly) unsigned long long txFrmsHistorysCount;
@property (nonatomic, readonly) int*txPerHistorys;
@property (nonatomic, readonly) unsigned long long txPerHistorysCount;

- (void)addBcnFrmsHistory:(int)arg1;
- (void)addBcnPerHistory:(int)arg1;
- (void)addFwTxFrmsHistory:(int)arg1;
- (void)addFwTxPerHistory:(int)arg1;
- (void)addRssiHistory:(int)arg1;
- (void)addTxFrmsHistory:(int)arg1;
- (void)addTxPerHistory:(int)arg1;
- (int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnFrmsHistorys;
- (unsigned long long)bcnFrmsHistorysCount;
- (int)bcnPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnPerHistorys;
- (unsigned long long)bcnPerHistorysCount;
- (void)clearBcnFrmsHistorys;
- (void)clearBcnPerHistorys;
- (void)clearFwTxFrmsHistorys;
- (void)clearFwTxPerHistorys;
- (void)clearRssiHistorys;
- (void)clearTxFrmsHistorys;
- (void)clearTxPerHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxFrmsHistorys;
- (unsigned long long)fwTxFrmsHistorysCount;
- (int)fwTxPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxPerHistorys;
- (unsigned long long)fwTxPerHistorysCount;
- (unsigned int)gatewayARPHistory;
- (bool)hasGatewayARPHistory;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (int*)rssiHistorys;
- (unsigned long long)rssiHistorysCount;
- (void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setGatewayARPHistory:(unsigned int)arg1;
- (void)setHasGatewayARPHistory:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)timestamp;
- (int)txFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)txFrmsHistorys;
- (unsigned long long)txFrmsHistorysCount;
- (int)txPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)txPerHistorys;
- (unsigned long long)txPerHistorysCount;
- (void)writeTo:(id)arg1;

@end