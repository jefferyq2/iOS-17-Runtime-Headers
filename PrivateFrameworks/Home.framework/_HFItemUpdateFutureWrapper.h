
@interface _HFItemUpdateFutureWrapper : NSObject {
    NAFuture * _future;
    bool  _isInternal;
    HFItem * _item;
    HFItemUpdateOutcome * _outcome;
}

@property (nonatomic, retain) NAFuture *future;
@property (nonatomic) bool isInternal;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HFItemUpdateOutcome *outcome;

+ (id)futuresFromWrappers:(id)arg1;
+ (id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(bool)arg3;

- (void).cxx_destruct;
- (id)future;
- (bool)isInternal;
- (id)item;
- (id)outcome;
- (void)setFuture:(id)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setOutcome:(id)arg1;

@end