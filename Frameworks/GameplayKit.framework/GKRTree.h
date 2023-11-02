
@interface GKRTree : NSObject {
    void * _cRTree;
    unsigned long long  _queryReserve;
}

@property unsigned long long queryReserve;

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)arg1;

- (void)addElement:(void *)arg1 boundingRectMin:(void *)arg2 boundingRectMax:(void *)arg3 splitStrategy:(void *)arg4; // needs 4 arg types, found 2: id, long long
- (void)dealloc;
- (id)elementsInBoundingRectMinrectMax;
- (id)init;
- (id)initWithMaxNumberOfChildren:(unsigned long long)arg1;
- (unsigned long long)queryReserve;
- (void)removeElement:(void *)arg1 boundingRectMin:(void *)arg2 boundingRectMax:(void *)arg3; // needs 3 arg types, found 1: id
- (void)setQueryReserve:(unsigned long long)arg1;

@end